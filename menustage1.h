#include "Colour.h"
int menustage1(){
int i,mainstatus;

system("cls");

  printf("\n\n\n\t");
  for(i=0;i<57;i++){
  printf("#");
}
printf("\n\t#");
for(i=0;i<55;i++){
  printf(" ");
}
printf("#\n");

printf("\t#");
  textcolor(10,COLOR_BLACK);printf("    |||||  ||   ||  |||||     ||||||  ||  ||  ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(10,COLOR_BLACK);printf("   ||      ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(10,COLOR_BLACK);printf("     ||    ||   ||  ||   ||  ||    || |||     ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(10,COLOR_BLACK);printf("       ||  ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(10,COLOR_BLACK);printf("   |||||    |||||   |||||     ||||||  ||  ||   |||||   ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n");
  printf("\t#\t");
  textcolor(12,COLOR_BLACK);printf("    |||||    |||||   |||     |||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(12,COLOR_BLACK);printf("   ||       ||   ||  || || || ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(12,COLOR_BLACK);printf("   || ||||  |||||||  ||  |||  ||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(12,COLOR_BLACK);printf("   ||   ||  ||   ||  ||       ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(12,COLOR_BLACK);printf("    |||||   ||   ||  ||       ||  |||||||       ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n\t");
  
  for(i=0;i<57;i++){
  printf("#");}



printf("\n\n");




  printf(" \t\t\t     ");textcolor(COLOR_WHITE,COLOR_AQUA);
  printf("     Stage 1     \n");resetcolor();
  printf("\t\t\t           Stage 2\n");
  printf("\t\t\t           Stage 3\n");
  printf("\t\t\t           Stage 4\n");
  printf("\t\t\t           Stage 5\n");
  printf("\t\t\t           Back \n");
  mainstatus=1;
  
  return mainstatus;
}
