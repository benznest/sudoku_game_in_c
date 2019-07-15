#include "Colour.h"
int menu4(int point,char name[]){
    int i;
    
    system("cls");
    printf("\n\n\n\t");
  for(i=0;i<57;i++){printf("#");
}
printf("\n\t#");
for(i=0;i<55;i++){
  printf(" ");
}
printf("#\n");
  printf("\t#");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("    |||||  ||   ||  |||||     ||||||  ||  ||  ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("   ||      ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("     ||    ||   ||  ||   ||  ||    || |||     ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("       ||  ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("   |||||    |||||   |||||     ||||||  ||  ||   |||||   ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n");
  printf("\t#");
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("                                   STAGE 4             ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n\t");
  for(i=0;i<57;i++){
  printf("#");}
    printf("\n\n\n\t\t\t");
    textcolor(COLOR_GREEN,COLOR_BLACK);printf("Loading !!");
    for(i=0;i<10;i++){
  printf("...");
  sleep(500);
 
  }
     resetcolor();
    
    

    
   point = mission4(point,name);
    return point;
    }
