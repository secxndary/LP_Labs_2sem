#include <iostream>
using namespace std;

namespace Call
{
	int _cdecl cdevl(int &a, int &b, int &c)
	{
		return a * b * c;
	}

	int _stdcall cstd(int& a, int b, int c)
	{
		return a * b * c;
	}

	int _fastcall cfst(int a, int b, int c)
	{
		return a * b * c;
	}
}