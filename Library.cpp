
#include<iostream>
#include "Library.h"
using namespace std;

        Library::Library (string name)
        {
            setBookName(name);
        }

        void Library::setBookName( string name )
        {
            bookName= name;
        }

        string Library::getBookName()
        {
            return bookName;
        }

        void Library::displayMessage()
        {
            cout<< "The number of books that are remaining to borrow in your name are : " << remainingBook<<endl;
        }

        void Library::borrow (int number)
        {
            if (remainingBook>0){
            remainingBook=remainingBook - number;
            }

        }

