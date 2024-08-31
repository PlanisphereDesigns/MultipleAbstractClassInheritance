/*Inclusion guards*/
#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include<iostream>
#include<string>
#include "PureAbstractBook.h"
#include "PureAbstractBook.cpp"

/*Set the namespace.*/
using namespace std;

/*NonFictionBook inherits from the abstract class and implements all functions.*/
class NonfictionBook : public AbstractBook {
public:
	/*This is the constructor for the virtual class.*/
	/*Watch the caplitalization.*/
	NonfictionBook(string myBookName, int theBookSize, string theBookType);

	/*Override all of the functions*/
	virtual void setBookName(string myBook) override;
	virtual string getBookName();

	virtual void setBookSize(int myBookSize) override;
	virtual int getBookSize();

	virtual void setBookType(string myBookType) override;
	virtual string getBookType() override;

protected:
	/*Nothing here.*/

};


#endif