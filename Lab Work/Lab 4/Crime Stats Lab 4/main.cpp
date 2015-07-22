//Nguyen, Johny - Lab 4 - 46091
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
const unsigned char CNVPCT=100;//Conversion to Percentage
//Function Prototypes

int main(int argc, char** argv) {

//Declare Variables Here

float USVCrime; //US Violent Crimes
float EngVCrime; //England Violent Crimes
float USPop; //US Population
float EngPop; //England Population
float USPctg; //US Ratio
float EngPctg; //England Ratio
cout<<fixed<<setprecision(2)<< endl;

//Initialize values from reference website

USVCrime = 11.88e6f; //11.88 million
EngVCrime = 6.52e6f; //6.52 million
USPop = 318.00e6f; //318 million
EngPop = 64.00e6f; //64 million

//Calculate the Percentage of Violent Crimes to Population

USPctg = (USVCrime/USPop)*CNVPCT;
EngPctg = (EngVCrime/EngPop)*CNVPCT;

//Output the results

cout<<"Percentage of Violent crime to the population of US = "
<<USPctg<<"%"<< endl;

cout<<"Percentage of Violent crime to the population of England = "
<<EngPctg<<"%"<< endl;

//Exit Stage Right!

	return 0;
}
