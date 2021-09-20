#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
using namespace std;

#define MAX_LEN 200

//将一个字符串内容清空
void clearArray(char *c)
{
    int len = strlen(c);
    for(int i = 0; i < len; i++)
    {
        c[i] = '\0';
    }
}

//词法分析函数
void analysis(char* inChar,int *c,int *s,int count_c[],int *j1,int *count_case1,int *l1,int *count_if_else1,int *count_if_elseif_else1,string if_else[])
{
    
    int n=0,m,o=0;
    //用于遍历inChar字符数组
    int i = 0;
    while(inChar[i] != '\0')
    {
       
        if(inChar[i]=='e' && inChar[i+1]=='l' && inChar[i+2]=='s' && inChar[i+3]=='e'&&  inChar[i+5]=='i' && inChar[i+6]=='f')
        {
            *c=*c+1;
            if_else[*l1]="else if";
            *l1=*l1+1;
            o++;
            i++;
            continue;
        }
        
        else if(inChar[i]=='a' && inChar[i+1]=='u' && inChar[i+2]=='t' && inChar[i+3]=='o')
        {
            *c=*c+1;
            i++;
            continue;
        }
        else if(inChar[i]=='b' && inChar[i+1]=='r' && inChar[i+2]=='e' && inChar[i+3]=='a' && inChar[i+4]=='k')
        {
            *c=*c+1;
            i++;
            continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='a' && inChar[i+2]=='s' && inChar[i+3]=='e')
        {
            *c=*c+1;
            *count_case1=*count_case1+1;
            i++;
            continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='h' && inChar[i+2]=='a' && inChar[i+3]=='r')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='s' && inChar[i+4]=='t')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='t' && inChar[i+4]=='i'&& inChar[i+5]=='n' && inChar[i+6]=='u' && inChar[i+7]=='e')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='e' && inChar[i+2]=='f' && inChar[i+3]=='a' && inChar[i+4]=='u'&& inChar[i+5]=='l' && inChar[i+6]=='t' )
        {
             *c=*c+1;
             count_c[*j1]=*count_case1;
             *j1=*j1+1;
             *count_case1=0;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='o')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='o' && inChar[i+2]=='u' && inChar[i+3]=='b' && inChar[i+4]=='l'&& inChar[i+5]=='e')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='e' && inChar[i+1]=='l' && inChar[i+2]=='s' && inChar[i+3]=='e')
        {
              *c=*c+1;
              i++;
              m=*l1-1;
             while(if_else[m]!="if"){
                  n++;
                  if_else[m]="";
                  *l1=*l1-1;
                  m=m-1;
              }
              if(n>0){
                  *count_if_elseif_else1=*count_if_elseif_else1+1;
                  if_else[m]="";
                  *l1=*l1-1;
              } else if(n==0){
                  *count_if_else1=*count_if_else1+1;
                  if_else[m]="";
                  *l1=*l1-1;
              }
        }
        else if(inChar[i]=='e' && inChar[i+1]=='n' && inChar[i+2]=='u' && inChar[i+3]=='m')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='e' && inChar[i+1]=='x' && inChar[i+2]=='t' && inChar[i+3]=='e' && inChar[i+4]=='r'&& inChar[i+5]=='n')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='f' && inChar[i+1]=='l' && inChar[i+2]=='o' && inChar[i+3]=='a' && inChar[i+4]=='t')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='f' && inChar[i+1]=='o' && inChar[i+2]=='r')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='g' && inChar[i+1]=='o' && inChar[i+2]=='t' && inChar[i+3]=='o')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='i' && inChar[i+1]=='f')
        {
              *c=*c+1;
              i++;
              if(o==0){
                 if_else[*l1]="if";
                 *l1=*l1+1;
              }
              o=0;
              continue;
        }
        else if(inChar[i]=='i' && inChar[i+1]=='n' && inChar[i+2]=='t')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='l' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='g')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='r' && inChar[i+1]=='e' && inChar[i+2]=='g' && inChar[i+3]=='i' && inChar[i+4]=='s'&& inChar[i+5]=='t' && inChar[i+6]=='e'&& inChar[i+7]=='r' )
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='r' && inChar[i+1]=='e' && inChar[i+2]=='t' && inChar[i+3]=='u' && inChar[i+4]=='r'&& inChar[i+5]=='n')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='h' && inChar[i+2]=='o' && inChar[i+3]=='r' && inChar[i+4]=='t')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='i' && inChar[i+2]=='g' && inChar[i+3]=='n' && inChar[i+4]=='e'&& inChar[i+5]=='d')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='i' && inChar[i+2]=='z' && inChar[i+3]=='e' && inChar[i+4]=='o'&& inChar[i+5]=='f')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='t' && inChar[i+2]=='a' && inChar[i+3]=='t' && inChar[i+4]=='i'&& inChar[i+5]=='c')
        {
              *c=*c+1;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='t' && inChar[i+2]=='r' && inChar[i+3]=='u' && inChar[i+4]=='c'&& inChar[i+5]=='t')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='w' && inChar[i+2]=='i' && inChar[i+3]=='t' && inChar[i+4]=='c'&& inChar[i+5]=='h')
        {
             *c=*c+1;
             *s=*s+1;
             i++;
             continue;
        }
        else if(inChar[i]=='t' && inChar[i+1]=='y' && inChar[i+2]=='p' && inChar[i+3]=='e' && inChar[i+4]=='d'&& inChar[i+5]=='e' && inChar[i+6]=='f' )
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='u' && inChar[i+1]=='n' && inChar[i+2]=='i' && inChar[i+3]=='o' && inChar[i+4]=='n')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='u' && inChar[i+1]=='n' && inChar[i+2]=='s' && inChar[i+3]=='i' && inChar[i+4]=='g'&& inChar[i+5]=='n' && inChar[i+6]=='e'&& inChar[i+7]=='d' )
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='v' && inChar[i+1]=='o' && inChar[i+2]=='i' && inChar[i+3]=='d')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else if(inChar[i]=='v' && inChar[i+1]=='o' && inChar[i+2]=='l' && inChar[i+3]=='a' && inChar[i+4]=='t'&& inChar[i+5]=='i' && inChar[i+6]=='l'&& inChar[i+7]=='e' )
        {
             *c=*c+1;
             i++;
             continue;
        }
                           
        else if(inChar[i]=='w' && inChar[i+1]=='h' && inChar[i+2]=='i' && inChar[i+3]=='l' && inChar[i+4]=='e')
        {
             *c=*c+1;
             i++;
             continue;
        }
        else
        {
             i++;
             continue;
        }
    }
}


