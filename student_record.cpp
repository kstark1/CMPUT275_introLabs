# include <iostream>
# include <string>

using namespace std;

struct StudentRecord {
	int id;
	string name;
	float gpa;
}; 

int main() {
	StudentRecord student1 = {12345678, "Alice", 4.0};

	StudentRecord student2;
	student2.id = 23456789;
	student2.name = "Bob";
	student2.gpa = 3.2;

	cout << student1.id << " has a GPA of " << student1.gpa << endl;
	cout << student2.id << "has a GPA of " << student2.gpa << endl;
}