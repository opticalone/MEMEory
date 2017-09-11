#include <iostream>
#include <string>

using namespace std;

int sumTwoIntPtrs(int * a, int * b)
{


	return *a + *b;
}



int main()
{




	int * numAPtr = new int(10);
	int * numBPtr = new int(22);

	std::cout << sumTwoIntPtrs(numAPtr, numBPtr);

	float * potati = new float(90.0f);

	bool * potato = new bool(false);



	int * arrayi = new int[100];
	float * arrayf = new float[100];
	bool * arrayb = new bool[100];



	for (int i = 0; i < 100; i++)
	{
		arrayi[i] = (i + 1) * 3;
		std::cout << arrayi[i] << std::endl;
	}

	//3

	int uIn = 0;
	int even = 0;
	int odd = 0;
	std::cout << "How many numbers are you going to provide?" << std::endl;
	std::cin >> uIn;
	int *uArray = new int[uIn];
	for (int i = 0; i < uIn; i++)
	{
		int place = 0;
		std::cout << "what is numvber? " << i + 1 << std::endl;
		std::cin >> place;
		uArray[i] = place;
		if (uArray[i] % 2 == 1)
		{
			odd++;

		}
		else
		{
			even++;

		}
		if (even > odd)
		{
			std::cout << "even numbers are cool";

		}
		else
		{
			std::cout << "odd numbers are cool";
		}


	}

		//open4
	bool uIna = false;
	int count = 0;
	std::cout << "how many numbers do you need?\n";
	std::cin >> uIn;
	int* array21 = new int[uIn];

	for (int i = 0; i < uIn; i++)
	{
		int place = 0;
		std::cout << "what do number?" << i + 1 << std::endl;
		std::cin >> place;
		array21[i] = place;
		count = count + array21[i];

	}
	if (count == 21)
	{
		std::cout << "nice";
	}
	else
	{
		std::cout << "you suck greatly\n";

	}

		std::cout << "numA: " << *numAPtr << std::endl;
		std::cout << "numB: " << numBPtr << std::endl;


		int res = sumTwoIntPtrs(numAPtr, numBPtr);

		std::cout << "summ: " << res << std::endl;

		system("pause");

		









		while (true) {}
		delete numAPtr;
		delete numBPtr;
		delete potati;
		delete potato;
		delete arrayi;
		delete arrayf;
		delete arrayb;

		return 0;
	}
