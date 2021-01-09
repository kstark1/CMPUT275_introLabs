# include <iostream>
# include <vector>
# include <string>
using namespace std;

struct StudentRecord {
	int id;
	string name;
	float gpa;
}; 

class GradeBook {
public:
	// constructor, zero unputs
	GradeBook(){}

	void set_student(int id, string name, float gpa){
		// check valid id 8 digits long
		if (id < 99999999 && id  > 10000000){
			StudentRecord student;
			student.name = name;
			student.id = id;

			// check valid gpa btwn 0.0 to 4.0
			if (gpa > 4.0){
				student.gpa = 4.0;
			}
			else if (gpa < 0.0){
				student.gpa = 0;
			}
			else{
				student.gpa = gpa;
			}

			students.push_back(student);
		}
		else {
			cout << "ID entered is too short or too long" << endl;
		}
	}

	void change_gpa(int id, float gpa){
		// auto&, s used as refernce for each element inside students
		for (auto& s : students){
			if (s.id == id){
				s.gpa = gpa;
				return; // exits function as well
			}
			else{
				continue;
			}
			cout << "Student " << id << " not found." << endl;
		}
	}

	void get_gpa(int id){
		for (auto s: students){
			if (s.id == id){
				cout << "Student " << id << " has a GPA of " << s.gpa << endl;
				return;
			}
			else{
				continue;
			}
		}
		cout << "Student " << id << " not found." << endl;
	}

	void get_students(){
		for (auto s : students){
			cout << "ID: " << s.id << " | name: " << s.name << "| gpa: " << s.gpa << endl;
		}

	}

private:
	vector<StudentRecord> students; // data type is the struct StudentRecord
};

int main(){
	GradeBook book;

	book.set_student(12345678, "Alice", 4.0);
	book.set_student(87654321, "Bob", 3.2);

	book.get_students();

	book.change_gpa(12345678, 3.5);
	book.get_students();
}