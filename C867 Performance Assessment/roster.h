#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
#include <string>
using namespace std;

class Roster {
public:
	Roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	//void printAll();

private:
	Student* classRosterArray;
};

#endif