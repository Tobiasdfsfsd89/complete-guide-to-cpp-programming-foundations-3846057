// Complete Guide to C++ Programming Foundations
// Exercise 00_03 with modifications
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

#include <iostream>

// int main(){
//     float num_1, num_2, result;

//     std::cout << "Enter number 1: " << std::flush;
//     std::cin >> num_1;
//     std::cout << "Enter number 2: " << std::flush;
//     std::cin >> num_2;

//     result = num_1 + num_2;

//     std::cout << "The result of the addition is " << result << std::endl;

//     std::cout << std::endl << std::endl;
//     return 0;
// }

// Function declaration
int add(int a, int b){
    return a + b; // Return the sum of a and b
}

int main(){
    int result = add(15,20); // Function call with argument 5 and 3
    std::cout << "THe sum is: " << result << std::endl;
    return 0;
}