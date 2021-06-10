#include <iomanip>
#include <fstream>
#include <sstream>
#define _USE_MATH_DEFINES
#include <cmath> //std::pow(base, exponent), M_PI = pi
#include <iostream>
#include <math.h>
#include <cstddef> // to use size_t (i.e. 
#include <string>
#include "main.h"
using namespace std;

int main(int argc, char** argv) {
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2
    Shape sh3;          //Declare shape3

    int total = sh1 + sh2;
    cout << "\nsh1.Area() = " << sh1.Area();
    cout << "\nsh2.Area() = " << sh2.Area();
    cout << "\nTotal = " << total;
    return 0;
    
    return 0;
}