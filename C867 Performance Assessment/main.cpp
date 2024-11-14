#include <iostream>
#include <sstream>
#include <string>
#include "student.h"
#include "roster.h"
using namespace std;

// Took inspiration for this from https://stackoverflow.com/a/46931770
static string* separateCSV(string str, string tokens[9]) {
    int tokenCount = 0;
    stringstream stream(str);
    string item;

    while (getline(stream, item, ',')) {
        if (tokenCount < 9) {
            tokens[tokenCount++] = item;
        }
    }

    return tokens;
}

string studentData[] = { 
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Andrew,Cartwright,aca1820@wgu.edu,32,30,35,30,SOFTWARE"
};

int main()
{   
    Roster roster;

    for (int i = 0; i < 5; i++) {
        string tokens[9];
        separateCSV(studentData[i], tokens);
        string id = tokens[0];
        string first = tokens[1];
        string last = tokens[2];
        string email = tokens[3];
        int age = stoi(tokens[4]);
        int days1 = stoi(tokens[5]);
        int days2 = stoi(tokens[6]);
        int days3 = stoi(tokens[7]);
        string programString = tokens[8];

        DegreeProgram program;

        if (programString == "NETWORK") {
            program = DegreeProgram::NETWORK;
        }
        else if (programString == "SECURITY") {
            program = DegreeProgram::SECURITY;
        }
        else {
            program = DegreeProgram::SOFTWARE;
        }
            

        roster.add(id, first, last, email, age, days1, days2, days3, program);
    }

    roster.printAll();
}
