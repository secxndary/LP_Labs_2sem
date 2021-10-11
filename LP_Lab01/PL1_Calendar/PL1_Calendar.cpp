#include <iostream>
using namespace std;

int date, CountNevis[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 },
CountVis[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
short year, day, month;
bool ifVisokos, error;

bool VisokosYear()
{
    do {
        setlocale(LC_ALL, "ru");
        cout << "Введите дату в формате ДДММГГГГ: " << endl;
        cin >> date;
        year = date % 10000;
        month = date % 1000000 / 10000;
        day = date % 100000000 / 1000000;
        if (day > 31 || month > 12 || year < 1 || day < 1 || month < 1 || (month == 2 && day > 29))
        {
            error = 1;
            cout << "Ошибка. Введите корректную дату: " << endl;
        }
        else
        {
            error = 0;
            cout << "Введённая дата: " << day << "." << month << "." << year << "\n===================================\n";
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                ifVisokos = 1;
                cout << year << "-й год является високосным." << endl;
            }
            else
            {
                ifVisokos = 0;
                cout << year << "-й год не является високосным." << endl;
            }
        }
    } while (error);
    return ifVisokos;
}

short SequenceDate()
{
    short MonthSum = 0, SequenceDate;
    if (ifVisokos)
    {
        for (short i = 0; i < month - 1; i++)
        {
            MonthSum += CountVis[i];
        }
        SequenceDate = MonthSum + day;
        cout << "Порядковый номер введённого дня: " << SequenceDate << endl;
    }
    if (!ifVisokos)
    {
        for (short i = 0; i < month - 1; i++)
        {
            MonthSum += CountNevis[i];
        }
        SequenceDate = MonthSum + day;
        cout << "Порядковый номер введённого дня: " << SequenceDate << endl;
    }
    return SequenceDate;
}

int DaysToBDay()
{
    int DiffDay, DiffMonth, DiffMonthSum = 0, DiffYear, SumDiff, MonthCounter = month - 1, DaysToBDay, NormirVis; //10. 06. 2020  —  12. 08. 2021
    DiffDay = abs(12 - day); //2 days
    DiffMonth = abs(8 - month); //2 month = +30 +31 = +CountNevis[5] + CountNevis[6] = +CountNevis[month] + CountNevis[month + 1]
    DiffYear = abs(2021 - year); // 1 year +365 
    for (short i = 0; i < DiffMonth; i++)
    {
        DiffMonthSum += CountNevis[MonthCounter + i];
    }
    if (DiffYear >= 4)
    {
        NormirVis = DiffYear / 4;
        DaysToBDay = DiffDay + DiffMonthSum + DiffYear * 365 + NormirVis;
    }
    else if (month < 3 && (2021 - year) > 1)
    {
        DaysToBDay = DiffDay + DiffMonthSum + DiffYear * 365 + 1;
    }
    else DaysToBDay = DiffDay + DiffMonthSum + DiffYear * 365;
    cout << "Дней до ближайшего дня рождения: " << DaysToBDay << endl;
    return DaysToBDay;
}

int main()
{
    VisokosYear();
    SequenceDate();
    DaysToBDay();
}
