#ifndef ROSTER_H
#define ROSTER_H
#pragma once
#include <vector>
#include "student.h"
using namespace std;

class Roster {
public:
	Roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();

private:
	vector<Student*> classRosterArray;
};

#endif