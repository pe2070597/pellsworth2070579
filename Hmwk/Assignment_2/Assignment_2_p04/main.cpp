/* 
 * File:   main.cpp
 * Author: Paul Ellsworth
 * 
 * Project - Restaurant Bill
 *
 * Created on June 25, 2014, 9:26 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // input and variable declarations
    
    float meal_cost = 44.50;
    float tax_amount = 0.0;
    float tax_rate = 0.0675;
    float tip_amount = 0.0;
    float tip_rate = 0.15;
    float total_bill = 0.0;
    
    // processing
    
    tax_amount = meal_cost * tax_rate;  //calculate tax
    total_bill = meal_cost + tax_amount; // calculate meal with tax
    tip_amount = total_bill * tip_rate; // calculate the tip
    total_bill = total_bill + tip_amount; // calculate total bill
    
    // output
    
    cout << endl;
    cout << "Meal Cost:  $" << meal_cost << endl;
    cout << "Tax:        $" << tax_amount << endl;
    cout << "Tip:        $" << tip_amount << endl;
    cout << "Total Due   $" << total_bill << endl;
    
    return 0;
}

