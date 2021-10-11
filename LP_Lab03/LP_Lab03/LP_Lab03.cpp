#include <iostream>
using namespace std;

//ValdaitsevSasha2002
//Windows - 1251: 56 61 6C 64 61 69 74 73 65 76 53 61 73 68 61 32 30 30 32
//UTF - 8 : 0056 0061 006c 0064 0061 0069 0074 0073 0065 0076 0053 0061 0073 0068 0061 32 30 30 32
//UTF - 16: 0056 0061 006c 0064 0061 0069 0074 0073 0065 0076 0053 0061 0073 0068 0061 32 30 30 32
//
//ВалдайцевСаша2002
//Windows - 1251: 412 430 43B 434 430 439 446 435 432 421 430 448 430 32 30 30 32
//UTF - 8 : d092 d0b0 d0bb d0b4 d0b0 d0b9 d186 d0b5 d0b2 d0a1 d0b0 d188 d0b0 32 30 30 32
//UTF - 16 : 0412 0430 043b 0434 0430 0439 0446 0435 0432 0421 0430 0448 0430 32 30 30 32
//
//Валдайцев2002Sasha
//Windows - 1251: 412 430 43B 434 430 439 446 435 432 32 30 30 32 53 61 73 68 61
//UTF - 8 : d092 d0b0 d0bb d0b4 d0b0 d0b9 d186 d0b5 32 30 30 32 0053 0061 0073 0068 0061
//UTF - 16: 0412 0430 043b 0434 0430 0439 0446 0435 0432 32 30 30 32 0053 0061 0073 0068 0061

char* UpperW1251(char* destination, char* source)
{
	for (int i = 0; i <= strlen(source); i++)
	{
		if (source[i] == 'ё')
		{
			destination[i] = 'Ё';
		}
		else if (source[i] >= 'a' && source[i] <= 'z')
		{
			destination[i] = source[i] - 32;
		}
		else if (source[i] >= 'а' && source[i] <= 'я')
		{
			destination[i] = source[i] - 32;
		}
		else
			destination[i] = source[i];
	}
	cout << destination << endl;
	return destination;
}

int main()
{
	setlocale(LC_ALL, "ru");
	char lf[] = "ValdaitsevSasha2002";  //windows-1251
	char rf[] = "ВалдайцевСаша2002";
	char lr[] = "Валдайцев2002Sasha";

	wchar_t Llf[] = L"ValdaitsevSasha2002"; //utf-16
	wchar_t Lrf[] = L"ВалдайцевСаша2002";
	wchar_t Llr[] = L"Валдайцев2002Sasha";

	char source[] = "12345awfgdhwdулопдууыопё";
	char destination[] = "158256789012343572567892";
	UpperW1251(destination, source);
	system("pause");
	return 0;
}


