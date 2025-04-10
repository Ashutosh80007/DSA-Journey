// Data Types in C++

/*
In C++, data types play a fundamental role in storing and managing the values you receive from the user. When you gather input, whether it's a number like 10, -5, or 3, you need a proper data type to hold and manipulate that information. Data types define the type of values that a variable can hold in a programming language.They specify the size and format of data that can be stored in a variable.

When naming variables, you must follow certain rules:
1. Variable names cannot start with a number:
   Invalid: 1value

2. Variable names should begin with a letter or an underscore:
   Invalid: $price (because it starts with a special character ('$'))
   Variable names should begin with a letter (uppercase or lowercase) or an underscore, but not with special symbols or numbers.
   Invalid: 123abc

3. Variable names are case-sensitive:
   Invalid: Name and name
   These two variable names, "Name" and "name," are considered different variables in C++ because C++ is case-sensitive. This means that uppercase and lowercase letters are treated as distinct characters in variable names
*/

/*
Int:
The int data type has limitations on the range of values it can store. It typically depends on the specific system and compiler you're using, but for most systems, it can store values from approximately  -2,147,483,647 to 2,147,483,647 (-2 billion to 2 billion).
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    cout << "Value of X: "<< x;
    return 0;
}