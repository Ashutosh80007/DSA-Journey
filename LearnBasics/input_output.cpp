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