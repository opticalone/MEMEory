#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::fstream;
using namespace std;

int main()
{
	cout << "ch00se ph1l3 ppl0x?" << endl;
	cout << endl;

fstream file;
string f = "";
cin >> f;

file.open(f);

if (file.fail())
{
	cout << "not found" << endl;
	return -1;
}

//Reading
string buffer;
while (std::getline(file, buffer))
{
	cout << buffer << endl;
}
	while (true) {}
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