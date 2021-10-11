#include <iostream>
using namespace std;

// ===================================  T A S K   1  ===================================

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned char year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
	friend bool operator> (const Date& date1, const Date& date2);
	friend bool operator< (const Date& date1, const Date& date2);
	friend bool operator== (const Date& date1, const Date& date2);
};

bool operator> (const Date& date1, const Date& date2)
{
	if (date1.yyyy > date2.yyyy)
	{
		return true;
	}
	else if (date1.yyyy == date2.yyyy && date1.mm > date2.mm)
	{
		return true;
	}
	else if (date1.yyyy == date2.yyyy && date1.mm == date2.mm && date1.dd > date2.dd)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator< (const Date& date1, const Date& date2)
{
	if (date1.yyyy < date2.yyyy)
	{
		return true;
	}
	else if (date1.yyyy == date2.yyyy && date1.mm < date2.mm)
	{
		return true;
	}
	else if (date1.yyyy == date2.yyyy && date1.mm == date2.mm && date1.dd < date2.dd)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator== (const Date& date1, const Date& date2)
{
	if (date1.yyyy == date2.yyyy && date1.mm == date2.mm && date1.dd == date2.dd)
	{
		return true;
	}
	else return false;
}




// ===================================  T A S K   2  ===================================

struct Country
{
	string name;
	int area;
	int population;
};

bool operator> (const Country& country1, const Country& country2)
{
	if (country1.area > country2.area && country1.population > country2.population)
	{
		return true;
	}
	else return false;
}

bool operator< (const Country& country1, const Country& country2)
{
	if (country1.area < country2.area && country1.population < country2.population)
	{
		return true;
	}
	else return false;
}

bool operator>> (const Country& country1, const Country& country2)
{
	int density1 = country1.population / country1.area;
	int density2 = country2.population / country2.area;
	if (density1 > density2) return true;
	else return false;
}

bool operator<< (const Country& country1, const Country& country2)
{
	int density1 = country1.population / country1.area;
	int density2 = country2.population / country2.area;
	if (density1 < density2) return true;
	else return false;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Date date1 = { 7, 1, 1980 };
	Date date2 = { 7, 2, 1993 };
	Date date3 = { 7, 1, 1980 };

	if (date1 < date2) cout << "1) true\n";
	else cout << "1) false\n";
	if (date1 > date2) cout << "2) true\n";
	else cout << "2) false\n";
	if (date1 == date2) cout << "3) true\n";
	else cout << "3) false\n";
	if (date1 == date3) cout << "4) true\n";
	else cout << "4) false\n";



	Country Belarus = { "Belarus", 207600, 9408400 };
	Country Poland = { "Poland", 312696, 38268000 };

	if (Belarus > Poland) cout << "Население и площадь Беларуси больше населения и площади Польши.\n";
	else cout << "Население и площадь Польши больше населения и площади Беларуси.\n";

	if (Belarus >> Poland) cout << "Плотность населения Беларуси больше плотности населения Польши.\n";
	else cout << "Плотность населения Польши больше плотности населения Беларуси.\n";
}

