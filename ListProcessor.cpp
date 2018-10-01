// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"
#include "stdafx.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "cows list sum : " << cows.sumOfList << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(3.86);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "cows list sum : " << cows.sumOfList << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "cows list sum : " << cows.sumOfList << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "cows list sum : " << cows.sumOfList << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size : " << horses.sizeList << endl;
	cout << "horses list sum : " << horses.sumOfList << endl;


	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(19.30);
	cows.insertAsFirst(6.78);
	cows.insertAsLast(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "cows list sum : " << cows.sumOfList << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size : " << horses.sizeList << endl;
	cout << "horses list sum : " << horses.sumOfList << endl;
	

	List pigs;
	pigs.insertAsLast(2.43);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.sizeList << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size : " << pigs.sizeList << endl;
	cout << "pigs list sum : " << pigs.sumOfList << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.sizeList << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size : " << pigs.sizeList << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.sizeList << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.sizeList << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size : " << pigs.sizeList << endl;
	cout << "pigs list sum : " << pigs.sumOfList << endl;

	cout << "End of code" << endl;

	return 0;
}

