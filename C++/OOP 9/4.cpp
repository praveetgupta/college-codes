// Write a C++ Program to Count Occurrence of a given Word using File Handling.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{

     ofstream a;
     a.open("9.4.txt");
     a << "Machine learning (ML) is a field of inquiry devoted to understanding and building methods that 'learn', that is, methods that leverage data to improve performance on some set of tasks.[1] It is seen as a part of artificial intelligence. Machine learning algorithms build a model based on sample data, known as training data, in order to make predictions or decisions without being explicitly programmed to do so.[2] Machine learning algorithms are used in a wide variety of applications, such as in medicine, email filtering, speech recognition, agriculture, and computer vision, where it is difficult or unfeasible to develop conventional algorithms to perform the needed tasks.[3][4] A subset of machine learning is closely related to computational statistics, which focuses on making predictions using computers, but not all machine learning is statistical learning. The study of mathematical optimization delivers methods, theory and application domains to the field of machine learning. Data mining is a related field of study, focusing on exploratory data analysis through unsupervised learning.[6][7] Some implementations of machine learning use data and neural networks in a way that mimics the working of a biological brain.[8][9] In its application across business problems, machine learning is also referred to as predictive analytics.";
     a.close();
     ifstream b;
     b.open("9.4.txt");
     int count = 0;
     char ch[20], c[20];
     cout << "Enter word: ";
     cin >> c;
     while (b)
     {
          b >> ch;
          if (strcmp(ch, c) == 0)
               count++;
     }
     cout << "\nOccurrence of word [ " << c << " ] = " << count << "\n";
     b.close();
}