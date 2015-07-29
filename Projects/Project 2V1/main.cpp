/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 * Project: SUPER HEROES VS. The Computer Machinery
 * Created on July 27, 2015, 12:56 AM
 */

#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

//Function Prototypes
void wfile();
void rfile();
void choosehero(int &);
int fightINIT(short[], short[], int);

//Execution Begins
int main() {
    int critCh, role;  //Critical hit chance and role selection
    bool win; //EDIT ME: change to bool
    char choice; //End of game choice
    const int STATS=10;
    
    short charSts[STATS];       
    
    short enemSts[STATS]= {200, 200, 200, 200, 45, 5, 35, 300, 0, 0};
    //Computer Machinery's collective groups of HP, Max HP, MP, Max MP, Attack, Defense, Magic Atk, Magic Def, 0, 0
    
    short superm[STATS]= {150, 150, 100, 100, 30, 15, 25, 25, 7, 2};             
    //Superman's collective groups of HP, Max HP, MP, Max MP, Attack, Defense, Magic Atk, Magic Def, Crit Chance, and Potion)
    
    short batm[STATS]= {125, 125, 100, 100, 45, 40, 50, 35, 9, 3};             
    //Batman's collective groups of HP, Max HP, MP, Max MP, Attack, Defense, Magic Atk, Magic Def, 0, 0
   
    short ironm[STATS]= {100, 100, 125, 125, 25, 70, 60, 60, 10, 2};             
    //Iron Man's collective groups of HP, Max HP, MP, Max MP, Attack, Defense, Magic Atk, Magic Def, 0, 0
    
    //Introductory Story
    
    cout<<"When the tail of rogue comet Rhea-M passes through Earth's atmosphere, humanity's worst nightmares "<<endl;
    cout<<"come to life as machines gradually develop minds of their own, turning on their creators in bloody rebellion. "<<endl;
    cout<<"At a small college in the City of Riverside, California, both students and professors alike are coming to grips with the horror"<<endl;
    cout<<"as a series of increasingly bizarre accidents occur, some injurious, some near-fatal, and some fatal."<<endl;
    cout<<"The terror finally comes to a start when the Computer Machinery begins to destroy the world."<<endl;
    cout<<"It is up to the students of CSC 5 to save the world and to reach out to a Great Hero to save our world from destruction!"<<endl;
    cout<<"Will the superhero be able to get there in time? What will be the outcome of this great battle?!"<<endl<<endl<<endl;
   
    srand(static_cast<unsigned int>(time(0)));
    //srand is a function that takes in a parameter, and creates a psuedo-random number based on it
    
    wfile();
    
    rfile();
    
    do{
    
        choosehero(role);
        
        switch(role){
            case 1:
                for(int i=0;i<STATS;i++){
                    charSts[i]=superm[i];
                }
                break;
            case 2:
                for(int i=0;i<STATS;i++){
                    charSts[i]=batm[i];
                }
                break;
            case 3:
                for(int i=0;i<STATS;i++){
                    charSts[i]=ironm[i];
                }
                break;
        }
        
        win=fightINIT(charSts,enemSts, STATS);
    
        switch(win){
            case 1:
                cout<<"The Computer Machinery have acquired a circuit malfunction and begins to spark. You are ready for the finishing blow, but as you do, Computer Machinery"<<endl;  //Display Game victory message
                cout<<"catches on fire and explodes into oblivion. Earth is now saved! The planet owes you one!!"<<endl;
                break;
            case 0:
                cout<<"The Computer Machinery strikes a fatal blow to your artery. He electrocutes your entire body, before turning you into ashes!"<<endl;    //Display Game over message
                cout<<"The fate of the Earth is in question! You have failed saving the world!!"<<endl;
                cout<<"Game Over!!";
                break;
        }
        cout<<endl;
        
        cout << "Would you like to play again? [Y/N]" << endl;
        cin >> choice;
    
    }while(choice=='Y' || choice=='y');
    
    cout << "Good Bye!";

    
    return 0;
}
/* ************************************************************************** */

void wfile(){
    fstream story;
    story.open ("story.txt"); 
    
    story<<"When the tail of rogue comet Rhea-M passes through Earth's atmosphere, humanity's worst nightmares "<<endl;
    story<<"come to life as machines gradually develop minds of their own, turning on their creators in bloody rebellion. "<<endl;
    story<<"At a small college in the City of Riverside, California, both students and professors alike are coming to grips with the horror"<<endl;
    story<<"as a series of increasingly bizarre accidents occur, some injurious, some near-fatal, and some fatal."<<endl;
    story<<"The terror finally comes to a start when the Computer Machinery begins to destroy the world."<<endl;
    story<<"It is up to the students of CSC 5 to save the world and to reach out to a Great Hero to save our world from destruction!"<<endl;
    story<<"Will the superhero be able to get there in time? What will be the outcome of this great battle?!"<<endl<<endl<<endl;
    story.close();
}

