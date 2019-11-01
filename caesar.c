#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        if ((floor(log10(abs(key))) + 1) == strlen(argv[1]))
        {
            //printf("Success\n%d \n", key);   
            string  s = get_string("plaintext: ");
        
            for (int i = 0; i < strlen(s); i ++)
            {
                if (*(s + i) >= 65 && *(s + i) <= 90)
                {
                    *(s + i) = (char)(((int)*(s + i) - 65 + key) % 26 + 65); 
                }
                
                if (*(s + i) >= 97 && *(s + i) <= 122)
                {
                    *(s + i) = (char)(((int)*(s + i) - 97 + key) % 26 + 97); 
                }
            }
            
            printf("ciphertext: %s\n", s);
            
        }
        
        else
        {
            printf("Usage %s key\n", argv[0]);
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
