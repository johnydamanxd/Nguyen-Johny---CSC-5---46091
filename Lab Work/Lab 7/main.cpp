/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on July 15, 2015, 11:29 PM
 */

//System Libraries
#include <iostream> // I/O iostream
#include <cstring> // C/S cstring
using namespace std; 

//User Libraries

//Global Constants

//Function Prototypes
bool isLpYr(unsigned short); // Is the leap year true or false?
int  gtMnVal(string,unsigned short); // Get the month value
int  gtYrVal(unsigned short); // Get the year value
int  gtCntVl(unsigned short); // Get the count value
string dayOfWk(string,short,unsigned short); // Create sequence of the days of the week.
int  atoiLk(char []); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short year; // Year
    string month; // Month
    const int SIZE=4;
    char rday[SIZE]; // Actual real day.
    short nDay; // amount of days.
    
    //Input the date
    cout<<"Input date form of July 4, 2008"<<endl;
    cin>>month;
    cin>>rday;
    cin>>year;
    
    //Your day corresponding to the date is
    cout<<"Day = "<<dayOfWk(month,atoiLk(rday),year)<<endl;
    
    //Exit stage right!
    return 0;
}

int  atoiLk(char n[]){
    //Declare variable
    int number=n[0]-48; // Number of days minus weeks.
    for(int i=1;i<=strlen(n)-2;i++){
        number=number*10+n[i]-48;
    }
    return number;
}

string dayOfWk(string mn,short day, // Day of the week.
        unsigned short yr){
    //Declare Variable
    char numDay=(day+gtMnVal(mn,yr)+
                gtYrVal(yr)+gtCntVl(yr))%7;
    //Return the day of the week
    switch(numDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:{ //Defaults direct to the beginning of the week if the day is entered incorrectly.
            cout<<"Bad Day"<<endl;
            return "Sunday";
        }
    }
}

int  gtCntVl(unsigned short year){
    return 2*(3-year/100%4); 
}
 //Year corresponding to the date is
int  gtYrVal(unsigned short year){
    //return the results
    return year%100+year%100/4; //Calculate to get the value of the correct year.
}
 //Month corresponding to the date is
int  gtMnVal(string month,unsigned short year){ // Show all the months that show when leap year courses
    if(month=="January"){
        if(isLpYr(year))return 6;
        return 0;
    }else if(month=="February"){
        if(isLpYr(year))return 2;
        return 3;
    }else if(month=="March"){
        return 3;
    }else if(month=="April"){
        return 6;
    }else if(month=="May"){
        return 1;
    }else if(month=="June"){
        return 4;
    }else if(month=="July"){
        return 6;
    }else if(month=="August"){
        return 2;
    }else if(month=="September"){
        return 5;
    }else if(month=="October"){
        return 0;
    }else if(month=="November"){
        return 3;
    }else if(month=="December"){
        return 5;
    }else{ 
        cout<<"This is not possible"<<endl;
        return -1;
    }
}

/******************************************************
 ***************** isLpYr *****************************
 ******************************************************
 * Purpose:  To determine if the year is a leap year
 * Input:
 *      year->Years with AD
 * Output:
 *      bool->True if leap year || False if not a leap year
 */
bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}
