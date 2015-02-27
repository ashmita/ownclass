#include <iostream>
#include "Library.h"
using namespace std;

 int main()
 {
    Library book1("C++ Object Oriented");
    book1.displayMessage(); // before borrowing

    book1.borrow(2);
    book1.displayMessage(); // after borrowing 2
 }
