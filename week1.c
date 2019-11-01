#include<stdio.h>
int main()
{
    int h,i,k,j,m;
    printf("Enter height");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(j=h;j>i;j--)
        {
            printf(" ");
        }
        for(m=1;m<=i;m++)
        {
            printf("*");
        }
        printf("  ");
        for(k=1;k<=i;k++)
        {
            printf("*");
            
        }
         printf("\n");

    }
}