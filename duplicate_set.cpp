# include <iostream>
# include <unordered_set>
using namespace std;

// looks for duplicate numbers in an array using an unordered_set

int main() {
	int numbers[5] = {1, 2, 3, 2, 5};
	unordered_set<int> hashTable;

	for (int i = 0; i < 5; i++) {
		if (hashTable.find(numbers[i]) != hashTable.end()){
			cout << numbers[i] << " is a duplicate" << endl;
		}

		else{
			hashTable.insert(numbers[i]);
		}
	}
}