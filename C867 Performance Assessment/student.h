#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <iostream>
using namespace std;

class Student {
public:
	Student(string id, string first, string last, string email, int age, int days1, int days2, int days3, DegreeProgram program);

	string GetStudentID();
	void SetStudentID(string id);

	string GetFirstName();
	void SetFirstName(string first);

	string GetLastName();
	void SetLastName(string last);

	string GetEmail();
	void SetEmail(string email);

	int GetAge();
	void SetAge(int years);

	int* GetDaysForCourses();
	void SetDaysForCourses(int days1, int days2, int days3);

	DegreeProgram GetDegreeProgram();
	void SetDegreeProgram(DegreeProgram prog);

	void Print();

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysForCourses[3];
	DegreeProgram program;
};

#endif
