/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 24, 2015, 4:33 PM
 */

#include <iostream>
using namespace std;

//User Libraries
//Global constants
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {

//Declare Variables Here

float  allocate, total, percent;

//Input Values Here
allocate = 6.06e9f;
total = 3.80e12f;

//Process Input Here

percent = (allocate/total)*1e4f;

//Output Unknowns Here

cout<<"Welcome to the U.S. Budget Program!"<<endl;
cout<<"Military Expense = $"<<allocate<<"(dollars)"<<endl;
cout<<"Total Budget = $"<<total<<"(dollars)"<<endl;
cout<<"Percentage Spent = "<<percent<<"(%)"<<endl;

//Exit Stage Right!

return 0;
}
