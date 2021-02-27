class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year

    def __str__(self):
        return ("%d/%d/%d" % (self.day, self.month, self.year))
    
    def __sub__(self, other):
        return self.getTotalDay() - other.getTotalDay()

    def isValidDate(self):
        if self.day < 0 or self.day > numberDaysOfMonth(self.month, self.year):
            return False
        if self.month < 0 or self.month > 12:
            return False
        if self.year < 0 or self.year > 9999:
            return False
        return True

    def getTotalDay(self):
        totalDay = 0
        for year in range(1, self.year):
            if isLeapYear(year): 
                totalDay += 366
            else:
                totalDay += 365
        for month in range(1, self.month):
            totalDay += numberDaysOfMonth(month, self.year)
        totalDay += self.day
        return totalDay

    def findNextDate(self):
        if not self.isValidDate():
            return ('Error: Invalid date')

        nextDate = Date(self.day, self.month, self.year)
        if self.day == numberDaysOfMonth(self.month, self.year):
            nextDate.day = 1
            if self.month == 12:
                nextDate.month = 1
                nextDate.year = self.year + 1
            else:
                nextDate.month = self.month + 1
        else:
            nextDate.day = self.day + 1
        return nextDate

    def findPreviousDate(self):
        if not self.isValidDate():
            return ('Error: Invalid date')
                
        previousDate = Date(self.day, self.month, self.year)
        if self.day == 1:
            if self.month == 1:
                previousDate.month = 12
                previousDate.year = year - 1
            else:
                previousDate.month = self.month - 1
                previousDate.day = numberDaysOfMonth(previousDate.month, previousDate.year)
        else:
            previousDate.day = self.day - 1
        return previousDate 


# === Fuction ===
def isLeapYear(year):
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        return True
    return False

def numberDaysOfMonth(month, year):
    if month == 2:
        return 29 if isLeapYear(year) else 28
    elif month == 4 or month ==  6 or month == 9  or month == 11:
        return 30
    else:
        return 31  

# === Main Program ====
inputtedDate = Date(
      int(input('Enter the day of the date: ')),
      int(input('Enter the month of the date: ')),
      int(input('Enter the year of the date: '))
)
while True:
    selection = input("""What do you want to do? Choose from the following option:
    1 - Check the date whether it is valid?
    2 - Find the next date of it
    3 - Find the previous date of it
    4 - Subtract two days
    0 - Cancel
>> """)
    if selection == '1':
        if (inputtedDate.isValidDate()):
            print(inputtedDate, "is valid date.")
        else:
            print(inputtedDate, "is invalid date." )
    elif selection == '2':
        nextDate = inputtedDate.findNextDate()
        print('The next date of {} is {}'.format(inputtedDate, nextDate))
    elif selection == '3':
        previousDate = inputtedDate.findPreviousDate()
        print('The previous date of {} is {}'.format(inputtedDate, previousDate))    
    elif selection == '4':
        futureDate = Date(
            int(input('Enter the day of the future date: ')),
            int(input('Enter the year of the future date: ')),
            int(input('Enter the year of the future date: '))
        )
        print("The distance between the future date and the inputted date is", futureDate - inputtedDate)
    elif selection == '0':
        print("Canceling...")
        break
    else:
        print("Invalid selection. Please try again...")    
