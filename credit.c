#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{    
    long num = get_long("Number : ");
    long temp = num;
    int p_digit, digit, p_sum = 0, sum = 0, count = 0;
    while (num != 0)
    {
        digit = num % 10;
        
        if (count % 2 != 0)
        {
            digit = digit * 2;
            while (digit != 0)
            {
                p_digit = digit % 10;
                p_sum = p_sum + p_digit;
                digit = digit / 10;
            }
        }
        else
            sum = sum + digit;
        
        num = num / 10;
        count ++;
    }
    num = temp;
    if ((p_sum + sum) % 10 == 0)
    {    
        switch(count)
        {
            case 15: if (num / 10000000000000 == 34 || num / 10000000000000 == 37)
                         printf("AMEX\n");
                     else
                         printf("INVALID\n");
                     break;
            case 13: if(num / 1000000000000 == 4)
                          printf("VISA\n");
                     else
                         printf("INVALID\n");
                     break;
            case 16: if(num / 100000000000000 == 51 || num / 100000000000000 == 52 ||
                       num / 100000000000000 == 53 || num / 100000000000000 == 54 ||
                       num / 100000000000000 == 55)
                          printf("MASTERCARD\n");
                     else if(num / 1000000000000000 == 4)
                          printf("VISA\n");
                     else
                         printf("INVALID\n");
                     break;
            default: printf("INVALID\n");
                     break;
        }
    }
    else
        printf("INVALID\n");
         
    
//    printf("%d %d %d %d\n", count, sum, p_sum, sum + p_sum);
    return 0;
}
