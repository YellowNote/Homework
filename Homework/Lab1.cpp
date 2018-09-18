#include <iostream>
#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


int main() {
	//initilization
	char filename[50];
	int temp, numcount = 0, counting, first = 5, second, last, secondlast;

	cout << "Enter file to read from: " << endl;//getting name of file to open
	cin.get(filename, 255);

	ifstream filein;
	filein.open(filename);//opening file

	if (filein.is_open()) {//making sure file is open
		while (!filein.eof()) {//eof == end of file
			if (filein >> temp) {//making sure it is an int
				numcount++;
			}
		}
		counting = numcount;//setting for checks 
		filein.close();
		filein.open(filename);
		if (filein.is_open()) {//making sure file is open
			while (!filein.eof()) {
				if (filein >> temp) {
					counting--;//with one counting down we can compare to find first, second, last, and second to last
					if (numcount - counting == 1) {//looking for first
						first = temp;
					}
					if (numcount - counting == 2) {//looking for second
						second = temp;
					}
					if (counting == 1) {//looking for second to last
						secondlast = temp;
					}
					if (counting == 0) {//looking for last
						last = temp;
					}
				}
			}//output everything
		}
		cout << "Number of integers: " << numcount << endl
			<< "First integer: " << first << endl
			<< "Second integer: " << second << endl
			<< "Second to last integer: " << secondlast << endl
			<< "Last integer: " << last << endl;
	}
	else {
		cout << "Unable to find file" << endl;
	}
	system("pause");
}