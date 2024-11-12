#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string id, string first, string last, string email, int ageYears, vector<int> daysForCourses, DegreeProgram prog) {
	SetStudentID(id);
	SetFirstName(first);
	SetLastName(last);
	SetEmail(email);
	SetAge(ageYears);
	SetDaysInCourses(daysForCourses);
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

int Student::GetAge() {
	return age;
}

void Student::SetDaysInCourses(vector<int> &days) {
	daysInCourses = days;
}

vector<int> Student::GetDaysInCourses() {
	return daysInCourses;
}

void Student::SetDegreeProgram(DegreeProgram prog) {
	program = prog;
}

DegreeProgram Student::GetDegreeProgram() {
	return program;
}

void Student::Print() {
	string identification = " (id: " + studentID + "; email: " + email + ") ";
	string demographics = firstName + " " + lastName + ", " + to_string(age) + identification;
	string daysInfo = to_string(daysInCourses.at(0)) + ", " + to_string(daysInCourses.at(1)) + ", and" + to_string(daysInCourses.at(2)) + " days, respectively.";
	string courseInfo = "' student, and is expected to complete their courses in " + daysInfo;
	string degreeInfo = "is enrolled as a '" + tolower(program) + courseInfo;
	cout << "Student " << demographics << degreeInfo << endl;
}