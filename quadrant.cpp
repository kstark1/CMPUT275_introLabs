# include <iostream>
using namespace std;

int main() {
	// using if statements
	int x, y;
	cin >> x >> y;

	if (x > 0 and y > 0) {
		cout << 1 << endl;
	}

	else if (x > 0 and y < 0){
		cout << 4 << endl;
	}

	else if (x < 0 and y > 0){
		cout << 2 << endl;
	}

	else {
		cout << 3 << endl;
	}

	// cannot use switch statements
}
