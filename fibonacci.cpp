# include <iostream>
using namespace std;

int main() {
	int i, j, n, count;
	i = 0;
	j = 1;
	count = 0;
	cout << i << endl << j << endl;
    do {
    	n = i + j;
    	i = j;
    	j = n;
    	count ++;
    	cout << n << endl;
    } while (count < 18);
}
