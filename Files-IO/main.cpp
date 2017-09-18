#include <iostream>
#include <fstream>
#include <string>
#include "monster.h"

using std::string;
using std::fstream;
using namespace std;
void main()
{
	
	std::string inputBuffer;


	std::cout << "where would you like to save this?" << std::endl;
	std::cin >> inputBuffer;

	std::fstream proData;
	proData.open(inputBuffer.c_str(), std::ios_base::out);

	if (proData.fail())
	{
		std::cout << "nope" << std::endl;
		return;
	}

	cin.ignore(1000, '\n');

	std::cout << "Who are you?" << std::endl;
	std::cin >> inputBuffer;
	proData << inputBuffer;

	std::cout << "how old are you?" << std::endl;
	std::cin >> inputBuffer;
	proData << inputBuffer;
	std::cout << "whats your fav color??" << std::endl;
	std::cin >> inputBuffer;
	proData << inputBuffer;

	proData.flush();
	proData.close();

	std::cout << "thanks" << std::endl;


}

void monster()
{
	fstream entStream;
	entStream.open("monsters.txt");

	if (entStream.fail())
	{
		std::cout << "nope" << std::endl;
		return;
	}
	int entCount = 0;
	Entity entities[100];



}




























//CLASS THING








//file.clear();//reset errof flag
//file.seekp(0, std::ios_base::end);// move cursor to end


//file << std::endl << "No, Fuck you.";

//file.flush();
//file.close();
//

////mahe a new file


//fstream autogenifneeded;
//autogenifneeded.open("createme.txt", std::ios::out | std::ios::in);
//if (autogenifneeded.fail())
//{
//	cout << "you done goofed" << endl;
//	return-1;
//}