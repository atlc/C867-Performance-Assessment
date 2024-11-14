#include <iostream>
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

string studentData[] = { 
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Andrew,Cartwright,aca1820@wgu.edu,32,30,35,30,SOFTWARE"
};

int main()
{   

}
