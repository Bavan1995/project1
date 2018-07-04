#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
 
 char str[25];
 int len,l,i,k,j;
 cout<<"\nEnter the string\n";
 gets(str);
 len=strlen(str);
 for(l=1;l<len;l++)
  {    
    for (i=0;i<=len-l;i++) 
     {
        j=i+l-1;            
        for (k=i;k<=j;k++) 
         {
           cout << str[k];
         }
           cout<<endl;
      }
   }
}
 
  
