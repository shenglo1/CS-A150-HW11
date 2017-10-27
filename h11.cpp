/**
    @file h11.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
// Add additional headers here
using namespace std;

string STUDENT = "ilo";     // Add your name Blackboard/occ-email ID

#include "h11.h"
// Define your function here
void searchFile(const string& fname, const string& phrase)
{
    ifstream in(fname);
    if (in.fail())
    {
        cerr << "File " + fname + " cannot be opened." << endl;
    }
    else
    {
        string line;
        int lineNo = 0;
        while (getline(in, line))
        {
            lineNo++; // increment the line number
            if (line.find(phrase) != string::npos)
                cout << setw(5) << lineNo << " : " << line << endl;
        }
    }
}
