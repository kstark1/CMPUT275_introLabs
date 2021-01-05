# include <iostream>
# include <vector>
# include <string>
using namespace std;

int main() {
	bool vect = false;

	if (vect){
		vector<char> word;
		char c; 

		while (cin >> c) {
			word.push_back(c);
		}

		for (int i = 0; i < word.size(); i++){
			cout << word[i] << word[i] - 3;
		}
		cout << endl;
	}

	string text;
	cin >> text;
	char c;

	for (int i = 0; i < text.length(); i++){
		switch (text[i]){
			case 'x':
				c = 'a';
				break;
			case 'y':
				c = 'b';
				break;
			case 'z':
				c = 'c';
				break;
			default:
				c = text[i] + 3;
		}
		cout << c;
	}
	cout << endl;

}
