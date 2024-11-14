#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string id, string first, string last, string email, int age, int days1, int days2, int days3, DegreeProgram program) {
	SetStudentID(id);
	SetFirstName(first);
	SetLastName(last);
	SetEmail(email);
	SetAge(age);
	SetDaysForCourses(days1, days2, days3);
	SetDegreeProgram(program);
}

string Student::GetStudentID() {
	return studentID;
}

void Student::SetStudentID(string id) {
	studentID = id;
}

string Student::GetFirstName() {
	return firstName;
}

void Student::SetFirstName(string first) {
	firstName = first;
}

string Student::GetLastName() {
	return lastName;
}

void Student::SetLastName(string last) {
	lastName = last;
}

string Student::GetEmail() {
	return email;
}

void Student::SetEmail(string newEmail) {
	email = newEmail;
}

int Student::GetAge() {
	return age;
}

void Student::SetAge(int years) {
	age = years;
}

int* Student::GetDaysForCourses() {
	return daysForCourses;
}

void Student::SetDaysForCourses(int day1, int day2, int day3) {
	daysForCourses[0] = day1;
	daysForCourses[1] = day2;
	daysForCourses[2] = day3;
}

DegreeProgram Student::GetDegreeProgram() {
	return program;
}

void Student::SetDegreeProgram(DegreeProgram prog) {
	program = prog;
}

void Student::Print() {
	string demographics = studentID + "\tFirst Name: " + firstName + "\tLast Name: " + lastName + "\tAge: " + to_string(age);
	string courseInfo = "\t\tdaysInCourse: {" + to_string(daysForCourses[0]) + ", " + to_string(daysForCourses[1]) + ", " + to_string(daysForCourses[2]) + "}";
	
	string programString;

	switch (program) {
	case DegreeProgram::NETWORK:
		programString = "Networking";
		break;
	case DegreeProgram::SECURITY:
		programString = "Cybersecurity";
		break;
	case DegreeProgram::SOFTWARE:
		programString = "Software Engineering";
		break;
	default:
		programString = "undecided (College of Information Technology)";
		break;
	}

	string degreeInfo = "\tDegree Program: " + programString;

	cout << demographics << courseInfo << degreeInfo << endl;
}