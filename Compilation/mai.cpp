#include <iostream>
#include <cassert>
#include "globe.h"
#include "indec.h"

using namespace std;
void releaseHalfLove()
{
	static int a = 0;
	a++;
	cout << "Half-Life:  " << a << endl;
	if (a >= 2)
	{
		a = 0;
	}
}
void stepFizzBuzz()
{

	static int num = 0;
	num++;

	if (num % 3 ==0)
	{
		cout << "Fizz"<< endl;
	}

	if (num % 5==0)
	{
		cout << "Buzz" <<endl;
	}

	if (num % 3 == 0 && num % 5 == 0)
	{
		cout << "fizzbuzz"<<endl;
	}

	else 
	{
		cout << num << endl;
	}
}
void shared()
{
	std::cout << counter << std::endl;
	inc();
	std::cout << counter << std::endl;
	dec();
	std::cout << counter << std::endl;
	inc();
	std::cout << counter << std::endl;
}

void main()
{
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();

	for (int i = 0; i < 30; i++)
	{
		stepFizzBuzz();
	}
	while (true) {}
}




















//void diifArrays(int * arrA, size_t arrASize,
//				int * arrB, size_t arrBSize)
//{
//	assert(arrBSize <= arrASize);
//#ifdef _DEBUG
//	if (arrBSize > arrASize)
//	{
//		std::cerr << __FILE__ << __LINE__ <<"arr b too big"<< "\n" << std::endl;
//		std::cerr << "complied on: " << __DATE__ << " " << __TIME__ << "\n";
//		abort();
//	}
//
//
//#endif
//	for (int i = 0; i < arrBSize; i++)
//	{
//		arrA[i] -= arrB[i];
//	}
//}
//
//void counter()
//{
//	static int ct = 0;
//	ct++;
//	std::cout << numa[i] << std::endl;
//}
////note for whoever is looking through this idk what jappened after this, everything got weird, 
////was hearing chanting, pretty sure the Kim Jong UN are coming
//
//
//
//int main()
//{
//	int numa[] = { 3,2,1 };
//	int numb[] = { 3,2,1,10,12 };
//
//	diifArrays(numa, 10, numb, 5);
//
//	for (int i = 0; i < 3; i++)
//	{
//		std::cout << numa[i] << std::endl;
//	}
//
//	while (true) {}
//}