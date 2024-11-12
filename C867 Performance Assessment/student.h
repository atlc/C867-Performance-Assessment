#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <vector>
#include <string>
using namespace std;

class Student {
public:
	Student(std::string id, std::string first, std::string last, std::string email, int age, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram program);

	std::string GetStudentID();
	void SetStudentID(std::string id);

	std::string GetFirstName();
	void SetFirstName(std::string first);

	std::string GetLastName();
	void SetLastName(std::string last);

	std::string GetEmail();
	void SetEmail(std::string email);

	int GetAge() const;
	void SetAge(int age);

	vector<int> GetDaysInCourses();
	void SetDaysInCourses(int daysCourse1, int daysCourse2, int daysCourse3);

	DegreeProgram GetDegreeProgram() const;
	void SetDegreeProgram(DegreeProgram program);

	void Print() const;

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string email;
	int age;
	vector<int> daysInCourses;
	DegreeProgram program;
};


#endif