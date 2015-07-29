/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 * Project: SUPER HEROES VS. The Ultimate Villains
 * Created on July 27, 2015, 12:56 AM
 */

#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//Function Prototypes
void getStory();
void printStory();
void choosehero(int &);
int fightINIT(short[], short[], int);

//Global variables
vector<string> heroesList(3); //create list of valid heroes
int HP = 0;     //positions of said stats
int maxHP = 1;
int MP = 2;
int maxMP = 3;
int AD = 4;
int armor = 5;
int AP = 6;
int MR = 7;
int pots = 8;
string finalHero; //Hero chosen by user
                        //     0         1         2
string villans[3][3] = { {"Lex Luthor","Joker", "Ultron"},           //0
                         {"Kryptonite","laughing gas", "hacking"},   //1
                         {"intelligence","knife","manipulation"} };  //2
string *inventory = new string[9]; //creates an inventory of 9 using dynamic array
int invSz=9;
string droppedItems[] = {"wallet", "hammer", "shield", "knife", "gold", "keys", "small box", "lottery ticket", "pistol", "watch"};

//Execution Begins
int main() {
    int role=0;  //1 == Superman, 2 == Batman, 3 == Ironman
    bool win; //bool that determines if you won the round
    char choice; //at the end of the game: true=continue playing, false=discontinue
    int newItem=0; //will later use as a position/reference to random item selected
    char pickUp; // ==Y:pick up item, ==N:don't pick up item
    const int STATS=9;
    string playerHero="";
    
    short charSts[STATS]; 
    
    for(int i = 0; i < invSz; i++){
        inventory[i]="Empty slot";
    }
    
    heroesList.push_back("Superman");
    heroesList.push_back("Batman");
    heroesList.push_back("Ironman");
    
    short enemSts[STATS]= {200, 200, 200, 200, //HP, MaxHP, MP, MaxMP
                           50, 15, 50, 30, 0}; //Attack, Defense, Magic Atk, Magic Def, crit%, pot
    
    short superm[STATS]= {150, 150, 100, 100, //HP, MaxHP, MP, MaxMP
                          30, 15, 70, 29, 2}; //Attack, Defense, Magic Atk, Magic Def, crit%, pot        
    
    short batm[STATS]= {125, 125, 100, 100, //HP, MaxHP, MP, MaxMP
                        45, 40, 40, 20, 3}; //Attack, Defense, Magic Atk, Magic Def, crit%, pot       
   
    short ironm[STATS]= {100, 100, 125, 125, //HP, MaxHP, MP, MaxMP
                         25, 20, 60, 27, 2}; //Attack, Defense, Magic Atk, Magic Def, crit%, pot           
    
    //Introductory Story
    
    //cout<<"When the tail of rogue comet Rhea-M passes through Earth's atmosphere, humanity's worst nightmares "<<endl;
    //cout<<"come to life as machines gradually develop minds of their own, turning on their creators in bloody rebellion. "<<endl;
    //cout<<"At a small college in the City of Riverside, California, both students and professors alike are coming to grips with the horror"<<endl;
    //cout<<"as a series of increasingly bizarre accidents occur, some injurious, some near-fatal, and some fatal."<<endl;
    //cout<<"The terror finally comes to a start when the Computer Machinery begins to destroy the world."<<endl;
    //cout<<"It is up to the students of CSC 5 to save the world and to reach out to a Great Hero to save our world from destruction!"<<endl;
    //cout<<"Will the superhero be able to get there in time? What will be the outcome of this great battle?!"<<endl<<endl<<endl;
   
    //seed random number based on Computer's current time
    srand(static_cast<unsigned int>(time(0)));
    //srand is a function that takes in a parameter, and creates a psuedo-random number based on it
    
    getStory();
    
    printStory();
    
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
        
        win=fightINIT(charSts,enemSts,STATS);
    
        switch(win){
            case 1:
                cout<<"***********************************************************\n\n";
                cout<<"The Computer Machinery have acquired a circuit malfunction and begins to spark. You are ready for the finishing blow, but as you do, Computer Machinery"<<endl;  //Display Game victory message
                cout<<"catches on fire and explodes into oblivion. Earth is now saved! The planet owes you one!!"<<endl;
                newItem=rand()%9;
                
                cout<<"\nA " << droppedItems[newItem] << " was dropped. Would you like to pick it up? [Y/N]: ";
                cin>>pickUp;
                break;
            case 0:
                cout<<"***********************************************************\n";
                cout<<"The Computer Machinery strikes a fatal blow to your artery. He electrocutes your entire body, before turning you into ashes!"<<endl;    //Display Game over message
                cout<<"The fate of the Earth is in question! You have failed saving the world!!"<<endl;
                cout<<"Game Over!!" << endl;
                break;
        }
        
        if(pickUp=='Y'||pickUp=='y'){
            int emptySlot=-1;
            for(int i = 0; i < invSz; i++)
                if(inventory[i]=="Empty slot") emptySlot = i;
            
            if(emptySlot!=-1) inventory[emptySlot] = droppedItems[newItem];
            else //if no empty slot was found (emptySlot still equals -1)
                cout << "You have no space in your inventory." << endl;
        }
        
        cout<<endl;
        
        cout << "Would you like to play again? [Y/N]: ";
        cin >> choice;
        cout <<"\n***********************************************************\n"<< endl;
    }while(choice=='Y' || choice=='y');
    
    //display inventory
    cout << "Thanks for playing! Here are your bounties: \n";
    for(int i = 0; i < invSz; i++){
        if(inventory[i]!="Empty slot")
            cout << '\t' << i+1 << ". " << inventory[i] << endl;
    }
    cout << endl;
    cout << "Good Bye!"<< endl;

    
    return 0;
}
/* ************************************************************************** */

