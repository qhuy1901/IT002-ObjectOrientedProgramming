#include <iostream>
using namespace std;

class KyHieu
{
protected:
    float TruongDo;
public:
    virtual void Nhap() = 0;
    virtual bool LaDauLangDen() = 0;
    virtual bool LaNotNhac() = 0;
    virtual int LayCaoDo() = 0;
};

class NotNhac :public KyHieu
{
private:
    int CaoDo;
public:
    void Nhap();
    bool LaDauLangDen();
    bool LaNotNhac();
    int LayCaoDo();
};

class DauLang :public KyHieu
{
public: 
    void Nhap();
    bool LaDauLangDen();
    bool LaNotNhac();
    int LayCaoDo();
};
void NotNhac::Nhap()
{
    cout << "Nhap cao do (1.Do, 2.De, 3.Mi, 4.Fa, 5.Sol, 6.La, 7.Si): ";
    cin >> CaoDo;
    cout << "Nhap gia tri truong do: ";
    cin >> TruongDo;
}

bool NotNhac::LaDauLangDen()
{
    return false;
}

bool NotNhac::LaNotNhac()
{
    return true;
}

int NotNhac::LayCaoDo()
{
    return CaoDo;
}

void DauLang::Nhap()
{
    cout << "Nhap gia tri truong do cua dau lang: ";
    cin >> TruongDo;
}

bool DauLang::LaDauLangDen()
{
    if (TruongDo == 1)
        return true;
    return false;
}

bool DauLang::LaNotNhac()
{
    return false;
}

int DauLang::LayCaoDo()
{
    return 0;
}

int main()
{
    KyHieu* DS[100];
    cout << "Nhap so luong ky hieu am nhac: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon 1 de nhap not nhac, 2 de nhap dau lang: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1:DS[i] = new NotNhac;
                break;
            case 2: DS[i] = new DauLang;
                break;
        }
        DS[i]->Nhap();
    }
   
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (DS[i]->LaDauLangDen())
            count++;
    }
    cout << "So dau lang den la: " << count;

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (DS[i]->LaNotNhac() && DS[i]->LayCaoDo() > DS[max]->LayCaoDo())
            max = i;
    }
    cout << "\nVi tri not nhac co cao do lon nhat: " << max;
    return 0;
}
