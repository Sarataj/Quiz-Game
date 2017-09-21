/* 1000-2000-5000-10000-20000-50000-100000-200000-500000-1000000-2000000-5000000-10000000-20000000-50000000*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float, char []);
int main()
{
    int r,r1,count,i,n,score,money;
    char choice;
    char playername[100];
mainhome:
    system("cls");
    printf("\n\n\t\t\t   \4\4\4\4\4QUIZ GAME\4\4\4\4\4\n\n");
    printf("\t\t    :::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t   ::                                   ::\n");
    printf("\t\t  ::                                     ::\n");
    printf("\t\t ::         Welcome To QUIZ GAME          ::\n");
    printf("\t\t  ::                                     ::\n");
    printf("\t\t   ::                                   ::\n");
    printf("\t\t    :::::::::::::::::::::::::::::::::::::\n");
    system("COLOR 70");
    printf("\n\t\t    * Press S to Start The Quiz Game");
    printf("\n\t\t    * Press V to View The Highest Score  ");
    printf("\n\t\t    * Press R to Reset Score");
    printf("\n\t\t    * press H for Help");
    printf("\n\t\t    * press Q to Quit");
    printf("\n\t\t_____________________________________________\n\n");
    choice=toupper(getch());
    if (choice=='V')
    {
        show_record();
        goto mainhome;
    }
    else if (choice=='H')
    {
        help();
        getch();

        if (toupper(getch())=='Y')
        {
            goto mainhome;
        }
        else
        {
            printf("\nYou Chose LogOut");
            exit(1);
        }
        }
    else if (choice=='R')
    {
        reset_score();
        getch();
        goto mainhome;
    }
    else if (choice=='Q')
    {
        printf("\n\n\t\t\t    YOU CHOOSE QUITE\n\t\t\tTHANKS FOR BBEING WITH US\n\n\n");
        exit(1);
    }
    else if(choice=='S')
    {
        system("cls");

        printf("\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n\t\t Welcome '%s' to My Quiz Game ",playername);
        printf("\n ------------------------------------------------------------------------------");
        printf("\n\n\n Press Y  to start the game!");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch())=='Y')
        {
            goto game;

        }
        else
        {
            goto mainhome;
        }
    }
    else
    {
        printf("\n\t\tWrong Input !!!! \n\t\tWant to try again??? \n\t\tInput correct Letter: ");
        goto go;
    }
game:
    for(i=1; i<=15; i++)
    {
        system("cls");
        r=i;

        switch(r)
        {
        case 1:
            printf("\n\nWhat is the National Game of Bangladesh?");
            printf("\n\nA.Football\t\tB.Basketball\n\nC.Hadudu\t\tD.Baseball");
            if (toupper(getch())=='C')
                //if(getch()=='C' || getch()=='c')
            {
                printf("\n\nCorrect!!!");
                money=1000;
                //printf("\nYou Won Taka %d",money);
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Hadudu");
                getch();
                goto score;
                break;
            }

        case 2:
            printf("\n\n\nWhich is the least populated country in the world");
            printf("\n\nA.Vatican City \t\tB.Nepal\n\nC.Canada\t\tD.Bangladesh");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=2000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Vatican City ");
                getch();
                goto score;
                break;
            }

        case 3:
            printf("\n\n\nWhich is the longest river on the earth?");
            printf("\n\nA.Jamuna\t\tB.Ganga\n\nC.Nile\t\tD.Padma");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                money=5000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Nile");
                getch();
                goto score;
                break;
            }

        case 4:
            printf("\n\n\nWhat is the next prime number after (3)?");
            printf("\n\nA.5\t\tB.7\n\nC.11\t\tD.13");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=10000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.5");
                getch();
                goto score;
                break;
            }

        case 5:
            printf("\n\n\nWhat is the square root of (81)?");
            printf("\n\nA.07\t\tB.9\n\nC.11\t\tD.91");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");

                money=20000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.9");
                getch();
                goto score;
                break;
            }

        case 6:
            printf("\n\n\nIs (-2) an integer?");
            printf("\n\nA.no\t\tB.yes\n\nC.may be\t\tD.none of them");
            if (toupper(getch())=='B' )
            {
                printf("\n\nCorrect!!!");

                money=50000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.yes");
                goto score;
                getch();
                break;
            }

        case 7:
            printf("\n\n\nWhat is the national flower of Bangladesh?");
            printf("\n\nA.Sunflower\t\tB.Tulip\n\nC.Rose\t\tD.Water lily");
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");

                money=100000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Water lily");
                getch();
                goto score;
                break;
            }

        case 8:
            printf("\n\n\nWhat is the main religion practiced in Bangladesh?");
            printf("\n\nA.Buddism\t\tB.Islam\n\nC.Hinduism\t\tD.Christian");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");

                money=200000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Islam");
                getch();
                goto score;
                break;
            }

        case 9:
            printf("\n\n\nOn which continent is Bangladesh located?");
            printf("\n\nA.Asia\t\tB.Africa\n\nC.Europe\t\tD.North America");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=500000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Asia");
                getch();
                goto score;
                break;
            }

        case 10:
            printf("\n\n\nWhere is Bangladesh located?");
            printf("\n\nA.Southeast Asia\t\tB.Northeastern Asia\n\nC.Central Asia\t\tD.Southern Asia");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=1000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Southeast Asia");
                getch();
                break;
                goto score;
            }

        case 11:
            printf("\n\n\nWhat kind of climate does Bangladesh have?");
            printf("\n\nA.Arid\t\tB.Temperate\n\nC.Tropical\t\tD.Sub-arctic");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                money=2000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Tropical");
                getch();
                break;
                goto score;
            }

        case 12:
            printf("\n\n\nWhat is the main food of Bangladesh?");
            printf("\n\nA.Rice\t\tB.Potato\n\nC.French fries\t\tD.Butter Tarts");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=5000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Rice");
                getch();
                break;
                goto score;
            }

        case 13:
            printf("\n\n\nName the country where there no mosquitoes are found?");
            printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                money=10000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.France");
                getch();
                break;
                goto score;
            }

        case 14:
            printf("\n\nWhat is the capital of Bangladesh?");
            printf("\n\nA.Dhaka\t\tB.Barisal\n\nC.Rangpur\t\tD.Narayangonj");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                money=20000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Dhaka");
                getch();
                break;
            }

        case 15:
            printf("\n\n\nHow was Bangladesh known when it was part of Pakistan?");
            printf("\n\nA.Baluchistan\t\tB.East Pakistan\n\nC.West Pakistan\t\tD.Bangla Pakistan");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                money=50000000;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.East Pakistan");
                getch();
                break;
            }

            /*case 16:
            printf("\n\n\nWhen did Bangladesh become an independent country?");
            printf("\n\nA.1969\t\tB.1970\n\nC.1971\t\tD.1988");
            if (toupper(getch())=='C')
            	{
            	    printf("\n\nCorrect!!!");
            	count++;
            	getch();
            	break;
            	}
            else
                   {printf("\n\nWrong!!! The correct answer is C.1971");
                   getch();
                   break;
                   }

            case 17:
            printf("\n\n\nThe country famous for Samba Dance is........");
            printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
            if (toupper(getch())=='A')
            	{
            	    printf("\n\nCorrect!!!");
            	    countr++;
            	    getch();
            	break;
            	}
            else
                   {
                       printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
                   break;
                   }

            case 18:
              printf("\n\n\nWhich is the second country to recognize Bangladesh?");
            printf("\n\nA.Nepal\t\tB.Bhutan\n\nC.India\t\tD.China");
            if (toupper(getch())=='B')
                   {
                       printf("\n\nCorrect!!!");
                   count++;
                   getch();
                    break;
                    }
            else
                   {
                       printf("\n\nWrong!!! The correct answer is B.Bhutan");
                   getch();
                   break;
                   }

            case 19:
            printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
            printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
            if (toupper(getch())=='C')
            	{
            	    printf("\n\nCorrect!!!");
            	countr++;
            	getch();
            	break;
            	}
            else
                   {
                       printf("\n\nWrong!!! The correct answer is C.Kathmandu");
                       getch();
                       goto score;
                   break;
                   }

            case 20:
            printf("\n\n\nWhich is the heavier metal of these fore?");
            printf("\n\nA.Silver\t\tB.Gold\n\nC.Hydrogen\t\tD.Helium");
            if (toupper(getch())=='B')
            	{
            	    printf("\n\nCorrect!!!");
            	count++;
            	getch();
            	 break;
            	 }
            else
                   {
                       printf("\n\nWrong!!! The correct answer is B.Gold");
                   getch();
                   break;
                   }


            case 21:
            printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
            printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
            if (toupper(getch())=='D')
            	{
            	    printf("\n\nCorrect!!!");countr++; getch();
            	break;
            	}
            else
                   {
                       printf("\n\nWrong!!! The correct answer is D. C.F.C");
                       getch();
                       goto score;
                   break;
                   }

            case 22:
            printf("\n\n\nWhich is the animal referred as the ship of the desert? ");
            printf("\n\nA.Chuckwalla\t\tB.Rattel snake\n\nC.Got\t\tD.Camel");
            if (toupper(getch())=='D' )
            	{
            	    printf("\n\nCorrect!!!");
            	count++;
            	getch();
            	break;
            	}
            else
                   {
                       printf("\n\nWrong!!! The correct answer is D.Camel");
                   getch();
                   break;}

            case 23:
            printf("\n\n\nThe oldest game in the world is___.");
            printf("\n\nA.football\t\tB.Baseball\n\nC.Polo\t\tD.Boxing");
            if (toupper(getch())=='C')
            	{
            	    printf("\n\nCorrect!!!");
            	    countr++;
            	    getch();
            	    break;
            	}
            else
                   {
                       printf("\n\nWrong!!! The correct answer is C.Polo");
                   getch();
                   goto score;
                   break;
                   } */
        }
    }
