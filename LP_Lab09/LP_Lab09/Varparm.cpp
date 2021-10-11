#include <iostream>
using namespace std;

namespace Varparm
{

	int ivarparm(int n, ...) 
	{
		int composition = 1;
		int* ptr = &n;

		for (int i = 1; i - 1 != ptr[0]; i++)
		{
			composition *= ptr[i];
			if (composition > 21131493 || composition < 0 || n == 0) return 0;
		}

		return composition;
	}


	int svarparm(short n, ...)
	{
		int composition = 1;
		int* ptr = (int*)&n;

		if (n == 0) return 0;
		for (int i = 1; i - 1 != ptr[0]; i++)
		{
			composition *= ptr[i];
			if (composition > 21131493 || composition < 0 || n == 0) return 0;
		}

		return composition;
	}


	double fvarparm(float n, ...)
	{
		double sum = (double)n;
		double* ptr = (double*)(&n + 1);

		if (n == FLT_MAX) return 0;
		for (int i = 0; ptr[i] != (double)FLT_MAX; i++)
		{
			sum += ptr[i];
		}

		return sum;
	}


	double dvarparm(double n, ...)
	{
		double sum = n;
		double* ptr = &n + 1;

		if (n == DBL_MAX) return 0;
		for (int i = 0; ptr[i] != DBL_MAX; i++) 
		{
			sum += ptr[i];
		}

		return sum;
	}

}