#include <iostream>
#include "Varparm.h"
#include "Call.h"

using namespace std;
using namespace Varparm;
using namespace Call;

int defaultparm(int x1, int x2, int x3, int x4, int x5, int x6 = 0, int x7 = 0)
{
	if (x6 != 0 && x7 != 0)
	{
		return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;
	}
	else return (x1 + x2 + x3 + x4 + x5) / 5;
}

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "============= ivarparm =============\n";
	cout << "ivarparm с 1 параметром: " << ivarparm(3) << '\n';
	cout << "ivarparm с 2 параметрами: " << ivarparm(1, 2) << '\n';
	cout << "ivarparm с 3 параметрами: " << ivarparm(2, 3, 3) << '\n';
	cout << "ivarparm с 7 параметрами: " << ivarparm(6, 2, 4, 2, 5, 8, 3) << "\n\n";

	cout << "============= svarparm =============\n";
	cout << "ivarparm с 1 параметром: " << svarparm(3) << '\n';
	cout << "ivarparm с 2 параметрами: " << svarparm(1, 3) << '\n';
	cout << "ivarparm с 3 параметрами: " << svarparm(2, 2, 3) << '\n';
	cout << "ivarparm с 7 параметрами: " << svarparm(6, 7, 4, 2, 4, 8, 3) << "\n\n";

	cout << "============= fvarparm =============\n";
	cout << "ivarparm с 1 параметром: " << fvarparm(FLT_MAX) << '\n';
	cout << "ivarparm с 2 параметрами: " << fvarparm(1.5, FLT_MAX) << '\n';
	cout << "ivarparm с 3 параметрами: " << fvarparm(2.4, 3.2, FLT_MAX) << '\n';
	cout << "ivarparm с 7 параметрами: " << fvarparm(6.3, 7.13, 4.93, 3.22, 13.44, 3.3238, FLT_MAX) << "\n\n";

	cout << "============= dvarparm =============\n";
	cout << "ivarparm с 1 параметром: " << dvarparm(DBL_MAX) << '\n';
	cout << "ivarparm с 2 параметрами: " << dvarparm(4.20, DBL_MAX) << '\n';
	cout << "ivarparm с 3 параметрами: " << dvarparm(4.424, 8.32, DBL_MAX) << '\n';
	cout << "ivarparm с 7 параметрами: " << dvarparm(7.3213, 65.123, 34.93, 2.242, 3.45, 3.2538, DBL_MAX) << "\n\n";


	int a = 3, b = 4, c = 8;
	int& refA = a, & refB = b, & refC = c;

	cout << "\ncdevl = " << cdevl(refA, refB, refC) << '\n';
	cout << "cstd = " << cstd(refA, b, c) << '\n';
	cout << "cfst = " << cfst(a, b, c) << "\n\n\n";


	cout << "defaultparm с 5 параметрами: " << defaultparm(5, 3, 7, 5, 1) << '\n';
	cout << "defaultparm с 7 параметрами: " << defaultparm(6, 8, 3, 6, 1, 9, 14) << '\n';
}
