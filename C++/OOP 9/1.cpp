// Write a program to copy the contents of one file into another. Open "Fisrt.txt” in read (ios::in) mode and "Second.txt" file in write (ios::out) mode. Copy the contents of "First.txt" into "Second.txt". Assume "First.txt" is already created.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open the input and output files
    ifstream inputFile("First.txt");
    ofstream outputFile("Second.txt");

    // Copy the contents of the input file to the output file
    string line;
    while (getline(inputFile, line))
    {
        outputFile << line << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}