#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string id, string first, string last, string email, int ageYears, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram prog) {
	SetStudentID(id);
	SetFirstName(first);
	SetLastName(last);
	SetEmail(email);
	SetAge(ageYears);
	SetDaysInCourses(daysCourse1, daysCourse2, daysCourse3);
	SetDegreeProgram(prog);
}

void Student::SetStudentID(string id) {
	studentID = id;
}

string Student::GetStudentID() {
	return studentID;
}

void Student::SetFirstName(string first) {
	firstName = first;
}

string Student::GetFirstName() {
	return firstName;
}

void Student::SetLastName(string last) {
	lastName = last;
}

string Student::GetLastName() {
	return lastName;
}

void Student::SetEmail(string mail) {
	email = mail;
}

string Student::GetEmail() {
	return email;
}

void Student::SetAge(int years) {
	age = years;
}

int Student::GetAge() const {
	return age;
}

void Student::SetDaysInCourses(int daysCourse1, int daysCourse2, int daysCourse3) {
	daysInCourses.at(0) = daysCourse1;
	daysInCourses.at(1) = daysCourse2;
	daysInCourses.at(2) = daysCourse3;
}

vector<int> Student::GetDaysInCourses() {
	return daysInCourses;
}

void Student::SetDegreeProgram(DegreeProgram prog) {
	program = prog;
}

DegreeProgram Student::GetDegreeProgram() const {
	return program;
}

void Student::Print() const {
	cout << "     HERE       " << endl;
	string identification = " (id: " + studentID + "; email: " + email + ") ";
	string demographics = firstName + " " + lastName + ", " + to_string(age) + identification;
	string daysInfo = to_string(daysInCourses.at(0)) + ", " + to_string(daysInCourses.at(1)) + ", and" + to_string(daysInCourses.at(2)) + " days, respectively.";
	string courseInfo = "' student, and is expected to complete their courses in " + daysInfo;
	string degreeInfo = "is enrolled as a '" + tolower(program) + courseInfo;
	cout << "Student " << demographics << degreeInfo << endl;
}