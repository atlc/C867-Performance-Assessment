#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

Roster::Roster() {
	Student* classRosterArray = {};
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	cout << "Here in Roster add method" << endl;
	Student newStudent = Student::Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
	newStudent.Print();
}

//void Roster::remove(string studentID) {
//	
//}

//void Roster::printAll() {
//	for (int i = 0; i < classRosterArray.size(); i++) {
//		classRosterArray.at(i)->Print();
//	}
//}