void rfile(){
    string line;
    fstream story;
    story.open ("story.txt");
    
    while (getline(story,line)){ //works the same way as "while(cin>>choice)". It will output line by line until it reads eof (end of file)
        cout<<line<<"\n";
    }
    story.close();
}

void choosehero(int &role){
    //Declare Local Variables
    char check;
       
    do{
        cout<<"The world is in deep trouble! Please pick a superhero to save our world from the evil COMPUTER MACHINERY! "<<endl<<endl;
        cout<<"The world rest in the palm of your hands! What are you waiting for!! "<<endl<<endl;
        cout<<"1: Superman: \tAs an influential superhero, Superman possesses extraordinary powers,"<<endl;         
        cout<<"\t\tfaster than a speeding bullet. More powerful than a locomotive. "<<endl;
        cout<<"\t\tAble to leap tall buildings in a single bound...It's Superman!"<<endl<<endl;
        cout<<"2: Batman:   \tBatman has no inherent superhuman powers; he relies on his own scientific knowledge, detective skills, and athletic prowess." <<endl;                //Describe the Mage class
        cout<<"\t\tBatman is regarded as one of the world's greatest detectives, if not the world's greatest crime solver."<<endl;
        cout<<"\t\tBatman has been repeatedly described as having a genius-level intellect, one of the greatest martial artists in the DC Universe."<<endl<<endl;
        cout<<"3: Iron Man: \tIron Man possesses powered armor that gives him superhuman strength and durability, flight, and an array of weapons. "<<endl;               //Describe the Warrior class
        cout<<"\t\tIron Man's standard offensive weapons have always been the repulsor rays that are fired from the palms of his gauntlets."<<endl;
        cout<<"\t\tOther weapons include the uni-beam projector in his chest, pulse bolts, and an electromagnetic pulse generator. "<<endl<<endl;
        cout<<"Type 1 for Superman, 2 for Batman, and 3 for Iron Man:"<<endl;

        cin>>role;
        cout<<endl;

        //Determine role chosen
        switch (toupper(role)){
            case 1: //Selection of Superman
                cout<<"Superman"<<endl;                                                                  //Display Rogue Stats
                cout<<"HP=150"<<endl;
                cout<<"MP=100"<<endl;
                cout<<"Attack=30"<<endl;
                cout<<"Defense=15"<<endl;
                cout<<"Magic Attack=25"<<endl;
                cout<<"Magic Defense=25"<<endl;
                cout<<"Critical Chance: 30%"<<endl;
                cout<<"Potions=2"<<endl;
                cout<<"Are you sure you want to be Superman? [Y/N]"<<endl;
                cin>>check;
                break;
            case 2: //Selection of Batman
                cout<<"Batman"<<endl;                                                                   //Display Mage Stats
                cout<<"HP=125"<<endl;
                cout<<"MP=100"<<endl;
                cout<<"Attack=45"<<endl;
                cout<<"Defense=40"<<endl;
                cout<<"Magic Attack=50"<<endl;
                cout<<"Magic Defense=35"<<endl;
                cout<<"Critical Chance: 20%"<<endl;
                cout<<"Potions=2"<<endl;
                cout<<"Are you sure you want the Batman? [Y/N]"<<endl;
                cin>>check;
                break;
            case 3://Selection of Iron Man
                cout<<"Iron Man"<<endl;                                                                //Display Warrior Stats
                cout<<"HP=100"<<endl;
                cout<<"MP=125"<<endl;
                cout<<"Attack=25"<<endl;
                cout<<"Defense=70"<<endl;
                cout<<"Magic Attack=60"<<endl;
                cout<<"Magic Defense=60"<<endl;
                cout<<"Critical Chance: 35%"<<endl;
                cout<<"Potions=1"<<endl;
                cout<<"Are you sure you want the Iron Man? [Y/N]"<<endl<<endl;
                cin>>check;
                break;
        }
    }while (check=='N'||check=='n');
}

