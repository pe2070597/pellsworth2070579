/* 
 * File:   main.cpp
 * Author: Paul Ellsworth
 * 
 * Program - Sales Prediction
 *
 * Created on June 25, 2014, 8:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // input and variable declarations
    
    float profit_percent = 0.62;
    int sales = 4600000;
    float profit = 0.0;
    
    // processing
    
    profit = sales * profit_percent;
    
    // output
    
    cout << endl << "On sales of $4.6 million dollars East Coast Sales generated" << endl;
    cout << "a profit of $" << profit << endl;
    
    

    return 0;
}

