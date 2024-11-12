#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>
#include <vector>
#include "degree.h"

class Student {
	public:
		Student();

		std::string GetStudentID();
		void SetStudentID(std::string id);

		std::string GetFirstName();
		void SetFirstName(std::string first);

		std::string GetLastName();
		void SetLastName(std::string last);

		std::string GetEmail();
		void SetEmail(std::string email);

		int GetAge();
		void SetAge(int age);

		int GetDaysInCourses();
		void SetDaysInCourses(std::vector<int> days);

		DegreeProgram GetDegreeProgram();
		void SetDegreeProgram(DegreeProgram program);

		void print();

	private:
		std::string studentID;
		std::string firstName;
		std::string lastName;
		std::string email;
		int age;
		std::vector<int> daysInCourses[3];
		DegreeProgram program;
};


#endif