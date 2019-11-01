#include<stdio.h>
#include<string.h>
void main()
{
    int key,p,m,i;
    char ch;
    char str[200];//stores the string
    int st[200];//stores ascii values of characters of string
    int cy[200];//stores position of new value
    printf("Enter the key to be used for encryption");
    scanf("%d",&key);
    printf("Enter the text");
    scanf("%s",str);
    p=strlen(str);
    for(i=0;i<p;i++) // stores ascii values of each character of string
    {
        m=(int)str[i];   
        st[i]=m;
}
printf("Cyphertext:");
for(i=0;i<p;i++)
{
if(st[i]>=65&&st[i]<=90)//if upper case
{
    cy[i]=((st[i]-65)+key)%26;
    char ch=(cy[i]+65);
    printf("%c",ch);
}
else if(st[i]>=97&&st[i]<=122)//if lower case
    {
        cy[i]=((st[i]-97)+key)%26;
        char ch=(cy[i]+97);
        printf("%c",ch);
    }
    else
    printf("%c",str[i]);
}
}