#include<windows.h>

#include"mmsystem.h"

#include<stdio.h>

#include<conio.h>

#include<ctype.h>

#include<stdlib.h>

#include<string.h>

#include<iostream>

#include<fstream>

using namespace std;

void show_record();

void reset_score();

void help();

void edit_score(float,char[]);

int main()

{
system("COLOR 1F");
PlaySound(TEXT("Welcome.wav"),NULL,SND_SYNC);
printf("\n\n\t\t\t\t<< QUIZ GAME >>\n");

printf("\n\n\t\tGroup Members : \n\n");

printf("\n\t\tMUHAMMAD AHSAN\t(50201)\n\t\tQUBA QAMAR\t(45867)\n\t\tUNAIZA FAISAL\t(47351)\n\t\tSADIA SHAMIM\t(47211)\n\t\tDUA AWAN\t(44187)\n");

printf("\n\t\t****************************************\n\n\t\tFaculty of Engineering, Sciences and Technology,\n\t\t\t\tIQRA University\n\n\n\t\t\t\t\t\tSubmitted to Sir Anees Ahmed\n");
PlaySound(TEXT("into.wav"),NULL,SND_SYNC);
getch();
system("cls");
system("COLOR F2");
int countr,r,r1,count,i,n;
HWND consoleWindow = GetConsoleWindow(); 
    ShowWindow(consoleWindow, SW_MAXIMIZE); 
float score;

char choice;

char playername[20];
string name;

string password;

mainhome:
system("COLOR 1F");
printf("\n\t\t\t       << QUIZ GAME >>\n");
printf("                             The Trivial Quest                                  \n");

printf("\n\t\t****************************************");



printf("\n\t\t WELCOME\t to\t  QUIZ GAME ");
printf("\n");

printf("\t\t****************************************\n");

printf("\n\t\t ANSWER CORRECTLY TO EARN UPTO 1 MILLION \n ");

printf("\t\t_________________________________________");

PlaySound(TEXT("option.wav"),NULL,SND_SYNC);

printf("\n\n\t\t > Press S to start the game\n");

printf("\n\t\t > Press V to view the Highest Score\n");

printf("\n\t\t > Press R to Reset Score\n");

printf("\n\t\t > press H for Help \n");

printf("\n\t\t > press Q to Quit \n");

printf("\t\t________________________________________\n\n\t\t\t");

choice=toupper(getch());



if(choice=='V')

{

system("cls");

show_record();

system("cls");

goto mainhome;

}



else if(choice=='H')

{

system("cls");

help();

getch();

system("cls");

goto mainhome;

}



else if(choice=='R')

{

system("cls");

reset_score();

getch();

goto mainhome;

}



else if (choice=='Q')

{

exit(1);

} 



else if(choice=='S')

{
	int i,j;
	char ch=177;

 printf("loading...");

 for(i=1;i<=20;i++)
 {
	 Sleep(100);
	 system(" color f0");
	 printf("%c",ch);
}


system("cls");

printf("\t\t\tEnter Access Key :\t");
              for(i=0;i<6;i++)
              {
              ch = getch();
              password[i] = ch;
              ch = '*' ;
               printf("%c",ch);
              }
            

system("cls");
system("COLOR FC");
printf("\n\nRegistration: ");
printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: ");
fstream f;
f.open("data.txt",ios::app);
gets(playername);
printf("\n\n\t\t\tEnter your password: ");
cin>>password;
f<<name<<" "<<password<<endl;
f.close();

system("cls");
system(" color f9");
printf("\n        *********** Welcome %s to C Program Quiz Game *****************\n",playername);



printf("\n\n> There are Two rounds in this Quiz Game,\n\n(1) WARMUP ROUND \n\n(2) CHALLANGE ROUND");

printf("\n\n> In warmup round you will be asked a total of 3 questions.You are eligible \nto play the game if you give atleast 2 \n\n");


printf("\n\n> Your game starts with CHALLANGE ROUND. In this round you will be asked\n total of 10 questions. \n\n");

printf("\n\n> You will be given 4 options and you have to press A, B ,C or D \nfor the right option.");

printf("\n\n\t____________________ALL THE BEST ______________________");

printf("\n\n\n Press Y to start the game!\n");

printf("\n Press any other key to return to the main menu!");



if (toupper(getch())=='Y')

{

system("cls");
system("COLOR FC");
goto home;


}



else

{

system("cls");

goto mainhome;

}





home:

system("cls");

count=0;





for(i=1;i<=3;i++)

{

r1=i;

switch(r1)

{

case 1:
system("COLOR Fc");
printf("  Guide: Enter the alphabet representing the option according to you is correct \n");
PlaySound(TEXT("warmup.wav"),NULL,SND_SYNC);
printf("\n\nA collecion of 8 bits are called?");

printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");

if (toupper(getch())=='C')

{
system("COLOR Fc");
printf("\n\nCorrect!!!");

count++;

getch();

system("cls");

break;

}





else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is C.byte");

getch();

system("cls");

break;

}

case 2:
system("COLOR Fc");
printf("\n\nWhich year  World War I began?");

printf("\n\nA.1939\t\tB.1946\n\nC.1914\t\tD.1998");

if (toupper(getch())=='C')

{
system("COLOR Fc");
printf("\n\nCorrect!!!");

count++;

getch();

system("cls");

break;

}





else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is C.1914");

getch();

system("cls");

break;

}



system("cls");



case 3:
system("COLOR Fc");
printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");

printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");





if (toupper(getch())=='B')

{
system("COLOR Fc");
printf("\n\nCorrect!!!");

count++;

getch();

system("cls");

break;

}





else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is B.Fortran");

getch();

system("cls");

break;

}

}

}





