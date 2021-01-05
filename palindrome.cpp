# include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	char word[n]; 

	for (int i = 0; i < n; i++){
		cin >> word[i];
	}

	int end = n/2;
	bool pal = true;

	for (int i = 0; i < end; i ++){

		if (word[i] == word[n-1-i]){
			continue;
		}
		else{
			pal = false;
			break;
		}
	}

	if (pal == true){
		cout << "Palindrome" << endl;
	}
	else{
		cout << "Not a Palindrome" << endl;
	}
}
