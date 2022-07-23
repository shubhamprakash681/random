#include<stdio.h>
int main()
{
 char text[1000];
 scanf("%[^\n]s",text);
 int i=0,c=0;
 while(text[i]!='\0')
 {
 if(!(
 (text[i]>='a' && text[i]<='z') ||
 (text[i]>='A' && text[i]<='Z') ||
 (text[i]>='0' && text[i]<='9') ) )
 c++;
 i++;

 if (text[i] == ' ') {
     c--;
 }
 }
 printf("%d",c);
}