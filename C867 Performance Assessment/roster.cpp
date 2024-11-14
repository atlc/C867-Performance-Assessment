#include "roster.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int ROSTER_MAX = 5;

Roster::Roster() {
	numStudents = 0;

	for (int i = 0; i < ROSTER_MAX; i++) {
		classRosterArray[i] = nullptr;
	}
}

Roster::~Roster() {
	for (int i = 0; i < ROSTER_MAX; i++) {
		Student* s = classRosterArray[i];

		if (s != nullptr) {
			remove(s->GetStudentID());
		}
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	if (numStudents >= ROSTER_MAX) {
		cout << "Class is full - already added 5 students to the roster" << endl;
	} else {
		Student* newStudent = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
		classRosterArray[numStudents] = newStudent;
		numStudents++;
	}
}

void Roster::remove(string studentID) {
	bool studentFound = false;
	int studentIndex;

	for (int i = 0; i < numStudents; i++) {
		Student* s = classRosterArray[i];
		if (s!= nullptr && s->GetStudentID() == studentID) {
			studentFound = true;
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			studentIndex = i;
			numStudents--;
			break;
		}
	}

	if (!studentFound) {
		cout << "Could not remove - student not found with the id of " + studentID << endl;
	}
	else {
		for (int i = studentIndex; i < numStudents; i++) {
			Student* s = classRosterArray[i];

			if (s == nullptr && i != numStudents-1) {
				classRosterArray[i] = classRosterArray[i+1];
				classRosterArray[i+1] = nullptr;
			}
		}
	}
}

void Roster::printAll() {
	cout << "\nCurrent Roster:" << endl;

	for (int i = 0; i < ROSTER_MAX; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->Print();
		}
	}

	cout << "\n" << endl;
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < numStudents; i++) {
		Student* s = classRosterArray[i];
		if (s != nullptr && s->GetStudentID() == studentID) {
			int* days = s->GetDaysForCourses();
			int average = (days[0] + days[1] + days[2]) / 3;

			cout << "The average amount of days per course for student " + studentID + " is " + to_string(average) << endl;
		}
	}
}

void Roster::printInvalidEmails() {
	cout << "\nInvalid email search results:" << endl;

	for (int i = 0; i < numStudents; i++) {
		Student* s = classRosterArray[i];
		if (s != nullptr) {
			string email = s->GetEmail();

			bool hasAtSign = email.find('@') != string::npos;
			bool hasPeriod = email.find('.') != string::npos;
			bool hasNoSpace = email.find(' ') == string::npos;

			bool isValidEmail = hasAtSign && hasPeriod && hasNoSpace;

			if (!isValidEmail) {
				cout << "Error: Student " + s->GetStudentID() + " has an invalid email format (email: " + email + ")" << endl;
			}
		}
	}
	cout << "\n" << endl;
}

void Roster::printByDegreeProgram(DegreeProgram prog) {
	cout << "\nDegree program search results:" << endl;
	for (int i = 0; i < numStudents; i++) {
		Student* s = classRosterArray[i];
		if (s != nullptr && s->GetDegreeProgram() == prog) {
			s->Print();
		}
	}
	cout << "\n" << endl;
}
