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
	student.gpa = 3.87;
	cout << "int: " << sizeof(int) << '\n';
	cout << "String: " << sizeof(String) << '\n';
	cout << "float: " << sizeof(float) << '\n';
	cout << "student: " << sizeof(student) << '\n';


	cout << "student Address: " << &student << '\n';
	cout << "student.firstName Address: " << &student.firstName << '\n';
	cout << "student.lastName Address: " << &student.lastName << '\n';
	cout << "student.id Address: " << &student.id << '\n';
	cout << "student.gpa Address: " << &student.gpa << '\n';
	cout << "student.currentHours Address: " << &student.currentHours << '\n';
	cout << "student.totalHours Address: " << &student.totalHours << '\n';

	cout << "students[0] Address: " << &students[0] << '\n';
	cout << "students[100] Address: " << &students[100] << '\n';
	cout << "students : " << sizeof(students) << '\n';

	return 0;
}