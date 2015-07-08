
#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int main() {

//Header Information

//Declare Variables

string movie_name;
float ATickets,CTickets, gprofit, nprofit, distAMT;

cout<<"Enter a movie name:";

getline(cin, movie_name);

cout<<"Enter total adult tickets sold :";

cin>>ATickets;

cout<<"Enter total child tickets sold :";

cin>>CTickets;

//Calculate Gross Box Office Profit
gprofit = (ATickets*6+CTickets*3);

//Calculate Net Box Office Profit
nprofit = (gprofit*.20);

//Calculate Amount Paid
distAMT = (gprofit-nprofit);


//Display full report

cout<<"Movie Name:"<<setw(5)<<movie_name<<endl;
cout<<"Adult Tickets Sold:"<<setw(5)<<ATickets<<endl;
cout<<"Child Tickets Sold:"<<setw(5)<<CTickets<<endl;
cout<<"Gross Box Office Profit:$"<<fixed<<setprecision(2)<<gprofit<<endl;
cout<<"Amount Paid to Distributor: $"<<setw(5)<<setprecision(2)<<distAMT<<endl;
cout<<"Net Box Office Profit: $"<<setw(5)<<nprofit<<endl;

return 0;
}