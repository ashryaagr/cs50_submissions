#include<stdio.h>
#include<string.h>
int main()
{
int i,j,p,k,m;
char ch;
char str[100];
char st[100];
char key[100];
char cy[100];
printf("Enter the text");
scanf("%s",str);
printf("Enter the key");
scanf("%s",key);
p=strlen(str);
k=strlen(key);
for(i=0;i<p;i++) // stores ascii values of each character of string
    {
        m=(int)str[i];   
        st[i]=m;
}
printf("Cyphertext:");
for(i=0;i<p;i++)
{
    for(j=0;j<k;j++)
    {
    if(st[i]>=65&&st[i]<=90)//if upper case
    {
    cy[i]=((st[i]-65)+(j%k))%26;
    char ch=(cy[i]+65);
    printf("%c",ch);
    }
    if(st[i]>=97&&st[i]<=122)//if lower case
    {
        cy[i]=((st[i]-97)+(j%k))%26;
        char ch=(cy[i]+97);
        printf("%c",ch);
    }
    else
    printf("%c",str[i]);
    }
}
}
    