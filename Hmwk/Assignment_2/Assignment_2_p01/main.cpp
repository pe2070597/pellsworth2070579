/* 
 * File:   main.cpp
 * Author: Paul Ellsworth
 * 
 * Program - Sum of Two Numbers
 *
 * Created on June 25, 2014, 8:47 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // input and variable declarations
    
    unsigned short num1 = 62;
    unsigned short num2 = 99;
    unsigned short total = 0;
    
    // processing
    
    total = num1 + num2;
    
    // output
    
    cout << endl << "The sum of 62 and 99 = " << total << endl;
    
    return 0;
}

