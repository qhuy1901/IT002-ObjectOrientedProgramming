#include <iostream>
using namespace std;

class QuanCo
{
    protected:
        int x, y;
        int MauCo; // 0 là quân trắng, 1 là quân đen
    public:
        virtual void CachDi() = 0;
};

class Tuong :public QuanCo //Tướng
{
    public:
        Tuong(int, int, int);
        void CachDi();
};
class Si:public QuanCo
{
    public:
        Si(int, int, int);
        void CachDi();
};
class tuong :public QuanCo // Tượng
{
    public:
        tuong(int, int, int);
        void CachDi();
};
class Ma :public QuanCo
{
    public:
        Ma(int, int, int);
        void CachDi();
};
class Xe :public QuanCo
{
    public:
        Xe(int, int, int);
        void CachDi();
};
class Phao :public QuanCo
{
    public:
        Phao(int, int, int);
        void CachDi();
};
class Tot :public QuanCo
{
    public:
        Tot(int, int, int);
        void CachDi();
};

Tuong::Tuong(int xx, int yy, int mc)
{
    x = xx;
    y = yy;
    MauCo = mc;
}

void Tuong::CachDi()
{
    cout << "Di tung o mot, di ngang hoac doc. Tuong luon phai o trong pham vi cung...";
}

Si::Si(int xx, int yy, int mc)
{
    x = xx;
    y = yy;
    MauCo = mc;
}

void Si::CachDi()
{
    cout << "Di xeo 1 o moi buoc...";
}

tuong::tuong(int x, int y, int mc)
{
    this->x = x;
    this->y = y;
    MauCo = mc;
}
void tuong::CachDi()
{
    cout << "Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di...";
}

Ma::Ma(int xx, int yy, int mc)
{
    x = xx; 
    y = yy; 
    MauCo = mc;
}

void Ma::CachDi()
{
    cout << "Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di ... ";
}

Xe::Xe(int xx, int yy, int mc)
{
    x = xx;
    y = yy;
    MauCo = mc;
}

void Xe::CachDi()
{
    cout << "Di ngang hay doc tren ban co ... ";
}

Phao::Phao(int xx, int yy, int mc)
{
    x = xx;
    y = yy;
    MauCo = mc;
}

void Phao::CachDi()
{
    cout << "Di ngang va doc giong nhu xe... ";
}

Tot::Tot(int xx, int yy, int mc)
{
    x = xx;
    y = yy;
    MauCo = mc;
}

void Tot::CachDi()
{
    cout << "Di mot o moi nuoc. Neu tot chua qua song ... ";
}

int main()
{
    QuanCo* DS[32];
    //Tạo bàn cờ
    DS[0] = new Tuong(1, 5, 0);
    DS[1] = new Tuong(10, 5, 1);

    DS[2] = new Si(1, 4, 0);
    DS[3] = new Si(1, 6, 0);
    DS[4] = new Si(10, 4, 1);
    DS[5] = new Si(10, 6, 1);

    DS[6] = new tuong(1, 3, 0);
    DS[7] = new tuong(1, 7, 0);
    DS[8] = new tuong(10, 3, 1);
    DS[9] = new tuong(10, 7, 1);

    DS[10] = new Ma(1, 2, 0);
    DS[11] = new Ma(1, 8, 0);
    DS[12] = new Ma(10, 2, 1);
    DS[13] = new Ma(10, 8, 1);

    DS[14] = new Xe(1, 1, 0);
    DS[15] = new Xe(1, 9, 0);
    DS[16] = new Xe(10, 1, 1);
    DS[17] = new Xe(10, 9, 1);

    DS[18] = new Phao(3, 2, 0);
    DS[19] = new Phao(3, 8, 0);
    DS[20] = new Phao(8, 2, 0);
    DS[21] = new Phao(8, 8, 1);

    DS[22] = new Tot(4, 1, 0);
    DS[23] = new Tot(4, 3, 0);
    DS[24] = new Tot(4, 5, 0);
    DS[25] = new Tot(4, 7, 0);
    DS[26] = new Tot(4, 9, 0);

    DS[27] = new Tot(7, 1, 1);
    DS[28] = new Tot(7, 3, 1);
    DS[29] = new Tot(7, 5, 1);
    DS[30] = new Tot(7, 7, 1);
    DS[31] = new Tot(7, 9, 1);

    //Xuất cách đi của quân cờ
    int index;
    cout << "Nhap thu tu cua quan co can tim: ";
    cin >> index;
    DS[index]->CachDi();
    return 0;
}
