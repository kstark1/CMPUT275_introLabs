# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
using namespace std;

bool compareStrings(string a, string b){
	// condesed conditional statement
	if(a[0] < b[0]) return true;
	else return false;
}

int main() {
	vector<string> myVect = {"cab", "bac", "cba", "acb", "abc"};
	sort(myVect.begin(), myVect.end(), compareStrings);
	for (auto s : myVect) cout << s << endl;

	cout << "New Vector" << endl;
	
	vector<string> var = {"cab", "bac", "cba", "acb", "abc"};
	sort(var.begin(), var.end(), greater<string>());
	for (auto st : var) cout << st << endl;
}