int main()
{
    char inChar[MAX_LEN] = {0};
    char address[200];
    int type,i,j=0,k=0,l=0;
    int count_case=0;
    int count=0;
    int count_s=0; //用于记录switch个数
    int count_c[15]={0}; //用于存放每组switch case结构对应的case个数
    int count_if_else=0; //用于记录if-else结构的个数
    int count_if_elseif_else=0; //用于记录if-elseif-else结构的个数
    string if_else1[10];
       
    cin.get(address,200);
    cin>>type;
    ifstream myfile(address);

    //按行读取文件
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            for(i=0;i<200;i++){
                inChar[i]=line[i];
            }
            //对输入的字符串进行分析
          analysis(inChar,&count,&count_s,count_c,&j,&count_case,&l,&count_if_else,&count_if_elseif_else,if_else1);
        }
         myfile.close();
    }
    printf("total num: %d\n",count);
    if(type!=1){
        printf("switch num: %d\n",count_s);
        cout<<"case num: ";
        while(count_c[k]!='\0'){
            cout<<count_c[k]<<" ";
            k++;
        }
        cout<<endl;
    }
    if(type==3){
           cout<<"if-else num: "<<count_if_else<<endl;
       }
       if(type==4){
           cout<<"if-else num: "<<count_if_else<<endl;
           cout<<"if-elseif-else num: "<<count_if_elseif_else<<endl;
       }
   
    
    return 0;
}
