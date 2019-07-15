int mission1(){
    
       char ans[10][10];
       int j;
       int row=1,column;
       int x,countError=0;
       int status =0,point=0;

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
       
       
    printf("\n\t\t     1  2  3     4  5  6     7  8  9\n");
    printf("\n\t\t  -------------------------------------\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t1#|  5  3  %c  |  %c  7  8  |  9  1  2  |\n",ans[1][3],ans[1][4]);
      printf("\t\t2#|  6  7  2  |  1  %c  5  |  3  4  8  |\n",ans[2][5]);
      printf("\t\t3#|  %c  9  8  |  3  4  2  |  5  6  %c  |\n",ans[3][1],ans[3][9]);
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t4#|  8  5  %c  |  %c  6  %c  |  4  2  3  |\n",ans[4][3],ans[4][4],ans[4][6]);
      printf("\t\t5#|  4  %c  %c  |  8  %c  3  |  7  9  %c  |\n",ans[5][2],ans[5][3],ans[5][4],ans[5][5]);
      printf("\t\t6#|  7  %c  %c  |  %c  2  4  |  %c  %c  6  |\n",ans[6][2],ans[6][3],ans[6][4],ans[6][7],ans[6][8]);
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t7#|  %c  6  %c  |  5  3  7  |  2  8  %c  |\n",ans[7][1],ans[7][3],ans[7][9]);
      printf("\t\t8#|  %c  8  7  |  4  1  9  |  6  %c  5  |\n",ans[8][1],ans[8][8]);
      printf("\t\t9#|  %c  4  5  |  %c  %c  6  |  1  7  9  |\n",ans[9][1],ans[9][4],ans[9][5]);
      printf("\t\t  |                                   |\n");
      printf("\t\t  -------------------------------------\n\n");
     
    while(status==0){ 
countError=0;
do {
  if(countError>0){
                   
          printf("\tinput row and colum 1-9 only.Please Try again.\n");}                          
 printf("\n\t\t# Row :  ");
 scanf("%d",&row);
 printf("\t\t# Column :  ");
 scanf("%d",&column);       
 printf("\t\t# input (1-9) :  ");
 scanf("%d",&x);   
 countError++;  
}while(row<1||row>9||column<1||column>9);

 if(ans[row][column] == '\0'){
          printf("\tinput row or Column visible only.\n"); 
          getch();
                   }
 else {
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
 printf("\n\t\t     1  2  3     4  5  6     7  8  9\n");
    printf("\n\t\t  -------------------------------------\n");
      printf("\t\t  |                                   |\n");
      printf("\t\t1#|  5  3  %c  |  %c  7  8  |  9  1  2  |\n",ans[1][3],ans[1][4]);
      printf("\t\t2#|  6  7  2  |  1  %c  5  |  3  4  8  |\n",ans[2][5]);
      printf("\t\t3#|  %c  9  8  |  3  4  2  |  5  6  %c  |\n",ans[3][1],ans[3][9]);
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t4#|  8  5  %c  |  %c  6  %c  |  4  2  3  |\n",ans[4][3],ans[4][4],ans[4][6]);
      printf("\t\t5#|  4  %c  %c  |  8  %c  3  |  7  9  %c  |\n",ans[5][2],ans[5][3],ans[5][4],ans[5][5]);
      printf("\t\t6#|  7  %c  %c  |  %c  2  4  |  %c  %c  6  |\n",ans[6][2],ans[6][3],ans[6][4],ans[6][7],ans[6][8]);
      printf("\t\t  |-----------+-----------+-----------|\n");
      printf("\t\t7#|  %c  6  %c  |  5  3  7  |  2  8  %c  |\n",ans[7][1],ans[7][3],ans[7][9]);
      printf("\t\t8#|  %c  8  7  |  4  1  9  |  6  %c  5  |\n",ans[8][1],ans[8][8]);
      printf("\t\t9#|  %c  4  5  |  %c  %c  6  |  1  7  9  |\n",ans[9][1],ans[9][4],ans[9][5]);
      printf("\t\t  |                                   |\n");
      printf("\t\t  -------------------------------------\n\n");
      
     if(ans[1][3]='4'&&ans[1][4]='6'&&ans[2][5]='9'&&ans[3][1]='1'&&ans[3][9]='7'&&ans[4][3]='9'&&ans[4][4]='7'&&ans[4][6]='1'&&ans[5][2]='2'&&ans[5][3]='6'&&ans[5][5]='5'&&ans[5][9]='1'&&ans[6][2]='1'&&ans[6][3]='3'&&ans[6][4]='9'&&ans[6][7]='8'&&ans[6][8]='5'&&ans[7][1]='9'&&ans[7][3]='1'&&ans[7][9]='4'&&ans[8][1]='2'&&ans[8][8]='3'&&ans[9][1]='3'&&ans[9][4]='2'&&ans[9][5]='8'){
                                               point++;                     
                                                                    }
      
      
      
      
      }
      

printf("You Point : %d  ",point);
getch();
    return point;
    }
    
    
