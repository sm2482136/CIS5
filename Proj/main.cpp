/* 
 * File:   main.cpp
 * Author: Shanilka Mapatuna
 *Created on January 11, 2018, 8:49 PM
 * Assignment 2 Question 2, Gaddis
 */

//Stadium Seating
#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
    //Constants 
    float CAP,CBP, CCP;
    CAP = 15; // Class A seating price in dollars
    CBP = 12; // Class B seating price in dollars
    CCP = 9; // Class c seating price in dollars

    //Variables 
    double CATS, CBTS, CCTS, IA;
    //CATS means the amount Class A tickets sold
    //CBTS means the amount Class B tickets sold
    //CCTS means the amount Class C tickets sold
    //IA means the amount of income made from ticket sales
    cout << "How much Class A tickets were sold? ";
    cin >>CATS;
    cout << "How much Class B tickets were sold? ";
    cin >> CBTS;
    cout << "How much Class C tickets were sold? ";
    cin >> CCTS;
    
    //Equations
    IA = (CAP * CATS) + (CBP * CBTS) + (CCP * CCTS);
    
    cout << "The total income from ticket sales is ";
    cout << fixed << setprecision(2) << IA << endl;
            
           
            
    
    return 0;
}

