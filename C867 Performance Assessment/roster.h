#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
#include "degree.h"

#include <iostream>
using namespace std;

class Roster {
public:
	Roster();
	~Roster(); // https://learn.zybooks.com/zybook/WGUC867v4/chapter/9/section/7

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	Student* classRosterArray[5];
	int numStudents;

};

#endif
