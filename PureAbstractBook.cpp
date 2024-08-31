/*Guards*/
#ifndef PUREVIRTUALABSTRACT_CPP
#define PUREVIRTUALABSTRACT_CPP

#include<iostream>
#include<string>

#include "PureAbstractBook.h"

AbstractBook::AbstractBook(string myBookName, int theBookSize, string theBookType) {
	/*Nothing it's virtual*/
	cout << "The abstract base class's constructor got called." << endl;
}

AbstractBook::~AbstractBook() {
/*Nothing.*/
}

void AbstractBook::setBookName(string myBook) {

}

string AbstractBook::getBookName() {
	return "";
}

void AbstractBook::setBookSize(int myBookSize) {

}

int AbstractBook::getBookSize() {
	return 0;
}

void AbstractBook::setBookType(string myBookType){

}

string AbstractBook::getBookType() {
	return "";
}



#endif