int stat(){
    
    FILE *data;
    char name[40];
    double point;
    int pointtime=0;
    float timmer=0;
    int i=0,j=0,countplayer=0;
       
data = fopen("data.txt","r+t"); 
 
system("cls");

         
 printf("\n\n\t\t\t\t #Stage 1 :\n");
while((fscanf(data,"%30s%lf",name,&point)!=EOF)){

printf("\t\t%d )%-30s %.2lf\n",i+1,name,point);
i++;
                 }

fclose(data);

/*Stage2*/
data = fopen("data2.txt","r+t"); 
i=0;


         
 printf("\n\n\t\t\t\t #Stage 2 :\n");
while((fscanf(data,"%30s%lf\n",name,&point)!=EOF)){
              
printf("\t\t%d )%-30s %.2lf\n",i+1,name,point);
 i++;
                 }

fclose(data);


/*Stage 3*/
data = fopen("data3.txt","r+t"); 
i=0;


         
 printf("\n\n\t\t\t\t #Stage 3 :\n");
while((fscanf(data,"%30s%lf\n",name,&point)!=EOF)){
              
printf("\t\t%d )%-30s %.2lf\n",i+1,name,point);
i++;
                 }

fclose(data);
printf("\n\n\t\t\t Press to Continue...");
getch();
system("cls");



/*Stage 4*/

data = fopen("data4.txt","r+t"); 
i=0;


         
 printf("\n\n\t\t\t\t #Stage 4 :\n");
while((fscanf(data,"%s    %lf\n",name,&point)!=EOF)){
                
printf("\t\t%d )%-30s %.2lf\n",i+1,name,point);
i++;
                 }

fclose(data);

/*Stage 5*/

data = fopen("data5.txt","r+t"); 
i=0;


         
 printf("\n\n\t\t\t\t #Stage 5 :\n");
while((fscanf(data,"%s    %lf\n",name,&point)!=EOF)){
               
printf("\t\t%d )%-30s %.2lf\n",i+1,name,point);
                 i++;
                  }

fclose(data);
printf("\n\n\t\t\t Press to Menu...");
getch();
system("cls");
return 0;
    }