void getStory(){
    fstream story;
    story.open("story.txt"); //create a file called "story.txt"...if "story.txt" does not exist, it will create it 
    
    story<<"When the tail of rogue comet Rhea-M passes through Earth's atmosphere, humanity's worst nightmares "<<endl;
    story<<"come to life as machines gradually develop minds of their own, turning on their creators in bloody rebellion. "<<endl;
    story<<"These machines created the ultimate robot villains to destroy the world, such as the Joker, Ultron, and Lex Luther.  "<<endl;
    story<<"At a small college in the City of Riverside, California, both students and professors alike are coming to grips with the horror"<<endl;
    story<<"as a series of increasingly bizarre accidents occur, some injurious, some near-fatal, and some fatal."<<endl;
    story<<"The terror finally comes to a start when the ultimate villains begins to destroy the world."<<endl;
    story<<"It is up to the students of CSC 5 to save the world and to reach out to a Great Hero to save our world from destruction!"<<endl;
    story<<"Will the superhero be able to get there in time? What will be the outcome of this great battle?!"<<endl<<endl<<endl;
    story.close();
}

void printStory(){
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
    char areYouSure; // either Y/N
    string input; // user input hero
    string chosenHero = "";

    cout<<"The world is in deep trouble! Please pick a superhero to save our world from the evil COMPUTER MACHINERY! "<<endl<<endl;
    cout<<"Your choices are Superman, Batman, and Ironman! "<<endl<<endl;
    cout<<"The world rest in the palm of your hands! What are you waiting for!! "<<endl<<endl;
    cout<<"Choose a superhero!: ";
    cin>>input;
    do{
        for(int i = 0; i < heroesList.size(); i++){
            if(heroesList.at(i)==input) chosenHero=heroesList.at(i); //standard linear search to find the hero in the list
        }
        
        if(chosenHero=="Superman"){
            cout<<"1: Superman: \tAs an influential superhero, Superman possesses extraordinary powers,"<<endl;         
            cout<<"\t\tfaster than a speeding bullet. More powerful than a locomotive. "<<endl;
            cout<<"\t\tAble to leap tall buildings in a single bound...It's Superman!"<<endl<<endl;
            cout<<"Are you sure you want to pick Superman? [Y/N]: ";
            cin>>areYouSure;
        }
        else if(chosenHero=="Batman"){
            cout<<"2: Batman:   \tBatman has no inherent superhuman powers; he relies on his own scientific knowledge, detective skills, and athletic prowess." <<endl;                
            cout<<"\t\tBatman is regarded as one of the world's greatest detectives, if not the world's greatest crime solver."<<endl;
            cout<<"\t\tBatman has been repeatedly described as having a genius-level intellect, one of the greatest martial artists in the DC Universe."<<endl<<endl;
            cout<<"Are you sure you want to pick Batman? [Y/N]: ";
            cin>>areYouSure;
        }
        else if(chosenHero=="Ironman"){
            cout<<"3: Ironman: \tIronman possesses powered armor that gives him superhuman strength and durability, flight, and an array of weapons. "<<endl;               
            cout<<"\t\tIron Man's standard offensive weapons have always been the repulsor rays that are fired from the palms of his gauntlets."<<endl;
            cout<<"\t\tOther weapons include the uni-beam projector in his chest, pulse bolts, and an electromagnetic pulse generator. "<<endl<<endl;
            cout<<"Are you sure you want to pick Ironman? [Y/N]: ";
            cin>>areYouSure;
        }
        else{
            cout << "Not a valid hero. Please choose a hero: ";
            cin>>input;
        }
        
        if(areYouSure=='N'||areYouSure=='n'){
            cout<<"Choose a superhero!: " << endl;
            cin>>input;
        }
        
    }while(areYouSure=='N'||areYouSure=='n'||chosenHero=="");
    
    if(chosenHero=="Superman"){ 
        role = 1;
        finalHero="Superman";
    }
    else if(chosenHero=="Batman"){ 
        role = 2;
        finalHero="Batman";
    }
    else if(chosenHero=="Ironman"){ 
        role = 3;
        finalHero="Ironman";
    }
    
    //Displays stats for chosen hero
    switch (toupper(role)){
        case 1: //Selection of Superman
            cout<<"Superman stats:"<<endl;                                                                 
            cout<<"\tHP=150"<<endl;
            cout<<"\tMP=100"<<endl;
            cout<<"\tAttack=30"<<endl;
            cout<<"\tDefense=15"<<endl;
            cout<<"\tMagic Attack=75"<<endl;
            cout<<"\tMagic Defense=29"<<endl;
            cout<<"\tPotions=2\n\n"<<endl;
            break;
        case 2: //Selection of Batman
            cout<<"Batman stats:"<<endl;                                                                  
            cout<<"\tHP=125"<<endl;
            cout<<"\tMP=100"<<endl;
            cout<<"\tAttack=45"<<endl;
            cout<<"\tDefense=40"<<endl;
            cout<<"\tMagic Attack=40"<<endl;
            cout<<"\tMagic Defense=20"<<endl;
            cout<<"\tPotions=3\n\n"<<endl;
            break;
        case 3://Selection of Iron Man
            cout<<"Ironman stats:"<<endl;                                                                
            cout<<"\tHP=100"<<endl;
            cout<<"\tMP=100"<<endl;
            cout<<"\tAttack=25"<<endl;
            cout<<"\tDefense=20"<<endl;
            cout<<"\tMagic Attack=60"<<endl;
            cout<<"\tMagic Defense=27"<<endl;
            cout<<"\tPotions=2\n\n"<<endl;
            break;
    }
}

