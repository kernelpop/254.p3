//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"

using namespace std;

#define extern 'C' double * getdata();

const string AUTHOR = "David Feinzimer";
double *dat;

int main() {
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	dat = getdata();
	return 0;
}