int menumission1(int point,char name[]){


int i;
char play='9';
char menustage='1';
int statusstage=1;


while(play!=13){
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

printf("\t\t\t   ");
textcolor(COLOR_WHITE,COLOR_AQUA);
 printf("       Stage 1        \n");resetcolor();
  textcolor(12,COLOR_BLACK);printf("\t\t\t           Stage 2\n");
  printf("\t\t\t           Stage 3 \n");
  printf("\t\t\t");
  printf("           Stage 4        \n");
  printf("\t\t\t           Stage 5        \n");
  printf("\t\t\t           Back        ");resetcolor();
do{
play=getch();

if(play==72&&statusstage==1){
statusstage = menustage_e();
statusstage=0;
            }
else if(play==80&&statusstage==1){
statusstage = menustage2(); 
statusstage=2;
}
else if(play==72&&statusstage==2){
statusstage = menustage1();  
statusstage=1;                   
}
else if(play==80&&statusstage==2){
statusstage = menustage3();   
statusstage=3;                  
}
else if(play==72&&statusstage==3){
statusstage = menustage2();     
statusstage=2;                
}
else if(play==80&&statusstage==3){
statusstage = menustage4();  
statusstage=4;
} 
else if(play==72&&statusstage==4){
statusstage = menustage3();    
statusstage=3;                 
}
else if(play==80&&statusstage==4){
statusstage = menustage5(); 
statusstage=5;  
}
else if(play==72&&statusstage==5){
statusstage = menustage4();    
statusstage=3;                 
}
else if(play==80&&statusstage==5){
statusstage = menustage_e();   
statusstage=0;
}
else if(play==72&&statusstage==0){
        statusstage = menustage5();    
statusstage=5;     
}
else if(play==80&&statusstage==0){
statusstage = menustage1();
statusstage=1;  
}


}while(play!=13);



if(statusstage==1){
point = menu1(point,name);
statusstage=1;
play='a';
}
else if(statusstage==2){
point = menu2(point,name);
statusstage=1;
play='a';
}
else if(statusstage==3){
point = menu3(point,name);
statusstage=1;
play='a';
     }
else if(statusstage==4){
point = menu4(point,name);
statusstage=1;
play='a';
     }
else if(statusstage==5){
point = menu5(point,name);
statusstage=1;
play='a';
     }
else if(statusstage==0){
main();
     }
     
}

return 0;

    }