int fightINIT(short charas[], short enemy[], int STATS){
    srand(static_cast<unsigned int>(time(0)));
    
    bool result;
    int choiceP;
    int choiceE;
    int randATK = 1+rand()%2; //rand()%2 will give you a random number: either 0 or 1. 1+ : 1 or 2
    string chosenVillan = "";
    string chosenVillanAttack="";
    
    if(finalHero=="Superman"){
        chosenVillan = villans[0][0]; // Lex Luthor
        chosenVillanAttack = villans[randATK][0];
    }
    else if(finalHero=="Batman"){ 
        chosenVillan = villans[0][1]; // Joker
        chosenVillanAttack = villans[randATK][1];
    }
    else if(finalHero=="Ironman"){ 
        chosenVillan = villans[0][2]; // Ultron
        chosenVillanAttack = villans[randATK][2];
    }
    
    cout<<"Battle Begins!\n";
    
    cout<<"When the world seems to be lost, a great superhero suddenly appears! Once in, you see a world like no other and that humanity is in the palm of your hands!"<<endl;
    cout<<"Within the sudden flood of terror and destruction, you see civilians running away from the horrible terror and seeking for safety!"<<endl;
    cout<<"The clouds are getting darker and you can hear the echoes of " << chosenVillan << " coming towards you!"<<endl;
    cout<<"His evil is all over the place and you can feel the shock flowing through your body and veins!"<<endl;
    cout<<"What will you do now?!"<<endl<<endl;
    
    enemy[HP] = 200;
    while (charas[HP]>0&&enemy[HP]>0){         //Loop fight sequence as long as player HP and enemy HP are larger than 0
        cout<<"Your HP: "<<charas[HP]<<"/"<<charas[maxHP]<<"          " << chosenVillan << " HP: "<<enemy[HP]<<"/"<<enemy[maxHP]<<endl;       //Display Player and Enemy Health
        cout<<"Your MP: "<<charas[MP]<<"/"<<charas[maxMP]<<"          " << chosenVillan << " MP: "<<enemy[MP]<<"/"<<enemy[maxMP]<<endl;       //Display Player and Enemy Magic Points
        cout<<"Potions: "<<charas[pots]<<endl<<endl;     
        cout << "***********************************************************\n" << endl;
        cout<<"What will you do? (Enter the Number for the chosen action)"<<endl;                //Display the menu of options for the player actions
        cout<<"1. Attack \t 3. Potion"<<endl;
        cout<<"2. Magic"<<endl;
        cout << "Your move: ";
        cin>>choiceP;                                                                                                       
        cout<<endl;

        switch (choiceP){          //Read in player choice
            case 1:      
                    cout<<"You physically attack "<< chosenVillan << " for "<< (charas[AD]-enemy[armor])<< " damage."<<endl;     //Deal damage to enemy
                    enemy[HP]-=(charas[AD]-enemy[armor]);
                break;
            case 2:                         
                    cout<<"You use Ability Power to attack " << chosenVillan<<" for "<<(charas[AP]-enemy[MR])<<" damage."<<endl;
                    enemy[HP]-=(charas[AP]-enemy[MR]);                                                               //If true:Deal damage to enemy
                    charas[MP]-=25; //magic abilities cost 25MP
                break;
            case 3:                                                                          //Player uses a potion
                if (charas[pots] >0){                                                     //Check if potions are available
                    cout<<"You use a potion to recover 30 Health Points."<<endl;               //Player recovers 30HP
                    charas[HP]+=30;
                    charas[pots]--;                                                            //Remove one potion
                }else{
                    cout<<"You have no more potions!"<<endl;    
                }
                break;
        }
        
        if (enemy[HP]<=0){                                                            //Check if enemy is dead, stop fight if true
            break;
        }
        
        int villanAttack=rand()%10; 
        if (villanAttack%2==0){                                                                                                        
            if (enemy[MP]-25>0){                                                     //Check if enemy has MP
                cout<< chosenVillan<<" uses " << chosenVillanAttack << " against you! It does "<<(enemy[AP]-charas[MR])<<" damage."<<endl;    //Deal damage if true, subtract MP from enemy
                charas[HP]-=(enemy[AP]-charas[MR]);
                enemy[MP]-=25;                                                                                                             
            }else{
                cout<<"Attack misses you!"<<endl;                                   //No damage dealt if false
            }
        }else{                                                                      //Enemy attacks
            cout<< chosenVillan << " uses a basic attack and deals " <<(enemy[AD]-charas[armor])<<" damage."<<endl;    //Deal damage
            charas[HP]-=(enemy[AD]-charas[armor]);
        }
        
        //restores MP after each round
        if (charas[MP]+15>charas[maxMP]){ //note: charas[3] originally        //Check if MP recovery needed for both characters
            charas[MP]=charas[maxMP];
        }else{
            charas[MP]+=15;            //Recover up to 15 MP per turn for both characters
        }
        
        if (enemy[MP]+15>100){
            enemy[MP]=100;
        }else{
            enemy[MP]+=15;
        }
    }
    
    
    
    //final results
    if (charas[0]<=0) result = false;
    else if (enemy[0]<=0) result = true;
    else cout << "An eror occured." << endl;
   
    return result;
}
