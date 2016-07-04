#include<stdio.h>
int anagram(char [], char []);
int main()
{
char a1[50],a2[50];
int flag,a;
gets(a1);
gets(a2);
flag=anagram(a1,a2);
if(flag==1)
printf("The strings are anagram");
else
printf("The strings are not anagram");
return 0;
}
int anagram( char a1[], char a2[])
{
int n1[26]={0},n2[26]={0},i=0;
while (a1[i]!='\0')
{
n1[a1[i]-'a']++;
i++;
}
i=0;
while(a2[i]!='\0')
{
n2[a2[i]-'a']++;
i++;
}
for(i=0;i<26;i++)
{
if(n1[i]!=n2[i])
return 0;
}
return 1;
}