int fightINIT(short charSts[],short enemSts[], int STATS){
    bool temp;
    int choiceP;
    int critCh;
    int choiceE;
    
    cout<<"When the world seems to be lost, a great superhero suddenly appears! Once in, you see a world like no other and that humanity is in the palm of your hands!"<<endl;
    cout<<"Within the sudden flood of terror and destruction, you see civilians running away from the horrible terror and seeking for safety!"<<endl;
    cout<<"The clouds are getting darker and you can hear the echoes of the Computer Machinery coming towards you!"<<endl;
    cout<<"His electricity is all over the place and you can feel the shock flowing through your body and veins! What will you do now?!"<<endl<<endl;
    

    while (charSts[0]>0&&enemSts[0]>0){                                                                                         //Loop fight sequence as long as player HP and enemy HP are larger than 0
        cout<<"Your HP: "<<charSts[0]<<"/"<<charSts[1]<<"         Computer Machinery HP: "<<enemSts[0]<<"/"<<enemSts[1]<<endl;                        //Display Player and Enemy Health
        cout<<"Your MP: "<<charSts[2]<<"/"<<charSts[3]<<"         Computer Machinery MP: "<<enemSts[2]<<"/"<<enemSts[3]<<endl;                        //Display Player and Enemy Magic Points
        cout<<"Potions: "<<charSts[9]<<endl<<endl;                                                                             //Display Number of potions
        cout<<"What will you do? (Enter the Number for the chosen action)"<<endl;                                           //Display the menu of options for the player actions
        cout<<"1. Attack      3. Potion"<<endl;
        cout<<"2. Magic"<<endl;
        cin>>choiceP;                                                                                                       
        cout<<endl;

        critCh=rand()%9;                                                                                                    //Calculate critical value for this turn
        //cout<<"Crit"<<critCh<<endl;
        switch (choiceP){                                                                                                   //Read in player choice
            case 1:                                                                                                                 //Player Attacks
                if (charSts[8]<=critCh){                                                                                                   //Check for critical hit
                    cout<<"CRITICAL HIT! You attack the Computer Machinery for "<<charSts[4]<<" damage."<<endl;
                    enemSts[0]-=charSts[4];
                }else{
                    cout<<"You attack Computer Machinery for "<<charSts[4]-enemSts[5]<<" damage."<<endl;                                        //Deal damage to enemy
                    enemSts[0]-=(charSts[4]-enemSts[5]);
                }
                break;

            case 2:                                                                                                                 //Player uses Magic
                if (charSts[2]-25>25){                                                                                                      //Check to see if they have enough MP
                    if (charSts[8]<=critCh){                                                                                                   //Check for critical hit
                        cout<<"CRITICAL HIT! You attack the Computer Machinery for "<<charSts[6]<<" damage."<<endl;
                        enemSts[0]-=charSts[6];
                        charSts[2]-=25;
                    }else if (charSts[6]>enemSts[7]){                                                                                             //Check if players magic is higher than enemy magic defense
                        cout<<"Your weapon hits Computer Machinery for "<<charSts[6]-enemSts[7]<<" damage."<<endl;
                        enemSts[0]-=(charSts[6]-enemSts[7]);                                                                                              //If true:Deal damage to enemy
                        charSts[2]-=25;                                                                                                                 //Subtract MP
                    }else{
                        cout<<"Your attacks are too weak to even effect Computer Machinery. 0 Damage."<<endl;                               //If false: deal no damage
                    }  
                }else{
                    cout<<"Your attacks failed to effect any damage! 0 Damage."<<endl;
                }
                                                                                                                             //Subtract MP
                break;
            case 3:                                                                                                                 //Player uses a potion
                if (charSts[9] >0){                                                                                                        //Check if potions are available
                    cout<<"You use a potion to recover 40 Health Points."<<endl;                                                            //Player recovers 40HP
                    charSts[0]+=40;
                    charSts[9]--;                                                                                                              //Remove one potion
                }else{
                    cout<<"You reach into your utility belt to find a potion, but you are all out!"<<endl;    //Wasted turn if not available
                }
                break;
        }
        if (enemSts[0]<=0){                                                                                                     //Check if enemy is dead, stop fight if true
            break;
        }
        choiceE=rand()%5;                                                                                                   //Random number to determine enemy attack
        if (choiceE==4){                                                                                                        //20% chance of using magic
            if (enemSts[2]-25>0){                                                                                                       //Check if enemy has MP
                cout<<"Computer Machinery shoots electric wires at you! It does "<<enemSts[6]-charSts[7]<<" damage."<<endl;                         //Deal damage if true, subtract MP from enemy
                charSts[0]-=(enemSts[6]-charSts[7]);
                enemSts[2]-=25;                                                                                                             
            }else{
                cout<<"Computer Machinery tries to catch you, but seems to malfunction."<<endl;                                   //No damage dealt if false
            }
        }else{                                                                                                                  //Enemy attacks
            cout<<"Computer Machinery tries to drain all of the energy inside of you! It does some damage to your system! "<<enemSts[4]-charSts[5]<<" damage."<<endl;                    //Deal damage
            charSts[0]-=(enemSts[4]-charSts[5]);
        }
        if (charSts[2]+15>charSts[3]){                                                                                             //Check if MP recovery needed for both characters
            charSts[2]=charSts[3];
        }else{
            charSts[2]+=15;                                                                                                         //Recover up to 15 MP per turn for both characters
        }
        if (enemSts[2]+15>100){
            enemSts[2]=100;
        }else{
            enemSts[2]+=15;
        }
    }
    if (charSts[0]<=0){
        temp = false;
    }else if (enemSts[0]<=0){
        temp = true;
    }else{
        cout<<"Error"<<endl;
    }
    
    //cout<<"Temp is "<<temp<<endl;
   
    return temp;
}