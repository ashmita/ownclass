/*
 Author: Ashmita Kunwar
Roll No: 0321
Program: Library Project
*/

#include<iostream>
using namespace std;
 class Library
 {
 private:
      string bookName;
    int remainingBook=3;//maximum number of books you can borrow.

 public:
     Library (string name);
     ~ Library();
     Library();
     void setBookName( string name );
     string getBookName();
     void displayMessage( string nameOfStudent );
     void borrow (int number);
     bool isBookAvailable(int number);

 };
