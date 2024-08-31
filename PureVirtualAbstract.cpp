// PureVirtualAbstract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "PureAbstractBook.h"
#include "NonFictionBook.h"
#include "PureAbstractBook.cpp"
#include "NonFictionBook.cpp"
#include "NonFictionGlossery.cpp"
#include "NonFictionGlossery.h"

int main()
{
    std::cout << "Welcome to the abstract class multiple inheritance program.\n";
    NonfictionBook myMathBook("Math 101", 3, "mathamatics");
    cout << "Made a pointer for runtime polymorphism." << endl;
    NonfictionBook* nonFictionPointer(&myMathBook);
    cout << "Here are the specifications for the book: " << endl;
    cout << "Book name is " << nonFictionPointer->getBookName() << endl;
    cout << "Book size is " << nonFictionPointer->getBookSize() << endl;
    cout << "Book type is " << nonFictionPointer->getBookType() << endl;
    cout << endl;

    NonfictionGlossery newBookObject("Science 202", 6, "biology", 211, 1211);
    cout << "Made a new pointer for this class which inherits." << endl;
  
    NonfictionGlossery* myNewGlossery(&newBookObject);

    cout << "Here are the specifications for the book: " << endl;
    cout << "Book name is " << myNewGlossery->getBookName() << endl;
    cout << "Book size is " << myNewGlossery->getBookSize() << endl;
    cout << "Book type is " << myNewGlossery->getBookType() << endl;
    cout << "Glossery size is " << myNewGlossery->getGlosseryLength() << endl;
    cout << "The number of pages the book has is " << myNewGlossery->getNumPages() << endl;
    cout << endl;
}


