#include <iostream>
#include <Windows.h>
using namespace std;

int funcL()
{
	int ff = 1;
	cout << ff << endl;
	return ff;
}

int main()
{
	//2
	int nI = 3;
	float nF = 3.0;
	int x = 9 + nI, y = 10 + nI, z = 11 + nI;
	float s = 1.0 + nF;
	//4
	bool bF = false, bT = true;
	//5
	char ch = 'z';
	//6
	wchar_t wCh = L'щ';
	//7
	short sX = x; //c = 12
	short sMX = -x; //fffffff4 = -12
	char bSX[33], bSMX[33];
	_itoa_s(sX, bSX, 16);
	_itoa_s(sMX, bSMX, 16);
	cout << "Task #7.\nx = " << bSX << endl;
	cout << "-x = " << bSMX << endl;
	//8
	short shMax = 0x7fff; //32767 = SHRT_MAX
	short shMin = -0x7fff; //-32767 = SHRT_MIN 
	//9
	unsigned short uShMax = USHRT_MAX; //FFFF = 65535
	unsigned short uShMin = 0;
	//10
	int iY = y; //d = 13
	int iMY = -y; //fffffff3 = -13
	char bIY[33], bIMY[33];
	_itoa_s(iY, bIY, 16);
	_itoa_s(iMY, bIMY, 16);
	cout << "Task #10.\ny = " << bIY << endl;
	cout << "-y = " <<bIMY << endl;
	//11
	int intMax = INT_MAX;
	int intMin = INT_MIN;
	//12
	unsigned int uIntMax = UINT_MAX;
	unsigned int uIntMin = 0;
	//13
	long longZ = z;
	long longMZ = -z;
	char bLZ[33], bLMZ[33];
	_itoa_s(longZ, bLZ, 16); //e
	_itoa_s(longMZ, bLMZ, 16); //fffffff2
	cout << "Task #13.\nz = " << bLZ << endl;
	cout << "-z = " << bLMZ << endl;
	//14
	long lMax = LONG_MAX;
	long lMin = LONG_MIN;
	//15
	long ulMax = ULONG_MAX;
	long ulMin = 0;
	//16
	float fS = s;
	float fMS = -s;
	char bS[33], bMS[33];
	_itoa_s(fS, bS, 16); //4
	_itoa_s(fMS, bMS, 16); //fffffffc
	cout << "Task #16.\ns = " << bS << endl;
	cout << "-s = " << bMS << endl;
	//17
	float f = 2342.234;
	float mF = -12414.123;
	float pInf = f / 0;
	float mInf = mF / 0;
	float ind = pInf + mInf;
	//18
	char charL = 'u';
	wchar_t wcharL = L'д';
	short shortL = 1424;
	int intL = 238742;
	float floatL = 124.24;
	double doubleL = 9328.032943463826473;
		
	char* pCharL = &charL;
	wchar_t* pWcharL = &wcharL;
	short* pShortL = &shortL;
	int* pIntL = &intL;
	float* pFloatL = &floatL;
	double* pDoubleL = &doubleL;

	pCharL += 3;
	pWcharL += 3; 
	pShortL += 3;
	pIntL += 3;
	pFloatL += 3;
	pDoubleL += 3;
	//19
	funcL();
	int (*pFuncL)();
	pFuncL = funcL; //указатель на функцию
	//20
	char& refCharL = charL;
	wchar_t& refWcharL = wcharL;
	short& refShortL = shortL;
	int& refIntL = intL;
	float& refFloatL = floatL;
	double& refDoubleL = doubleL;
	// *void
	void* pVoidChar = &charL;
	void* pVoidInt = &intL;

	double test = 1 / 3;

}


