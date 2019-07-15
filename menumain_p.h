int menumainp(char mainstatus){
int i;
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
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("    |||||  ||   ||  |||||     ||||||  ||  ||  ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("   ||      ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("     ||    ||   ||  ||   ||  ||    || |||     ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("       ||  ||   ||  ||   ||  ||    || || ||   ||   ||  ");resetcolor();printf("#\n");
  printf("\t#");
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("   |||||    |||||   |||||     ||||||  ||  ||   |||||   ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n");
  printf("\t#\t");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("    |||||    |||||   |||     |||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("   ||       ||   ||  || || || ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("   || ||||  |||||||  ||  |||  ||  ||||||        ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("   ||   ||  ||   ||  ||       ||  ||            ");resetcolor();printf("#\n");
  printf("\t#\t");
  textcolor(COLOR_CYAN,COLOR_BLACK);printf("    |||||   ||   ||  ||       ||  |||||||       ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n\t");
  
  for(i=0;i<57;i++){
  printf("#");}



printf("\n\n");

printf("\t\t\t");
textcolor(COLOR_WHITE,COLOR_AQUA);
 printf("           Play game        \n");resetcolor();
  textcolor(COLOR_DARKBLUE,COLOR_BLACK);printf("\t\t\t          How to play\n");
  printf("\t\t\t          High scores\n");
  printf("\t\t\t             Exit\n\t\t\t");resetcolor();
  mainstatus='p';
  
  return mainstatus;
}
