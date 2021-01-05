# include <iostream>
using namespace std;

int main(){
	/*
	// example using if - else if - else block
	int x;
	cin >> x;

	if (x > 0) {
		cout << "positive" << endl;
	}

	else if (x < 0) {
		cout << "negative" << endl;
	}

	else {
		cout << "zero" << endl;
	} */

	// example using switch statements
	char grade;
	cin >> grade;

	switch (grade) {
		case 'A' :
			cout << "Excellent!" << endl;
			break;
		case 'B' :
		case 'C' : 
			cout << "Well done" << endl;
			break;
		case 'D' :
			cout << "You passed" << endl;
			break;
		case 'F' :
			cout << "Better try again" << endl;
		default :
			cout << "Invalid grade" << endl;
	}
}