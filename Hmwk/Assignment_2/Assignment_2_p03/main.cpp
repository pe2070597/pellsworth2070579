/* 
 * File:   main.cpp
 * Author: Paul Ellsworth
 * 
 * Project - Sales Tax
 *
 * Created on June 25, 2014, 9:13 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // input and variable declarations
    
    unsigned short purchase = 52;
    float tax_rate_s = 0.04;
    float tax_rate_c = 0.02;
    float tax_rate = 0.0;
    float tax = 0.0;
    
    // processing
    
    tax_rate = tax_rate_s + tax_rate_c;  // calculate effective tax rate
    tax = purchase * tax_rate;  // calculate the tax
    
    // output
    
    cout << endl << "The tax on a $52 is $" << tax << endl;

    return 0;
}

