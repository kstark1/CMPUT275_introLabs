# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

int main() {
	// example of finding smallest number in a container
	vector<int> myVect = {3, 5, 2, 7, 10};
	int smallest = 1e9; // literal representing 1 * 10^9

	// cycles through the elements in myVect
	// auto declares an iterator type variable
	for (auto x : myVect) {
		smallest = min(smallest, x); // compares the current smallest w/ next number 
	}

	cout << smallest << endl;

}
