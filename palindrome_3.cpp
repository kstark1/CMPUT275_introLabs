# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
	char c;
	vector<char> word;
	vector<char> drow;

	while (cin >> c) {
		word.push_back(c);
	} // exits using ctrl + SHIFT + D

	cout << endl;
	drow = word;
	reverse(word.begin(), word.end());

	// used for debugging/testing
	if (false){
		for (auto i : word){
			cout << i;
		}
		cout << endl;

		for (auto j : drow){
			cout << j;
		}

		cout << endl;
	} 

	if (drow == word){
		cout << "Palindrome" << endl;
	}
	else{
		cout << "Not a Palindrome" << endl;
	}

}
