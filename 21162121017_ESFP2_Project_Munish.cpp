#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct bosses
{
    int damage;
    string name;
};

class player
{
    int x;
    char pname[50];
    public:
        void getname()
        {
            cout << "ENTER PLAYER NAME:";
            cin >> pname;
            cout << "ENTER PLAYER ID:";
            cin >> x;
        }
        void output()
        {
            cout << pname << "WELCOME TO THE FINAL ROUND" << endl;
        }
        void op2()
        {
            cout << pname << " HAS DEFEATED THE BOSS ";
        }
};
int main()
{
    player pl1;
    pl1.getname();
    struct bosses b[10];
    b[0].damage=10;
    b[0].name="LINK";
    b[1].damage=15;
    b[1].name="DRACULA";
    b[2].damage=18;
    b[2].name="SINISTAR";
    b[3].damage=20;
    b[3].name="ORNSTEIN";
    b[4].damage=22;
    b[4].name="ALMA";
    b[5].damage=25;
    b[5].name="GORO";
    b[6].damage=27;
    b[6].name="SENATOR";
    b[7].damage=30;
    b[7].name="SANS";
    b[8].damage=33;
    b[8].name="SEPHRINOTH";
    b[9].damage=35;
    b[9].name="THE NAMELESSS KING";
    string fourletter[43] = {"ACID","ACNE","BATH","BALL","CELL","COAT","DATE","DAYS","EVIL","FARM","FILM","GAME","GREY","HAND","HOST","IRON","INCH","JUMP","KING","KICK","LIFE",
                      "LUCK","MEAT","MOOD","NEXT","NECK","ORAL","PLUG","POOL","REAL","RISK","SELL","SHOW","SLIP","TALL","TEXT","USER","UNIT","VICE","WAGE","WEST",
                      "YEAR","ZONE"};
    string fiveletter[43] = {"ADOPT","AHEAD","BEACH","BLOCK","CLOSE","CYCLE","DRINK","DRAFT","ERROR","FAITH","FLEET","GUEST","GLOBE","HOTEL","HEAVY",
                              "INPUT","IMAGE","JUDGE","KNOWN","LABEL","LUCKY","MAGIC","MINOR","NURSE","NORTH","OFFER","PARTY","PILOT","RAPID","ROUND",
                              "SHOOT","SLEEP","TEETH","THICK","TRADE","USAGE","UPPER","VALID","WASTE","WHEEL","YOUTH","YOUNG","STOCK"};
    string sixletter[43] = {"ABROAD","AGENCY","BEAUTY","BURDEN","CHANCE","CRISIS","DOCTOR","DOMAIN","EFFORT","FORMAT","FIGURE","GUILTY","GENDER","HONEST","HEALTH","INSIDE",
                            "INVEST","JUNIOR","KILLED","LABOUR","LUXURY","LEGACY","MUSEUM","MURDER","NORMAL","NOTION","OFFICE","PALACE","PERMIT","RANDOM","REPAIR","SAMPLE",
                            "SCHEME","TENNIS","THEORY","UPDATE","UNIQUE","VERSUS","VICTIM","WEALTH","WINTER","WRITER","YELLOW"}; 
    string sevenletter[15] = {"ANXIOUS","BINDING","CALIBER","DYNAMIC","EXPLAIN","FEDERAL","GENETIC","HISTORY","IMAGINE","JUSTIFY","KINGDOM",
                              "LOYALTY","MAXIMUM","ORGANIC","PHOENIX"};
    string powerups1[6]={"INCREASE SHIELD BY 2","INCREASE SHIELD BY 5","INCREASE HEALTH BY 15","INCREASE REGEN BY 2","INCREASE HEALTH BY 20","INCREASE REGEN BY 5"};
    string powerups2[3]={"INCREASE SHIELD BY 7","INCREASE REGEN BY 7","INCREASE HEALTH BY 30"};
    int choice_class;
    int health=100,shield=0,regen=0,charhealth,charshield,charregen;
    int random;
    string rword;
    char rwordg[50];
    string p1,p2;
    int pchoice,p1rand,p2rand;
    int i,j,k,length;
    int dmgtaken;
    cout << "Welcome To The Fallen Land " << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Select Your Class!(Type 1,2,3,4)" << endl;
    cout << "1) WARRIOR (Warrior Are Meant To Be A Fighting Class,Gives 30 Extra Health And 4 Shield To Begin With )" << endl;
    cout << "2) MAGE (Mages Are Said To Be Very Good At Defensive Spells,Gives 10 Extra Health And 8 Shield To Begin With )" << endl;
    cout << "3) HEALER (Healer Said To Last Long Battles,Gives 5 Shield and 5 Regen To Bein With )" << endl;
    cout << "4) No Class (If You Believe You Are Skilled Enough To Beat The Game Without Any Starting Boosts Then The Challenge Is Up! )" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------" << endl;
    cin >> choice_class;
    cout << "------------------------------------------------" << endl;
    if(choice_class==1)
    {
        health+=30;
        shield+=4;
    }
    else if(choice_class==2)
    {
        shield+=8;
        health+=10;
    }
    else if(choice_class==3)
    {
        shield+=5;
        regen+=5;
    }
    for(i=0;i<10;i++)
    {
        charhealth=health;
        charshield=shield;
        charregen=regen;
        if(i==3)
        {
            srand(time(0));
            p1rand=rand()%6;
            p1=powerups1[p1rand];
            cout << "YOU HAVE RECIEVED A BLESSING FROM THE HEAVENS!!! " << endl;
            cout << p1 << endl;
            
            if(p1rand==0)
            {
                shield+=2;
            }
            else if(p1rand==1)
            {
            shield+=5;
            }
            else if(p1rand==2)
            {
                health+=15;
            }
            else if(p1rand==3)
            {
                regen+=2;
            }
            else if(p1rand==4)
            {
                health+=20;
            }
            else if(p1rand==5)
            {
                regen+=5;
            }
            cout << "------------------------------------------------" << endl;
        }
        if(i==6)
        {
            srand(time(0));
            p1rand=rand()%3;
            p1=powerups2[p1rand];
            cout << "YOU HAVE RECIEVED ANOTHER BLESSING " << endl;
            cout << p1 << endl;
            if(p1rand==0)
            {
                shield+=7;
            }
            else if(p1rand==1)
            {
                regen+=7;
            }
            else if(p1rand==2)
            {
                health+=30;
            }
            cout << "------------------------------------------------" << endl;
        }
        cout << "YOU ARE FIGHTING: " << b[i].name << endl;
        cout << "BOSS DAMAGE: " << b[i].damage << endl;
        cout << "------------------------------------------------" << endl;
        if(i<3)
        {
            srand(time(0));
            random=rand()%43;
            rword=fourletter[random];
            cout << "(4 letter word)" << endl;
            length=4;
        }
        else if(i>=3 && i<6)
        {
            srand(time(0));
            random=rand()%43;
            rword=fiveletter[random];
            cout << "(5 letter word)" << endl;
            length=5;
        }
        else if(i>=6 && i<9)
        {
            srand(time(0));
            random=rand()%43;
            rword=sixletter[random];
            cout << "(6 letter word)" << endl;
            length=6;
        }
        else if(i==9)
        {
            srand(time(0));
            random=rand()%15;
            rword=sevenletter[random];
            cout << "(7 letter word)" << endl;
            length=7;
            pl1.output();
        }
        while(charhealth>=0 )
        {
            cout << "ENTER YOUR GUESS(Enter In All Caps): ";
            cin >> rwordg;
            cout << "------------------------------------------------" << endl;
            
            if(rwordg==rword)
            {
                pl1.op2();
                cout << b[i].name << endl;
                cout << "------------------------------------------------" << endl;
                break;
            }  
            else
            {
                if(b[i].damage<=charshield)
                {
                    dmgtaken=0;
                }
                else
                {
                    dmgtaken=b[i].damage-charshield;
                    charhealth=charhealth-dmgtaken+regen;
                }
                cout << "WRONG GUESS, YOU TOOK " << dmgtaken << " DAMAGE, YOUR HEALTH = " << charhealth << endl;
                cout << endl;
                cout << "CORRECT LETTER GUESSED ARE AS FOLLOWS - " << endl;
                cout << "------------------------------------------------" << endl;
                for(j=0;j<length;j++)
                {
                    if(rword[j]==rwordg[j])
                    {
                            cout << rwordg[j] << " IS IN THE WORD AND IN CORRECT POSITION " << j+1  << endl;
                            goto there;
                    }
                    
                    for(k=0;k<length;k++)
                    {
                        if(rword[j]==rwordg[k])
                        {
                            cout << rwordg[k] << " IS IN THE WORD BUT IN WRONG POSITION " << endl;
                        }
                    }
                    there:;
                }
                cout << "------------------------------------------------" << endl;
            }
        }
    }
}