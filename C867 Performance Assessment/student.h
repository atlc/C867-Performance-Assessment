#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <vector>
#include "degree.h"
using namespace std;

class Student {
public:
	Student(string id, string first, string last, string email, int age, vector<int> days, DegreeProgram program);

	string GetStudentID();
	void SetStudentID(string id);

	string GetFirstName();
	void SetFirstName(string first);

	string GetLastName();
	void SetLastName(string last);

	string GetEmail();
	void SetEmail(string email);

	int GetAge();
	void SetAge(int age);

	vector<int> GetDaysInCourses();
	void SetDaysInCourses(vector<int> &days);

	DegreeProgram GetDegreeProgram();
	void SetDegreeProgram(DegreeProgram program);

	void Print();

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	vector<int> &daysInCourses;
	DegreeProgram program;
};


#endif