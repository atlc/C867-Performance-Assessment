// C867 Performance Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
#include <sstream>
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

int main()
{   
    string studentData[] = { 
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Andrew,Cartwright,aca1820@wgu.edu,32,30,35,30,SOFTWARE"
    };

    //Roster roster = Roster();

    // Instead of manually adding each student, I wanted to practice a more dynamic approach
    for (int i = 0; i < studentData->size(); i++) {
        cout << "Parser loop " << i << endl;
        string parsed[9];
        separateCSV(studentData[i], parsed);
        
        string id = parsed[0];
        string first = parsed[1];
        string last = parsed[2];
        string email = parsed[3];
        int age = stoi(parsed[4]);
        int class1 =  stoi(parsed[5]);
        int class2 = stoi(parsed[6]);
        int class3 = stoi(parsed[7]);
        string programString  = parsed[8];

        DegreeProgram program;

        if (programString == "SOFTWARE") { program = SOFTWARE; }
        else if (programString == "SECURITY") { program = SECURITY; }
        else { program = NETWORK; }

        //roster.add(id, first, last, email, age, class1, class2, class3, program);
    }
}
