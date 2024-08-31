/*Inclusion guards*/
#ifndef ABSTRACTBOOK_H
#define ABSTRACTBOOK_H

#include<iostream>
#include<string>

/*Set the namespace.*/
using namespace std;

/*This is a pure virtual abstract class, and you cannot instantiate any objects of it, as a result.*/
class AbstractBook {
	public:
		/*This is the constructor for the virtual class.*/
		AbstractBook(string myBookName, int theBookSize, string theBookType);

		/*This class uses a virtual destructor to ensure no errors.*/
		virtual ~AbstractBook() = 0;

		/*Pure virtual functions inside of the class.*/
		virtual void setBookName(string myBook) = 0;
		virtual string getBookName() = 0;

		virtual void setBookSize(int myBookSize) = 0;
		virtual int getBookSize() = 0;

		virtual void setBookType(string myBookType) = 0;
		virtual string getBookType() = 0;

	protected:
		/*The variables are protected to ensure smooth inheritance.*/
		string book_name = "";
		int book_size = 0;
		string book_type = "";

};


#endif