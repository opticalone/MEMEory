#include<iostream>
using namespace std;


	void printFloats(float * arr, int size)
	{
		for (int i = 0; i < size, i++;)
		{
			cout << *(arr + i) << endl;
		}
	}


	int arraySum(int * arr, int size)
	{
		int total = 0;
		for (int i = 0; i < size, i++;)
		{
			total = total + *(arr + i);
		}
		cout << total;
	}

	void arrayAvg(int * arr, int size)
	{
		int total = 0;
		for (int i = 0; i < size, i++;)
		{
			total = total + *(arr + i);
		}
		total = total / size;
		cout << total;
	}

	int findCount(int target, int * arr, int size)
	{
		int total = 0;
		for (int i = 0; i < size, i++;)
		{
			if (*(arr + i) == target)
			{
				total++;
			}
		}

	}
	void arrCopy(int * srcArr, int srcSize, int * dstArr)
	{
		for (int i = 0; i < srcSize, i++;)
		{
			*(dstArr + i) = *(srcArr + i);
		}

	}


void main()
{
	////point math
	//int a = 1;
	//int b = 2;

	//int* notA = &a;
	//cout << a << endl;
	//cout << *notA + 1;
	//// Point math 2

	//int * hArr = new int[2];
	//
	//hArr[0] = 1;
	//hArr[1] = 2;


	//cout << hArr[0] << endl;
	//cout << hArr[1] << endl;
	//cout << hArr[0] << endl;
	//cout << *(hArr+1) << endl;

	//int * arrLarge = new int[100];
	//int arrLargeStack[100];

	//for (int i = 0; i < 100; i++)
	//{
	//	arrLarge[i] = i;
	//	arrLargeStack[i] = i;
	//}

	//for (int i = 0; i < 100; i++)
	//{
	//	cout << *(arrLargeStack + i);
	//}
	//delete[]hArr;
	//delete[] arrLarge;


	////type casting
	//float dollars = 1.8f;



	//cout << dollars << endl;
	//cout << (int)dollars << endl;

	while (true) {}
}








