/*Guards*/
#ifndef NONFICTIONBOOK_CPP
#define NONFICTIONBOOK_CPP

#include<iostream>
#include<string>

#include "PureAbstractBook.h"
#include "PureAbstractBook.cpp"
#include "NonFictionBook.h"

NonfictionBook::NonfictionBook (string myBookName, int theBookSize, string theBookType) 
	: AbstractBook(myBookName, theBookSize, theBookType) {
		cout << "Constructed a new nonfiction book! (Called constructor)" << endl;
		setBookName(myBookName);
		setBookSize(theBookSize);
		setBookType(theBookType);
}

/*Implement these functions next.*/
void NonfictionBook::setBookName(string myBook) {
	book_name = myBook;
}

string NonfictionBook::getBookName() {
	return book_name;
}

void NonfictionBook::setBookSize(int myBookSize) {
	book_size = myBookSize;
}
int NonfictionBook::getBookSize() {
	return book_size;
}

void NonfictionBook::setBookType(string myBookType) {
	book_type = myBookType;
}
string NonfictionBook::getBookType() {
	return book_type;
}

#endif