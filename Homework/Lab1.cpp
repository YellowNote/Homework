/*
Tim Bourque
This code is to take in a file and find the number of integers, first integer, second integer, last integer, second to last integer
and display each
*/

#include <iostream>
#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


int main() {
	//initilization
	char filename[50];
	int temp, numcount = 0, counting, first , second, last, secondlast;

	cout << "Enter file to read from: " << endl;//getting name of file to open
	cin.get(filename, 255);

	ifstream filein;
	filein.open(filename);//opening file

	if (filein.is_open()) {//making sure file is open
		while (!filein.eof()) {//eof == end of file
			if (filein >> temp) {//making sure it is an int
				numcount++;
				if(numcount == 1){
					first = temp;//1 will be the first item
				}else(numcount == 2){
					second = temp;//2 will be the second item
				}
				seondlast = temp;//saves so when we get to the end temp will be last and secondlast will be the second to last
			}
		}//end while
		counting = numcount;//setting for checks 
		filein.close();
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
