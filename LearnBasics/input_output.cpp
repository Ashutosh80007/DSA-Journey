// C++ Basic Input/Output

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
