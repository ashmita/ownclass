/*
 Author: Ashmita Kunwar
Roll No: 0321
Program: Library Project
*/

#include<iostream>
#include "Library.h"
using namespace std;

        Library::Library (string name)
        {
            setBookName(name);
        }

        Library::Library ()
        {

        }

                Library:: ~Library()
        {
        }

     void Library::setBookName( string name )
        {
            bookName= name;
        }

        string Library::getBookName()
        {
            return bookName;
        }

        void Library::displayMessage( string nameOfStudent)
        {
            cout<< nameOfStudent<< " you can borrow only "<< remainingBook<<" books"<<endl;
        }

        void Library::borrow (int number)
        {
            if (remainingBook>0)
            {
            remainingBook=remainingBook - number;
            }

        }
        bool Library:: isBookAvailable(int number)
        {
            if(number<=2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

