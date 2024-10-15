// Avril Cao
// Mindy Chen
// Lab 6
// October 15 2024

#include <iostream>
#include <fstream> 
#include <string>

// #include <iostream> is used so you can use cout
// #include <fstream> is used so you can use infile.open and outfile.open
// #include <string> is used so you can input a string of characters

using namespace std;

// using namespace std; is used so you dont have to have std:: before every cout and endl;

int main ()

// int main () is used to start the program

{
    int integerOne;
    int integerTwo;
    char a;
    string message;
    ifstream inFile;
    ofstream outFile;

// int is used to declare an integer
// char is used to declare a character
// string is used to decalre a string of characters
// ifstream is used to declare an ifstream varaible
// ofstream is used to declare an offstream variable

    inFile.open("inData.txt");
    outFile.open("outData.txt");

// inFile.open and outFile.open are used to open the file

    inFile >> integerOne >> integerTwo;
    outFile << "sum: " << integerOne + integerTwo << endl;

// outFile statement is used to output the variables

    inFile >> a;
    outFile << "ASCII sequence: " << int (a) << endl;

    inFile >> message;
    outFile << "message: " << message << endl;

    inFile.close();
    outFile.close();

// inFile.close and outFile.close are used to close the file

    return 0;

// return 0; is used to end the program
}

/* sum: 1127
ASCII sequence: 86
message: Hello. */