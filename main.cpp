/*
 Author: Ashmita Kunwar
Roll No: 0321
Program: Library Project
*/

#include <iostream>
#include "Library.h"
using namespace std;

 int main()
 {
     int number;
     string nameOfStudent;
     cout<<"Enter your Name:";
     cin>>nameOfStudent;
     cout<<endl;
     cout<<"How many books have you borrowed?";
     cin>>number;
     if(number <=3)
     {

          Library book1("C++ Object Oriented");
          book1.borrow(number);
          book1.displayMessage(nameOfStudent);

     }
     else
     {
         cout<< nameOfStudent << " you are not allow to take any books as you have already borrowed 3 books"<<endl;
     }
   Library *book3;
   Library book2("Book2:Java Programming \n");
   book3=&book2;
   cout << book3->getBookName();
}
