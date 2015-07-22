/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on July 13, 2015, 8:19 PM
 */

//Nguyen, Johny - Lab 6 - 46091

#include <iostream>
#include <iomanip>
using namespace std;

void heading(float salary, float invRate, float deposit, float savReq, float pDep);
void table();
void retire(float year, float savings, float startYear, float invRate, float deposit);

//helper functions
float calculateSavings(float savings, float invRate, float deposit);
float endOfYearInterest(float savings, float invRate);

int main(int argc, char** argv) {
    table(); // goes through table and prints results
    return 0; //program has ended successfully
}

//prints out the top of the table
void heading(float salary, float invRate, float deposit, float savReq, float pDep) {
	cout << endl << "$" << salary << " = Salary $'s" << endl;
	cout << invRate << "% = Investment Rate" << endl;
	cout << pDep << "% = Deposit as a % of Salary" << endl;
	cout << "$" << savReq << " = Amount needed to Retire $'s" << endl << endl;
	cout << "Year\tDate\t\tBeginning of Yr\t\t  End of Yr\t\t  End of Yr" << endl;
	cout << "\t\t\tSavings\t\t\t  Interest\t\t  Deposit" << endl;
}

//calculates and prints out the table
void table() {
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep=0.20f;   //Of your gross Salary -> Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0
 
    savReq = salary / invRate; //Required Savings
    deposit = pDep * salary;   //Deposit based salary
    heading(salary, invRate, deposit, savReq, pDep); //prints out the top of table

    int startYear = 18;

    while(savings < savReq) {
    	cout << year << "\t";
        cout << "06/01/" << startYear << "\t";
        startYear++;
        cout << savings << "\t\t\t  ";
        cout << endOfYearInterest(savings, invRate) << "\t\t\t";
        cout << deposit << endl;
        year++;
        savings = calculateSavings(savings, invRate, deposit);
    }
    retire(year, savings, startYear, invRate, deposit);
}

//prints out the retirement message
void retire(float year, float savings, float startYear, float invRate, float deposit) {
	cout << year << "\t";
    cout << "06/01/" << startYear << "\t";
    startYear++;
    cout << savings << "\t\t\t";
    cout << endOfYearInterest(savings, invRate) << "\t\t\t";
    cout << deposit << endl << endl;
    cout << "I can retire in " << year << " (years) with $" << savings << endl << endl;
}

//helper functions

float calculateSavings(float savings, float invRate, float deposit) {
    savings*=(1+invRate);//Earning based upon investment rate
    savings+=deposit;    //Add the deposit after earning interest
    return savings;
}

float endOfYearInterest(float savings, float invRate) {
    return savings * invRate;
}