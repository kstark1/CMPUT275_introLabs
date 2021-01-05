# include <iostream>
# include <stack>
using namespace std;

int main() {
	stack<int> my_stack;
	for (int i = 1; i <= 5; i++){
		my_stack.push(i); // Add i to the top
	}

	while (my_stack.size() > 0){
		cout << my_stack.top() << endl;
		my_stack.pop();
	}
}