#include "roster.h"
#include "student.h"
#include <iostream>
using namespace std;

int ROSTER_MAX = 5;

Roster::Roster() {
	initializeArray();
}

void Roster::initializeArray() {
	for (int i = 0; i < ROSTER_MAX; i++) {
		classRosterArray[i] = nullptr;
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	if (numStudents > ROSTER_MAX) {
		cout << "Class is full - already added 5 students to the roster" << endl;
	} else {
		Student* newStudent = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
		//classRosterArray[numStudents++] = newStudent;
		newStudent->Print();
	}
}

void Roster::printAll() {
	for (int i = 0; i < ROSTER_MAX; i++) {
		classRosterArray[i]->Print();
	}
}