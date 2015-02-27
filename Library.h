#include<iostream>
using namespace std;
 class Library
 {
 private:
      string bookName;
    int remainingBook=3;

 public:
     Library (string name);
     void setBookName( string name );
     string getBookName();
     void displayMessage();
     void borrow (int number);

 };
