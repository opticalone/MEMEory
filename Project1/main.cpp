#include <iostream>
#include <string>
//struct Weapon
//{
//	int pDamage;
//	int mDamage;
//	int bDamage;
//	struct OwnerInfor
//	{
//		int playerID;
//		bool isRare;
//	};
//	OwnerInfor owner;
//};
//void enhanceWeapon(Weapon& weap)
//{
//	weap.pDamage *= 2;
//	weap.mDamage *= 2;
//	weap.bDamage *= 2;
//}
//
//
//
//void sum(int a, int b, int& c)
//{
//	c = a + b;
//
//}
//
//int main()
//{
//	int hot = 10;
//	int& bun = hot;
//	int* bunPt = &hot;
//	int taco = 0;
//
//	hot = 15; 
//
//	std::cout << hot;
//	std::cout << bun;
//	std::cout << *bunPt;
//	std::cout << taco;
//
//	int v1 = 1;
//	int v2 = 2;
//	int v3 = -1;
//	std::cout << v3;
//
//	sum(v1, v2, v3);
//
//	std::cout << v3;
//
//
//	//ref with function
//	Weapon hammer;
//	hammer.pDamage = 9001;
//	hammer.mDamage = 0;
//	hammer.bDamage - 0;
//
//	Weapon aresnal[3] =
//
//
//	{
//		{9001,	0,	  0,	{0,true}},
//		{0,		9001, 0,    {0,true}},
//		{0,     0,    9001, {0,false}},
//	};

// -- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed
// -- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed-- Closed
using namespace std;
void product(float a, float b, float& c)
{
	
	c = a*b;

	
}
//  -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN 
// OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN -- OPEN --
void swap(float& a, float& b)
{
	float orange=a;
	float mango=b;

	a = mango;
	b = orange;
}

struct Pet
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};
void feedPet(Pet& mango)
{
	mango.hunger++;

}
void makeDepressedPet(Pet& mango)
{
	mango.happiness--;

}
void parchPet(Pet& mango)
{
	mango.thirst++;

}
void terrorizePet(Pet& mango)
{
	mango.sanity--;

}
























struct Track
{
	std::string trackName; // name of track
	float playtime;        // track runtime
};    

struct Playlist
{
	std::string playlistName; // name of playlist
	Track * trackList;        // pointer to array of tracks
	int trackCount;

};
   
void printPlaylist(const Playlist& pl)
{
	for (int i = 0; i < pl.trackCount; i++)
	{

		cout << pl.trackList[i].trackName << endl;

	}
}





int main()
{

	Track bootysweat2 = { "B00ty Sw34T II", 4.20f };
	Track bootysweat3 = { "B00ty Sw34T III", 4.20f };
	Track bootysweat4 = { "B00ty Sw34T IIII ft.DANKNUGZ", 4.20f };

	Track trackList[3];
	trackList[0] = bootysweat2;
	trackList[1] = bootysweat3;
	trackList[2] = bootysweat4;

	Playlist phatB00ties = { "PHAT B00TIES to Dank Nugs EP vol. 3", trackList, 3 };

	printPlaylist(phatB00ties);



























































//// variables
//int num = 0;
//float dec = 0.3f;
//float dec2 = 1.1f;
//float dec3 = 0.0f;
//
//bool tf = false;
//char letter = 'a';
//
//// references to said variables
//
//int& numRef = num;
//float& decRef = dec;
//bool& tfRef = tf;
//char& letterRef = letter;
//// Product of Two Floats
//
//cout << dec3 << endl;
//product(dec, dec2, dec3);
//cout << dec3 << endl;




while (true) {}
}


