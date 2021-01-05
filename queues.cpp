# include <queue>
# include <iostream>
using namespace std;

int main(){
	queue<int> my_queue;
	my_queue.push(8);
	for (int i = 1; i <= 5; i++){
		my_queue.push(i); //Add i to the back
	}

	my_queue.push(9);

	cout << my_queue.front();
	while (my_queue.size() > 0) {
		cout << my_queue.front() << endl;
		my_queue.pop(); // remove the front element
	}
}