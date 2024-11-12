// C867 Performance Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
#include <sstream>
using namespace std;

int main()
{   
    string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Andrew,Cartwright,aca1820@wgu.edu,32,30,35,30,SOFTWARE" };
    Roster roster = Roster();

    // Instead of manually adding each student, I wanted to practice a more dynamic approach
    for (int i = 0; i < studentData->size(); i++) {
        vector<string> parsed = separateCSV(studentData[i]);
        string id = parsed.at(0);
        string first = parsed.at(1);
        string last = parsed.at(2);
        string email = parsed.at(3);
        int age = stoi(parsed.at(4));
        int class1 =  stoi(parsed.at(5));
        int class2 = stoi(parsed.at(6));
        int class3 = stoi(parsed.at(7));
        string programString  = parsed.at(8);

        DegreeProgram program;

        if (programString == "SOFTWARE") { program = SOFTWARE; }
        else if (programString == "SECURITY") { program = SECURITY; }
        else { program = NETWORK; }

        roster.add(id, first, last, email, age, class1, class2, class3, program);
    }
}

// Took inspiration for this from https://stackoverflow.com/a/46931770
vector<string> separateCSV(string str) {
    vector<string> tokens;
    stringstream stream(str);
    string item;

    while (getline(stream, item, ',')) {
        tokens.push_back(item);
    }

    return tokens;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
