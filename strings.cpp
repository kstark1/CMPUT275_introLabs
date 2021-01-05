# include <iostream>
# include <string>
using namespace std;

int main() {
	string inputString;
	cin >> inputString;

	for (int i = inputString.length()-1; i >= 0; i--){
		cout << inputString[i];
	}

	cout << endl;

	inputString.push_back('z');
	cout << inputString << endl;

	inputString.pop_back();
	cout << inputString <<endl;

	inputString.erase();
	cout << inputString << inputString.length() << endl;
}