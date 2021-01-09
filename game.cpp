# include <iostream>
# include <string>
using namespace std;

// struct that holds info about games
struct Game {
	string name;
	int year;
	float rating;
};

int main() {
	Game pokenomBury = {"Pokenom: Bury", 2002, 4.7};

	Game starkite2;
	starkite2.name = "Starkie 2";
	starkite2.year = 2010;
	starkite2.rating = 4.7;

	cout << pokenomBury.name << " was released in " << pokenomBury.year << endl;

	cout << starkite2.name << " has a rating of " << starkite2.rating << endl;
}