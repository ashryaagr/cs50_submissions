#include<stdio.h>
#include<string.h>
int check(char num[20]);
int result(char num[20]);
int main()
{
    char num[20];
    printf("Enter the number");
    scanf("%s",num);
    int a,m;
    
    
     a=check(num);
     m=result(num);





    if(m==5)
    printf("Card is valid");
    else if(m==6)
    printf("Card is not valid");
    printf("\n");  
    
    
    if(a==1)
    printf("American Card");
    if(a==2)
    printf("Visa Card");
    if(a==3)
    printf("Master Card");
    if(a==4)
    printf("Master Valid");
    if(a==7)
    printf("Not Valid");
    printf("\n");
 
   
    return 0;

}

int check(char num[20])
{
 int v,p;
 p=strlen(num);
if(p==15)
v=1;
if(p==16)
{
    if((num[0])=='4')
    v=2;
    else
    v=3;
}
if(p==13)
v=4;


return v;
}


int result(char num[20])
{
    int i,k,j,b;
    int sum=0;
    int sum2=0;
    int total=0;
    k=strlen(num);
    for(i=(k-2);i>=0;i=i-2)
    sum=sum+(num[i]*2);
    for(j=(k-1);j>=0;j=j-2)
    sum2=sum2+num[j];
    total=sum+sum2;
    
    if(total%10==0)
    return 5;
    else
    return 6;
}
    



