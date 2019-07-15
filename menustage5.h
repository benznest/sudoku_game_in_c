#include "Colour.h"
int menustage5(){
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
  textcolor(13,COLOR_BLACK);printf("    |||||    |||||   |||     |||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(13,COLOR_BLACK);printf("   ||       ||   ||  || || || ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(13,COLOR_BLACK);printf("   || ||||  |||||||  ||  |||  ||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(13,COLOR_BLACK);printf("   ||   ||  ||   ||  ||       ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(13,COLOR_BLACK);printf("    |||||   ||   ||  ||       ||  |||||||       ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n\t");
  
  for(i=0;i<57;i++){
  printf("#");}



printf("\n\n");




printf("\t\t\t           Stage 1\n");
  printf("\t\t\t           Stage 2\n");
   printf("\t\t\t           Stage 3\n");
     printf("\t\t\t           Stage 4\n");
printf(" \t\t\t     ");textcolor(COLOR_WHITE,COLOR_AQUA);
  printf("     Stage 5     \n");resetcolor();

 

  textcolor(14,COLOR_BLACK);printf("\t\t\t           Back \n");resetcolor();
  mainstatus=5;
  
  return mainstatus;
}
