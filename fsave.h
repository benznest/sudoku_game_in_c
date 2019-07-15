int x;

int fsave1(double point,char name[40]){
       FILE *data;
       
       
       int i=0,j=0,countplayer=0;
       
data = fopen("data.txt","r+t"); 
 
  struct Dataplayer{
        char nameplayer[40];
        double pointplayer;
        }dataplayer[3];   

while(fscanf(data,"%30s%lf",dataplayer[i].nameplayer,&dataplayer[i].pointplayer)!=EOF){
i++;

                 }

fclose(data);

data = fopen("data.txt","w+t"); 
        if (data==NULL){
                       printf("Error");
                       }   
                       

for (i=0;i<3;i++){
    
if(point<=dataplayer[i].pointplayer){

fprintf(data,"%-30s  %6.2lf\n",name,point);   
point =9999;       
  }
  
else{
fprintf(data,"%-30s  %6.2lf\n",dataplayer[i].nameplayer,dataplayer[i].pointplayer);    
     }
     
}

fclose(data);
return 0;
    }
    
    /*Stage 2*/
int fsave2(int point,char name[]){
       FILE *data;
       char name1;
       int i=0,j=0,countplayer=0;
       
data = fopen("data2.txt","r+t"); 
 
  struct Dataplayer{
        char nameplayer[40];
        int pointplayer;
        }dataplayer[5];   
  i=0;
while((fscanf(data,"%d)%s %lf\n",x,dataplayer[i].nameplayer,&dataplayer[i].pointplayer)!=EOF)){
                 i++;
                 }

fclose(data);

data = fopen("data2.txt","w+t"); 
        if (data==NULL){
                       printf("Error");
                       }   
                       

for (i=0;i<5;i++){
    
if(point>dataplayer[i].pointplayer){
fprintf(data,"%-40s  %6lf\n",name,point);         
point =9999;   
  }
else{
fprintf(data,"%-40s  %6lf\n",dataplayer[i].nameplayer,dataplayer[i].pointplayer);    
     }
}

fclose(data);
return 0;
    }    
    
    /*Stage3*/
    
    int fsave3(int point,char name[]){
       FILE *data;
       char name1;
       int i=0,j=0,countplayer=0;
       
data = fopen("data3.txt","r+t"); 
 
  struct Dataplayer{
        char nameplayer[40];
        int pointplayer;
        }dataplayer[5];   
 
while((fscanf(data,"%d)%s %lf",x,dataplayer[i].nameplayer,&dataplayer[i].pointplayer)!=EOF)){
                 i++;

                 }

fclose(data);

data = fopen("data3.txt","w"); 
        if (data==NULL){
                       printf("Error");
                       }   
                       

for (i=0;i<5;i++){
    
if(point>dataplayer[i].pointplayer){
fprintf(data,"%-40s  %6.2lf\n",name,point);         
point =99999;   
  }
else{
fprintf(data,"%-40s  %6lf\n",dataplayer[i].nameplayer,dataplayer[i].pointplayer);    
     }
}

fclose(data);
return 0;
    }    
    
  /*Stage4*/
  
  int fsave4(int point,char name[]){
       FILE *data;
       char name1;
       int i=0,j=0,countplayer=0;
       
data = fopen("data4.txt","r+t"); 
 
  struct Dataplayer{
        char nameplayer[40];
        int pointplayer;
        }dataplayer[5];   
 
while((fscanf(data,"%d)%s %d",x,dataplayer[i].nameplayer,&dataplayer[i].pointplayer)!=EOF)){
                 i++;

                 }

fclose(data);

data = fopen("data4.txt","w+t"); 
        if (data==NULL){
                       printf("Error");
                       }   
                       

for (i=0;i<5;i++){
    
if(point>dataplayer[i].pointplayer){
fprintf(data,"%-40s  %6.2lf\n",name,point);         
point =99999;   
  }
else{
fprintf(data,"%-40s  %6.2lf\n",dataplayer[i].nameplayer,dataplayer[i].pointplayer);    
     }
}

fclose(data);
return 0;
    }    
    

/*Stage 5*/
int fsave5(int point,char name[]){
       FILE *data;
       char name1;
       int i=0,j=0,countplayer=0;
       
data = fopen("data5.txt","r+t"); 
 
  struct Dataplayer{
        char nameplayer[40];
        int pointplayer;
        }dataplayer[5];   
 
while((fscanf(data,"%d)%s %lf",x,dataplayer[i].nameplayer,&dataplayer[i].pointplayer)!=EOF)){
                 i++;

                 }

fclose(data);

data = fopen("data5.txt","w+t"); 
        if (data==NULL){
                       printf("Error");
                       }   
                       

for (i=0;i<5;i++){
    
if(point>dataplayer[i].pointplayer){
fprintf(data,"%-40s  %6lf\n",name,point);         
point =99999;   
  }
else{
fprintf(data,"%-40s  %6lf\n",dataplayer[i].nameplayer,dataplayer[i].pointplayer);    
     }
}

fclose(data);
return 0;
    }    
