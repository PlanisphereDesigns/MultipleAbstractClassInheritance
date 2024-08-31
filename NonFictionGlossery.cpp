/*Guards*/
#ifndef NONFICTIONGLOSSERY_CPP
#define NONFICTIONGLOSSERY_CPP

#include "NonFictionBook.h"
#include "NonFictionBook.cpp"
#include "NonFictionGlossery.h"

#include<iostream>
#include<string>

using namespace std;

NonfictionGlossery::NonfictionGlossery(string myBookName, int theBookSize, string theBookType, int glossery, int pages)
	: NonfictionBook(myBookName, theBookSize, theBookType) {
	cout << "Constructed a new nonfiction book with a glossery! (Called constructor for 3rd level inherited class)" << endl;
	/*Additional functionality*/
	setGlosseryLength(glossery);
	setNumPages(pages);
}

/*Called other functions from this one's base class which is one step up from virtual.*/
/*New functions.*/

/*Missing the scope modifier causes undeclared identifier error.*/
void NonfictionGlossery::setGlosseryLength(int glossery) {
	length = glossery;
}

int NonfictionGlossery::getGlosseryLength() {
	return length;
}
void NonfictionGlossery::setNumPages(int pages) {
	num_pages = pages;
}

int NonfictionGlossery::getNumPages() {
	return num_pages;
}

#endif