if(count>=2)

{

PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
PlaySound(TEXT("eligible.wav"),NULL,SND_SYNC);
goto test;

}



else

{

system("cls");
system("COLOR c");

printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
PlaySound(TEXT("uneligible.wav"),NULL,SND_SYNC);
getch();
system("cls");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
goto mainhome;

}



test:

system("cls");
system("COLOR Fc");
printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);

printf("\n\n\n\n\t!Press any key to Start the Game!");

if(toupper(getch())=='p')

{

goto game;

}





game:

countr=0;

for(i=1;i<=10;i++)

{

system("cls");

r=i;



switch(r)

{

case 1:
PlaySound(TEXT("2ROUND.wav"),NULL,SND_SYNC);
printf("\n\nAll are the example of input devices Except a:");

printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");

if (toupper(getch())=='C')

{
system("COLOR Fc");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
printf("\n\nCorrect!!!");countr++;
getch();

break;

getch();

}





else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is C.Printer");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
goto score;
getch();

goto score;

break;

}





case 2:

printf("\n\n\nWhat kind of file extension .mpg?,");

printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");

if (toupper(getch())=='A')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;

}





else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is A.Movie file");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);

getch();

goto score;

break;

}



case 3:

printf("\n\n\nA DVD is an example of a/an.. ");

printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");

if (toupper(getch())=='D')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;

}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is D.Optical disk");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}



case 4:

printf("\n\n\nWho is he founder of facebook?");

printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");

if (toupper(getch())=='A')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;

}



else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}





case 5:

printf("\n\n\nWhich of he following is a web browser?");

printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");

if(toupper(getch())=='B')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}



case 6:

printf("\n\n\nWhat kind of file extension .bak?,");

printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");

if (toupper(getch())=='A')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is A.Backup file");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}



case 7:

printf("\n\n\nwhich of he following is a read only memory storage device ");

printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");

if(toupper(getch())=='D')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is D.CDROM");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}

case 8:

printf("\n\n\nThe _____ shows all the web sites any pages that you have visited one of recent time ");

printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");

if(toupper(getch())=='A')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is A.Hisory list");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}

case 9:

printf("\n\n\nA 32 bit word computer can access ____ bytes at a time ");

printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");

if(toupper(getch())=='C')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is C.8");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}

case 10:

printf("\n\n\nWho is the founder of pixar animation?");

printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");

if(toupper(getch())=='C')

{

printf("\n\nCorrect!!!");
PlaySound(TEXT("clap.wav"),NULL,SND_SYNC);
countr++;

getch();

break;



}

else

{
system("COLOR c");
printf("\n\nWrong!!! The correct answer is C.Steve jobs");
PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
getch();

goto score;

break;

}



}

}





score:



score=(float)countr*100000;

if(score>0.00 && score<1000000)

{

printf("\n\n\t\t**************** CONGRATULATION *****************");

printf("\n\t You won $%.2f",score);
PlaySound(TEXT("clap1.wav"),NULL,SND_SYNC);
getch();
goto go;

}



else if(score==1000000.00)

{

printf("\n\n\n \t\t**************** CONGRATULATION ****************");
PlaySound(TEXT("clap1.wav"),NULL,SND_SYNC);
printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");

printf("\n\t\t\t\t You won $%.2f",score);

printf("\n\t\t\t\t Thank You !!");
getch();
}

else

{
system("COLOR c");
printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");

printf("\n\t\t Thanks for your participation");

printf("\n\t\t TRY AGAIN");
getch();
goto go;

}



go:

puts("\n\n Press Y if you want to play next game");

puts(" Press any key if you want to go main menu");

if (toupper(getchar())=='Y')

{

goto home;

}

else

{

edit_score(score,playername);

goto mainhome;

}

}

}



void show_record()

{



char name[20];

float scr=0;

FILE *f;

f=fopen("score.txt","r");

fscanf(f,"%s%f",&name,&scr);

printf("\n\n\t\t*************************************************************");

printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);

printf("\n\n\t\t*************************************************************");
f=fopen("score.txt","a");






getch();

}



void reset_score()

{

system("cls");

float sc;

char nm[20];

FILE *f;

f=fopen("score.txt","w");
fscanf(f,"%s%f",&nm,&sc);

sc=0;

fprintf(f,"%s,%.2f",nm,sc);

fclose(f);

}



void help()

{

system("cls");

printf("\n\n\t\t\t\t HELP");

printf("\n -------------------------------------------------------------------------");

printf("\n ......................... C program Quiz Game...........");

printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");

printf("\n \n >> In warmup round you will be asked a total of 3 questions to test your general");

printf("\n knowledge. You will be eligible to play the game if you can give atleast 2");

printf("\n right answers otherwise you can't play the Game...........");

printf("\n\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");

printf("\n total 10 questions each right answer will be awarded $100,000.");

printf("\n By this way you can win upto ONE MILLION cash prize in USD...............");

printf("\n \n >> You will be given 4 options and you have to press A, B ,C or D for the");

printf("\n right option");

printf("\n >> You will be asked questions continuously if you keep giving the right answers.");


}



void edit_score(float score, char playernm[20])

{

system("cls");

float sc;

char nm[20];

FILE *f;

f=fopen("score.txt","r");

fscanf(f,"%s%f",&nm,&sc);

if (score>=sc)

{ 

sc=score;

fclose(f);

f=fopen("score.txt","w");

fprintf(f,"%s\n%.2f",playernm,sc); 

fclose(f);

}

}






