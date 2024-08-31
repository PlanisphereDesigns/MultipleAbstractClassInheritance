/*Inclusion guards*/
#ifndef NONFICTIONGLOSSERY_H
#define NONFICTIONGLOSSERY_H

#include<iostream>
#include<string>
#include "NonFictionBook.h"
#include "NonFictionBook.cpp"

/*Set the namespace.*/
using namespace std;

/*NonFictionBook inherits from the abstract class and implements all functions.*/
class NonfictionGlossery : public NonfictionBook {
public:
	/*This is the constructor for the virtual class.*/
	/*Watch the caplitalization.*/
	NonfictionGlossery(string myBookName, int theBookSize, string theBookType, int glossery, int pages);

	/*Nonvirtual additional functionality*/
	void setGlosseryLength(int glossery);
	int getGlosseryLength();
	void setNumPages(int pages);
	int getNumPages();

protected:
	/*Additional variables for additional functionality.*/
	int length = 0;
	int num_pages = 0;
};


#endif