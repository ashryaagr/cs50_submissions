#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int len = strlen(argv[1]), count = 0;
        //char key[] = argv[1];
        for (int i = 0; i < len; i++)
        {
            if (isalpha(*(argv[1] + i)))
            {
                count++;
            }
        }
        
        if (count == len)
        {
            int key = 0;
            string  s = get_string("plaintext: ");
            //for (int x = 0; x < strlen(argv[1]); x ++)
            //{
                //key = shift(argv[1][x]);
                //printf("%i\n", key);
                //printf("success");      
                for (int x = 0, y = 0; y < strlen(s); x++, y ++)
                {
                    key = shift(argv[1][x % strlen(argv[1])]);
                    if (*(s + y) >= 65 && *(s + y) <= 90)
                    {
                        *(s + y) = (char)(((int)*(s + y) - 65 + key) % 26 + 65); 
                    }
                
                    else if (*(s + y) >= 97 && *(s + y) <= 122)
                    {
                        *(s + y) = (char)(((int)*(s + y) - 97 + key) % 26 + 97); 
                    }
                    
                    else
                    {
                        x--;
                    }
                }
            
                printf("ciphertext: %s\n", s);
            
        }
        //}
        else
        {
            printf("Usage %s keyword\n", argv[0]);
            return 1;
        }
        
     
        //printf("%c %lu\n", *(s+1) + 1, strlen(s));
        //printf("Ascii %d\n", (int)*(s));
        //*s = *s +1;
       
    }
    
    else
    {
        printf("Usage %s key\n", argv[0]);
        return 1;
    }
    
    return 0;
}

int shift(char c)
{
    if (isupper(c))
    {
        return (int)c - 65;
    }
    else
    {
        return (int)c - 97;
    }
}
