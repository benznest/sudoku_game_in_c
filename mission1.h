
#include "Colour.h"


int *ptr_time1;
int mission1(int point,char name[]){
    


       char ans[10][10];
       int j,m,countinput=0;
       int row=1,column;
       int x,countError=0;
       int status =0;
       
  time_t start,end;
time_t start2,end2;
  double dif,dif2=0,dif3=0;

  time (&start);
  
  
       
       
  system("cls");
  fflush(stdin);     

       ans[1][3]='_';
       ans[1][4]='_';
       ans[2][5]='_';
       ans[3][1]='_';
       ans[3][9]='_';
       ans[4][3]='_';
       ans[4][4]='_';
       ans[4][6]='_';
       ans[5][2]='_';
       ans[5][3]='_';
       ans[5][5]='_';
       ans[5][9]='_';
       ans[6][2]='_';
       ans[6][3]='_';
       ans[6][4]='_';
       ans[6][7]='_';
       ans[6][8]='_';
       ans[7][1]='_';
       ans[7][3]='_';
       ans[7][9]='_';
       ans[8][1]='_';
       ans[8][8]='_';
       ans[9][1]='_';
       ans[9][4]='_';
       ans[9][5]='_';
        printf("\tName : %s   ",name); 
        printf("\tScore : %d",point);
        
       
        printf("\tNumber of times : %d\n",countinput); 
        
    printf("\n\t\t     1  2  3     4  5  6     7  8  9\n");
    printf("\n\t\t  -------------------------------------\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t1#|  5  3  ");  
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[1][3]);resetcolor();printf("  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[1][4]);resetcolor();  printf("  7  8  |  9  1  2  |\n");
      printf("\t\t2#|  6  7  2  |  1  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[2][5]);resetcolor();
      printf("  5  |  3  4  8  |\n");
      printf("\t\t3#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[3][1]);resetcolor();printf("  9  8  |  3  4  2  |  5  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[3][9]);resetcolor();printf("  |\n");
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t4#|  8  5  ");textcolor(COLOR_RED,COLOR_BLACK);
      printf("%c",ans[4][3]);resetcolor();
      printf("  |  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[4][4]);resetcolor();
      printf("  6  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[4][6]);resetcolor();
      printf("  |  4  2  3  |\n");
      printf("\t\t5#|  4  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[5][2],ans[5][3]);resetcolor();printf("  |  8  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[5][5]);resetcolor();printf("  3  |  7  9  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[5][9]);resetcolor();printf("  |\n");
      printf("\t\t6#|  7  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[6][2],ans[6][3]);resetcolor();
      printf("  |  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[6][4]);resetcolor();printf("  2  4  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[6][7],ans[6][8]);resetcolor();printf("  6  |\n");
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t7#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][1]);resetcolor();printf("  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][3]);resetcolor();printf("  |  5  3  7  |  2  8  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][9]);resetcolor();printf("  |\n");
      printf("\t\t8#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[8][1]);resetcolor();printf("  8  7  |  4  1  9  |  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[8][8]);resetcolor();printf("  5  |\n");
      printf("\t\t9#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[9][1]);resetcolor();printf("  4  5  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[9][4],ans[9][5]);resetcolor();printf("  6  |  1  7  9  |\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t  -------------------------------------\n\n");
     
    while(status==0){ 
                      time(&start2);
countError=0;
do {
  if(countError>0){
                   printf("\tinput row and colum 1-9 only.Please Try again.\n");
          } 
     do{   
                      
                            
 printf("\n\t\t# Row :  ");
 scanf("%d",&row);
fflush(stdin);  


 printf("\t\t# Column :  ");
scanf("%d",&column);    
fflush(stdin);  
 
  if(ans[row][column] == '\0'){
          printf("\tinput row or Column in the red only.\n"); 
                   }
  } while(ans[row][column] == '\0');            
 printf("\t\t# input (1-9) and 0 back to menu :  ");
scanf("%d",&x); 
fflush(stdin);  

 countError++;
 countinput++;  
}while(row<1||row>9||column<1||column>9);


 
 if(ans[row][column] != '\0') {
 if(x==1){
      ans[row][column] = '1';  
     }      
else if(x==2) {
      ans[row][column] = '2'; 
     }
else if(x==3) {
      ans[row][column] = '3'; 
     }
else if(x==4) {
      ans[row][column] = '4'; 
     }
else if(x==5) {
      ans[row][column] = '5'; 
     }
else if(x==6) {
      ans[row][column] = '6'; 
      }
else if(x==7) {
      ans[row][column] = '7'; 
     }
else if(x==8) {
      ans[row][column] = '8'; 
     }
else if(x==9) {
      ans[row][column] = '9'; 
     }
else if(x==0) {
      break; 
     }   
    
           
else {
     printf("\nPlease , Input 1-9 Only");
     }
}

system("cls");
 printf("\tName : %s",name); 
 printf("\tScore : %d",point); 
 printf("\tNumber of times : %d\n",countinput);
 
 time (&end2);
 dif2 = dif2+difftime(end2,start2);
 
 if(dif2 >= 60){
       dif3 =dif2/60;
printf("\n\tTime = %.2lf  Min.  " ,dif3);
                 }

                 else{
printf("\n\tTime = %.0lf  sec.  " ,dif2);
                 }
 
 

  printf("\n\t\t     1  2  3     4  5  6     7  8  9\n");
    printf("\t\t  -------------------------------------\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t1#|  5  3  ");  
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[1][3]);resetcolor();printf("  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[1][4]);resetcolor();  printf("  7  8  |  9  1  2  |\n");
      printf("\t\t2#|  6  7  2  |  1  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[2][5]);resetcolor();
      printf("  5  |  3  4  8  |\n");
      printf("\t\t3#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[3][1]);resetcolor();printf("  9  8  |  3  4  2  |  5  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[3][9]);resetcolor();printf("  |\n");
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t4#|  8  5  ");textcolor(COLOR_RED,COLOR_BLACK);
      printf("%c",ans[4][3]);resetcolor();
      printf("  |  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[4][4]);resetcolor();
      printf("  6  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[4][6]);resetcolor();
      printf("  |  4  2  3  |\n");
      printf("\t\t5#|  4  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[5][2],ans[5][3]);resetcolor();printf("  |  8  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[5][5]);resetcolor();printf("  3  |  7  9  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[5][9]);resetcolor();printf("  |\n");
      printf("\t\t6#|  7  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[6][2],ans[6][3]);resetcolor();
      printf("  |  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[6][4]);resetcolor();printf("  2  4  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[6][7],ans[6][8]);resetcolor();printf("  6  |\n");
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t7#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][1]);resetcolor();printf("  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][3]);resetcolor();printf("  |  5  3  7  |  2  8  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[7][9]);resetcolor();printf("  |\n");
      printf("\t\t8#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[8][1]);resetcolor();printf("  8  7  |  4  1  9  |  6  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[8][8]);resetcolor();printf("  5  |\n");
      printf("\t\t9#|  ");textcolor(COLOR_RED,COLOR_BLACK);printf("%c",ans[9][1]);resetcolor();printf("  4  5  |  ");
      textcolor(COLOR_RED,COLOR_BLACK);printf("%c  %c",ans[9][4],ans[9][5]);resetcolor();printf("  6  |  1  7  9  |\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t  -------------------------------------\n\n");
      
     if(ans[1][3]=='4'&&ans[1][4]=='6'&&ans[2][5]=='9'&&ans[3][1]=='1'&&ans[3][9]=='7'&&ans[4][3]=='9'
      &&ans[4][4]=='7'&&ans[4][6]=='1'&&ans[5][2]=='2'&&ans[5][3]=='6'&&ans[5][5]=='5'&&ans[5][9]=='1'
      &&ans[6][2]=='1'&&ans[6][3]=='3'&&ans[6][4]=='9'&&ans[6][7]=='8'&&ans[6][8]=='5'&&ans[7][1]=='9'
      &&ans[7][3]=='1'&&ans[7][9]=='4'&&ans[8][1]=='2'&&ans[8][8]=='3'&&ans[9][1]=='3'&&ans[9][4]=='2'
      &&ans[9][5]=='8'){
                                               point= point+100;
                                               status=1;    
       }
       else if(ans[1][3]!='_'&&ans[1][4]!='_'&&ans[2][5]!='_'&&ans[3][1]!='_'&&ans[3][9]!='_'&&ans[4][3]!='_'
      &&ans[4][4]!='_'&&ans[4][6]!='_'&&ans[5][2]!='_'&&ans[5][3]!='_'&&ans[5][5]!='_'&&ans[5][9]!='_'
      &&ans[6][2]!='_'&&ans[6][3]!='_'&&ans[6][4]!='_'&&ans[6][7]!='_'&&ans[6][8]!='_'&&ans[7][1]!='_'
      &&ans[7][3]!='_'&&ans[7][9]!='_'&&ans[8][1]!='_'&&ans[8][8]!='_'&&ans[9][1]!='_'&&ans[9][4]!='_'
      &&ans[9][5]!='_'){
                           printf("\n\t Wrong !! try check again..");
                           getch();
                           }
      
      /**/
      
      
      }
      



time (&end);
dif = difftime (end,start);

if(status==1){
              system("cls");
              printf("\n\n\t\t Congratulations !!");
              printf("\n\t\t Point +100");
              printf("\tYou Point : %d  ",point);
              
              if(dif >= 60){
       dif =dif/60;
printf("\n\ttime = %.2f  Min.  " ,dif);

                 }

                 else{
printf("\n\ttime = %.2f  sec.  " ,dif);
dif =dif/60;
                 }
                 
                 fsave1(dif,name);
                 getch();
                 return point;
}


else{
     
     printf("\tYou Point : %d  ",point);
                 if(dif >= 60){
            dif =dif/60;
printf("\n\ttime = %.2f  Min.  " ,dif);
                 }

                 else{
printf("\n\ttime = %.2f  sec.  " ,dif);

                 }
     }                 
           
           
           
getch();

    return point;
    }
    
    
