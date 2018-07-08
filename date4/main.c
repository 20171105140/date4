#include<stdio.h>
#include <stdlib.h>//exit∫Ø ˝µƒÕ∑Œƒº˛
#include <string.h>//◊÷∑˚¥ÆµƒÕ∑Œƒº˛
struct Student
{
    int sn;//—ß∫≈
    char name[10];//–’√˚
    char sex[5];//–‘±
    int db;//≥ˆ…˙»’∆⁄
    char class1[10];//∞‡º∂
    char pn[20];//µÁª∞∫≈¬Î
    char judge[100];
    
    int max;
    int min;
    int average;
    int sum;
    int *l;
};
struct Student s[100];
int main(){
    int i=0;
    int j=0;
    int k;
    int a=0;
    int c=0,e=0;
    int bt[100];
    s[i].sum=0;
    s[i].l= (int*)malloc(sizeof(int)*10);

    FILE *fp,*fp1;            /*Œƒº˛÷∏’Î*/
    /*––◊÷∑˚∏ˆ ˝*/
    if((fp = fopen("student1.csv","r")) == NULL)
    {
        printf("fail to read");
        exit (1) ;
    }else{
        
        fscanf(fp,"%s",bt);
        
        while(!feof(fp))
        {
            
            fscanf(fp,"%d,%[^,],%[^,],%d,%[^,],%[^,],%s",&s[i].sn,&s[i].name,&s[i].sex,&s[i].db,&s[i].class1,&s[i].pn,&s[i].judge);//judge÷∏µƒ «∞—À˘”–≥…º®µ±≥…◊÷∑˚¥Æ∂¡»Î
            
            //	printf("%s\n",s[i].judge);
            i++;
            //break;
            /* for(a=0;fp!="\n";a++)
             {
             fscanf(fp,"%[^,]",s[i].judge[a]);
             }*/
        }
    }const char *d = ",";
    char *p;
    int fs;
    
    p = strtok(s[0].judge,d);
    
    while(p)
    {
        
        fs=atoi(p);//«ø÷∆∞—◊÷∑˚¿‡–Õ◊™ªªŒ™’˚ ˝¿‡–Õ
        //printf("%s ",p);
        c++;//◊™ªªµƒ¥Œ ˝
        
        s[0].l[a]=fs;//∑÷ ˝µƒ∏ˆ ˝
        
        a++;
        p=strtok(NULL,d);
    }
    e=c/i;//∆¿ŒØµƒ∏ˆ ˝
    //printf("%d",s[0].l[3]);
    
    /*	for(i=0;i<j;i++)
     {
     printf("%d,%s,%s,%d,%s,%s,%d\n",s[i].sn,s[i].name,s[i].sex,s[i].db,s[i].class1,s[i].pn,s[i].judge[100]);
     
     }*/
    fclose(fp);
    
    
    
    //int max[100],min[100];
    
    s[0].max=s[0].min=s[0].l[0];
    for(i=0;i<a;i++)
    {
        if(s[0].l[i]>s[0].max)
            s[0].max=s[0].l[i];
        if(s[0].l[i]<s[0].min)
            s[0].min=s[0].l[i];
        
        
    }
    for(i=0;i<a;i++)
    {
        s[0].sum=s[0].sum+s[0].l[i];
        
    } 
    s[0].average=(s[0].sum-s[0].max-s[0].min)/(c-2)	;
    
    fp1=fopen("average.csv","w");
    fprintf(fp1,"%s,average\n",bt);
    fprintf(fp1,"%d,%s,%s,%d,%s,%s",s[0].sn,s[0].name,s[0].sex,s[0].db,s[0].class1,s[0].pn) ;
    for(i=0;i<a;i++)
    {
        fprintf(fp1,",%d",s[0].l[i]);
    }
    fprintf(fp1,",%d",s[0].average);
    fclose(fp1);
    
}
//FILE *fp;









