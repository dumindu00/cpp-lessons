#include <iostream>
# include <string>
    #include <typeinfo> 


// int math(int number, std::string magic, int number2);

int main() {


    std::cout << "Hi user! Enter first number to start: ";
    int number;
    std::cin >> number;
    std::cout << "Hi user! Enter operator(+,-,*,%): ";
    std:: string magic;
    std::cin >> magic;
    std::cout << "Hi user! Enter second number to start: ";
    int number2;
    std::cin >> number2;


    int result;

    if(magic == "+") {
        result = number + number2;
    } else if (magic == "-") {
        result = number - number2;
    } else if (magic == "*") {
        result = number * number2;
    } else if (magic == "%") {
        result = number % number2;
    } else {
        std::cout << "Enter valid operator!" << std::endl;
    }


    std::cout << result << std::endl;
    


    return 0;
}













// #.\hello_temp2.exe