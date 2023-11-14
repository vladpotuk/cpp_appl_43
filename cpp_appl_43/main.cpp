#include <iostream>
#include <Windows.h>
#include <cmath> 
#include "lib.h"


int main() {
    // Знаходження меншого з двох чисел
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int minResult = MIN(a, b);
    std::cout << "Min: " << minResult << std::endl;

    // Знаходження більшого з двох чисел
    int maxResult = MAX(a, b);
    std::cout << "Max: " << maxResult << std::endl;

    // Піднесення числа до квадрата
    int numSquare;
    std::cout << "Enter a number for squaring: ";
    std::cin >> numSquare;
    int squareResult = SQUARE(numSquare);
    std::cout << "Square: " << squareResult << std::endl;

    // Піднесення числа до степеня
    double base, exponent;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;
    double powerResult = POWER(base, exponent);
    std::cout << "Power: " << powerResult << std::endl;

    // Перевірка числа на парність
    int evenNumber;
    std::cout << "Enter a number for even/odd check: ";
    std::cin >> evenNumber;
    if (IS_EVEN(evenNumber)) {
        std::cout << evenNumber << " is even." << std::endl;
    }
    else {
        std::cout << evenNumber << " is odd." << std::endl;
    }

    // Перевірка числа на непарність
    int oddNumber;
    std::cout << "Enter a number for even/odd check: ";
    std::cin >> oddNumber;
    if (IS_ODD(oddNumber)) {
        std::cout << oddNumber << " is odd." << std::endl;
    }
    else {
        std::cout << oddNumber << " is even." << std::endl;
    }

    return 0;
}
