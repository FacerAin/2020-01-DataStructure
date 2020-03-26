#include <iostream>
using namespace std;

typedef char String[9];
struct StudentRecord
{
	String firstName;
	String lastName;
	int id;
	float gpa;
	int currentHours;
	int totalHours;
};
StudentRecord student;
StudentRecord students[100];

int main() {
	cout << "int: "<< sizeof(int) << '\n';
	cout << "String: " << sizeof(String) << '\n';
	cout << "float: " << sizeof(float) << '\n';
	cout << "student: " << sizeof(student) << '\n';
	return 0;
}