// C++ Basic Input/Output

/* Output with cout:
To display output in C++, you'll commonly use the cout function from the iostream library. However, you need to specify that it belongs to the std (standard) namespace. You enclose the text you want to display within double quotation marks.
*/
#include<iostream>

int main() {
    std::cout << "Hey, Ashutosh!";
    return 0;
}


// If we want to print Hey, Striver! twice in 2 lines and we write std::cout << "Hey, Striver!"; again and again then it will print it consecutively on the same line.
#include<iostream>

int main(){
    std::cout << "Hey, Ashutosh!";
    std::cout << "Hey, Ashutosh!";
    return 0;
}


// You can use the newline character \n to insert a line break within a single std::cout statement.
#include<iostream>

int main() {
    std::cout << "Hey, Ashutosh!" << "\n";
    std::cout << "Hey, Ashutosh!";
    return 0;
}


// You can also use std::endl to insert a newline character and flush the output buffer.
#include<iostream>

int main() {
    std::cout << "Hey, Ashutosh!" << std::endl;
    std::cout << "Hey, takeUforword!";
    return 0;
}


//using namespace std; at the beginning of your program, you're telling the compiler that you want to use all the names from the std namespace without explicitly specifying std:: each time.
#include<iostream>

using namespace std;

int main (){
    cout << "Hey, Ashtosh!" << endl;
    cout << "takeuforword!";
    return 0;
}


/* Taking User Input using cin:
In C++, this is achieved with the help of the "cin stream", which allows you to receive input from the user via the terminal or console.
*/
#include <iostream>
using namespace std;

int main (){
    int x;
    cout << "Enter the value: ";
    cin >> x;
    cout << "The value of x: "<< x;
    return 0;
}

/*How it works:
1. The program waits for user input.
2. You enter a value (e.g., 5) and press Enter.
3. cin reads the entered value and stores it in the variable x.
4. cout then displays the value of x.
*/


// To accept multiple inputs, we can simply use the ">> operator" with cin for each variable we want to receive input for.
#include <iostream>
using namespace std;

int main (){
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of X "<< x << " and Y "<< y;
    return 0;  
}

/* How it works:
1. The program waits for the first input (for x).
2. You enter a value (e.g., 7) and press Enter.
3. cin reads and stores the value in x.
4. The program then waits for the second input (for y).
5. You enter another value (e.g., 8) and press Enter.
6. cin reads and stores this value in y.
7. cout then displays the value of x and y.
*/


// Note: there's a shortcut that allows you to include almost all standard libraries at once using "#include<bits/stdc++.h>".
#include<bits/stdc++.h>
using namespace std;

int main (){
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x:" << x << " and y: " << y;
    return 0;
}