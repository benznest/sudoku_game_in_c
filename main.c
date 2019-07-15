#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include "menu1.h"
#include "menu2.h"
#include "menu3.h"
#include "menu4.h"
#include "menu5.h"
#include "mission1.h"
#include "mission2.h"
#include "mission3.h"
#include "mission4.h"
#include "mission5.h"
#include "fsave.h"
#include "Colour.h"
#include "menumain_p.h"
#include "menumain_h.h"
#include "menumain_s.h"
#include "menumain_e.h"
#include "howtoplay.h"
#include "menumission1.h"
#include "menustage1.h"
#include "menustage2.h"
#include "menustage3.h"
#include "menustage4.h"
#include "menustage5.h"
#include "menustage_e.h"
#include "nameplayer.h"
#include "stat.h"

/*Include Header file all*/

char name[40];


int main(){
 
int i,point=0,j=0;
char play='9';
char mainstatus='p'; 
/* locate menu First Interphase 'p' = play*/

while(play!=13){
        system("cls");        
  printf("\n\n\n\t");
  for(i=0;i<57;i++){
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#");resetcolor();
}
textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\n\t#");resetcolor();
for(i=0;i<55;i++){
  printf(" ");
}
textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();


  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("    |||||  ||   ||  |||||     ||||||  ||  ||  ||   ||  ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("   ||      ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("     ||    ||   ||  ||   ||  ||    || |||     ||   ||  ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("       ||  ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("   |||||    |||||   |||||     ||||||  ||  ||   |||||   ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  
  
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("                                                       #\n");resetcolor();
  
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("          |||||    |||||   |||     |||  ||||||         ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("         ||       ||   ||  || || || ||  ||             ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("         || ||||  |||||||  ||  |||  ||  ||||||         ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("         ||   ||  ||   ||  ||       ||  ||             ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");resetcolor();
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("          |||||   ||   ||  ||       ||  ||||||         ");resetcolor();
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#\n");resetcolor();
  
  
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t#");
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("                                                       #\n\t");resetcolor();
  
  for(i=0;i<57;i++){
  textcolor(COLOR_YELLOW,COLOR_BLACK);printf("#");resetcolor();;}
  

/* Print Cover sodoku game */
printf("\n\n");

printf("\t\t\t   ");
textcolor(COLOR_WHITE,COLOR_AQUA);
 printf("        Play game        \n");resetcolor();
  textcolor(COLOR_DARKGREEN,COLOR_BLACK);printf("\t\t\t          How to play\n");
  printf("\t\t\t          High scores\n");
  printf("\t\t\t");
  printf("             Exit        ");resetcolor();
  
do{
play=getch();

/* p = Play Game 
h = How to play
s = High score or Statistics
e = Exit

72 is ascii up
80 is ascii down*/

if(play==72&&mainstatus=='p'){
mainstatus = menumaine(mainstatus);
            }
else if(play==80&&mainstatus=='p'){
mainstatus = menumainh(mainstatus); 
}
else if(play==72&&mainstatus=='h'){
mainstatus = menumainp(mainstatus);                     
}
else if(play==80&&mainstatus=='h'){
mainstatus = menumains(mainstatus);                     
}
else if(play==72&&mainstatus=='s'){
mainstatus = menumainh(mainstatus);                     
}
else if(play==80&&mainstatus=='s'){
mainstatus = menumaine(mainstatus);  
} 
else if(play==72&&mainstatus=='e'){
mainstatus = menumains(mainstatus);                     
}
else if(play==80&&mainstatus=='e'){
mainstatus = menumainp(mainstatus);   
}

}while(play!=13);

/* check ascii and status menu before player press Enter*/

if(mainstatus=='p'){
                    if(j==0){
name[40] = nameplayer();
j++;}

menumission1(point,name);

mainstatus=='p';
play='a';
}
else if(mainstatus=='h'){ 
     howtoplay();
     mainstatus=='p';
     play='a';
}
else if(mainstatus=='s'){
     stat();
      play='a';
      mainstatus=='p';
     }
else if(mainstatus=='e'){
      play='a';
     exit(1);
     }
     
}

return 0;
}
