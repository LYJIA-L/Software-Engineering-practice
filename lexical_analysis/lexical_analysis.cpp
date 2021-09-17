
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
int analysis1(char* inChar,int c)
{

    int count=c;
    
    //用于遍历inChar字符数组
    int i = 0;
    while(inChar[i] != '\0')
    {
       
        if(inChar[i]=='a' && inChar[i+1]=='u' && inChar[i+2]=='t' && inChar[i+3]=='o')
        {
            count++;
            i++;
            continue;
        }
        else if(inChar[i]=='b' && inChar[i+1]=='r' && inChar[i+2]=='e' && inChar[i+3]=='a' && inChar[i+4]=='k')
        {
            count++;
            i++;
            continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='a' && inChar[i+2]=='s' && inChar[i+3]=='e')
        {
            count++;
            i++;
            continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='h' && inChar[i+2]=='a' && inChar[i+3]=='r')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='s' && inChar[i+4]=='t')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='c' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='t' && inChar[i+4]=='i'&& inChar[i+5]=='n' && inChar[i+6]=='u' && inChar[i+7]=='e')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='e' && inChar[i+2]=='f' && inChar[i+3]=='a' && inChar[i+4]=='u'&& inChar[i+5]=='l' && inChar[i+6]=='t' )
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='o')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='d' && inChar[i+1]=='o' && inChar[i+2]=='u' && inChar[i+3]=='b' && inChar[i+4]=='l'&& inChar[i+5]=='e')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='e' && inChar[i+1]=='l' && inChar[i+2]=='s' && inChar[i+3]=='e')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='e' && inChar[i+1]=='n' && inChar[i+2]=='u' && inChar[i+3]=='m')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='e' && inChar[i+1]=='x' && inChar[i+2]=='t' && inChar[i+3]=='e' && inChar[i+4]=='r'&& inChar[i+5]=='n')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='f' && inChar[i+1]=='l' && inChar[i+2]=='o' && inChar[i+3]=='a' && inChar[i+4]=='t')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='f' && inChar[i+1]=='o' && inChar[i+2]=='r')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='g' && inChar[i+1]=='o' && inChar[i+2]=='t' && inChar[i+3]=='o')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='i' && inChar[i+1]=='f')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='i' && inChar[i+1]=='n' && inChar[i+2]=='t')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='l' && inChar[i+1]=='o' && inChar[i+2]=='n' && inChar[i+3]=='g')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='r' && inChar[i+1]=='e' && inChar[i+2]=='g' && inChar[i+3]=='i' && inChar[i+4]=='s'&& inChar[i+5]=='t' && inChar[i+6]=='e'&& inChar[i+7]=='r' )
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='r' && inChar[i+1]=='e' && inChar[i+2]=='t' && inChar[i+3]=='u' && inChar[i+4]=='r'&& inChar[i+5]=='n')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='h' && inChar[i+2]=='o' && inChar[i+3]=='r' && inChar[i+4]=='t')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='i' && inChar[i+2]=='g' && inChar[i+3]=='n' && inChar[i+4]=='e'&& inChar[i+5]=='d')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='i' && inChar[i+2]=='z' && inChar[i+3]=='e' && inChar[i+4]=='o'&& inChar[i+5]=='f')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='t' && inChar[i+2]=='a' && inChar[i+3]=='t' && inChar[i+4]=='i'&& inChar[i+5]=='c')
        {
              count++;
              i++;
              continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='t' && inChar[i+2]=='r' && inChar[i+3]=='u' && inChar[i+4]=='c'&& inChar[i+5]=='t')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='s' && inChar[i+1]=='w' && inChar[i+2]=='i' && inChar[i+3]=='t' && inChar[i+4]=='c'&& inChar[i+5]=='h')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='t' && inChar[i+1]=='y' && inChar[i+2]=='p' && inChar[i+3]=='e' && inChar[i+4]=='d'&& inChar[i+5]=='e' && inChar[i+6]=='f' )
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='u' && inChar[i+1]=='n' && inChar[i+2]=='i' && inChar[i+3]=='o' && inChar[i+4]=='n')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='u' && inChar[i+1]=='n' && inChar[i+2]=='s' && inChar[i+3]=='i' && inChar[i+4]=='g'&& inChar[i+5]=='n' && inChar[i+6]=='e'&& inChar[i+7]=='d' )
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='v' && inChar[i+1]=='o' && inChar[i+2]=='i' && inChar[i+3]=='d')
        {
             count++;
             i++;
             continue;
        }
        else if(inChar[i]=='v' && inChar[i+1]=='o' && inChar[i+2]=='l' && inChar[i+3]=='a' && inChar[i+4]=='t'&& inChar[i+5]=='i' && inChar[i+6]=='l'&& inChar[i+7]=='e' )
        {
             count++;
             i++;
             continue;
        }
                           
        else if(inChar[i]=='w' && inChar[i+1]=='h' && inChar[i+2]=='i' && inChar[i+3]=='l' && inChar[i+4]=='e')
        {
             count++;
             i++;
             continue;
        }
        else
        {
             i++;
             continue;
        }
                        
       
    }
    return count;
}

int main()
{
    char inChar[MAX_LEN] = {0};
    char address[200];
    int type,i;
    int count=0;
    
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
            if(type==1){
                count=analysis1(inChar,count);
            }
        }
         myfile.close();
    }
    printf("total num: %d\n",count);
    
   
    
    return 0;
}


