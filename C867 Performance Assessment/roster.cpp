#include "roster.h"
#include <iostream>
using namespace std;

Roster::Roster() {
	vector<Student*> classRosterArray;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	vector<int> courseDays(3);
	courseDays.at(0) = daysInCourse1;
	courseDays.at(1) = daysInCourse2;
	courseDays.at(2) = daysInCourse3;
	Student newStudent = Student::Student(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);
	classRosterArray.push_back(&newStudent);
}

void Roster::remove(string studentID) {
	
}

void Roster::printAll() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		classRosterArray.at(i)->Print();
	}
}