score:
    system("cls");
    score=money;
    //score=(int)countr*1000;
    if(score==50000000)
    {
        printf("\n\n\n \t\t**************** CONGRATULATION ****************");
        printf("\n\t\t\t\t YOU WON TAKA %d",score);
        printf("\n\t\t\t\t YOU ARE NOW SO RICH!!!!!!!!!");
        //printf("\n\t\t You won $%d",score);
        printf("\n\t\t\t\t Thank You %s!!",playername);
    }
    else if(score>100 && score<50000000)
    {
        printf("\n\n\t\t*****CONGRATULATION*****");
        printf("\n\n\t You won $%d\n",score);
        printf("\n\tThanks for your participation '%s' .Try better next time\n\n",playername);
        goto go;
    }
    else
    {
        printf("\n\n\tSORRY '%s' YOU FAILED THIS TIME.",playername);
        printf("\n\n\tThanks for your participation.Try better next time");
        goto go;
    }
go:
    puts("\n\nPress Y to go main menu");
    //puts(" Press any key to go main menu");
    if (toupper(getch())=='Y')
    {
        edit_score(score,playername);
        goto mainhome;
    }
    else
    {
        printf("\n\n\t\tYou choose EXIT\n\n");
        exit(1);
        //goto mainhome;
    }
}



void help()
{
    system("cls");
    system("COLOR 07");
    printf("\n\n\t\t\t\t\tHELP");
    printf("\n ------------------------------------------------------------------------------");
    printf("\n ..........................Welcome to HELP section.............................\n\n");
    printf("\nYou will get some help here related to this Quiz Game...\nHere You will be asked for 15 Questions.\nValue of each Question Will be Double for Next Question.\nAnd the 15th Questions value will be 50000000.\nSo Get Ready To Win Money. . .");
    printf("\n\tSo without more expect try yourself");
    printf("\n\nPress Y to go Main Menu..");
   // goto go;



    //printf("\n\n\n\n\n\n\n\n\n\n********************Quiz Game Developed by(162-35-1619)**********************");
}

