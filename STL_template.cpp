# include <iostream>
# include <vector>
using namespace std;

int main(){
	bool vect = true, array = true;

	if (vect){
		int n;
		cin >> n;
		vector<int> my_vector;
		for (int i = 1; i <=n; i++){
			my_vector.push_back(i);
		}

		my_vector.push_back(n+1);
		my_vector.push_back(10);
		my_vector.pop_back();


		for (int i = 0; i< my_vector.size(); i++){
			cout << my_vector[i];
		}
		cout << endl;

		my_vector.clear();
		for (int i = 0; i< my_vector.size(); i++){
			cout << i;
			cout << my_vector[i];
		}
		cout << endl;
	}
}
