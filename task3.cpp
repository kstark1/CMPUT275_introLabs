# include <iostream>
using namespace std;

// outputs 10's digit

int main() {
	int n;
	cin >> n;
	cout << ((abs(n) % 100) - (abs(n) % 10))/10  << endl;

}
