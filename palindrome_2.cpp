# include <iostream>
# include <vector>
using namespace std;

int main() {
	char c;
	vector<char> word;

	while (cin >> c) {
		word.push_back(c);
	} // exits using ctrl + SHIFT + D

	int end = word.size()/2, sz = word.size();
	bool pal = true;

	for (int i=0; i < end; i++){
		if (word[i] == word[sz-1-i]){
			continue;
		}

		else{
			pal = false;
			break;
		}
	}

	if (pal){
		cout << "Palindrome" << endl;
	}
	
	else{
		cout << "Not a Palindrome" << endl;
	}
}
