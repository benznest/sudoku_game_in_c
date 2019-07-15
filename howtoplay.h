int howtoplay(){


    int i,point=0;
    
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
  textcolor(COLOR_VIOLET,COLOR_BLACK);printf("                                   How to play         ");resetcolor();printf("#\n");
  printf("\t#                                                       #\n\t");
  for(i=0;i<57;i++){
  printf("#");}
    textcolor(COLOR_AQUA,COLOR_BLACK);printf("\n\n\n\t  The aim of the puzzle is to fill each cell of the grid ");
    printf("\n\twith digits from1 to 9. Each row,column,and subgrid must ");
    printf("\n\tcontain only one instance of each digit. Finish each puzzle");
    printf("\n\t as fast as possible to reach a high score. ");
    
    printf("\n\n\t  The player must enter the number of rows and number of digits. ");
    printf("\n\tThe accuracy of the space before. It will be seen from the red channel. ");
    printf("\n\tThen on the right. It is the answer to the puzzle. If you want to leave"); 
    printf("\n\tthe game.Player just try to wear the number 0 to return to the menu."); 

    
    
    
    
resetcolor();
    printf(" \n\n");
textcolor(COLOR_YELLOW,COLOR_BLACK);printf("\t Press to back menu..");resetcolor();
getch();
system("cls");
 
    return 0;;
    }
