/* Develop a C program to which accepts a password string with the following conditions:
1. Length should be in the range [8 to 12]
2. Should have at least one lower case, one upper case, one digit and one special character (@, _ , % , $, #)
3. Should not start with digit or special character
Output should be "Accepted" if the given password follows the conditions else "Invalid Password"

Note - If the character is lowercase, its ASCII value will be in the range 97 to 122 and upper case will be in the range 65 to 90. */

#include <stdio.h>

int main()
{
    char s[100];
    
    scanf("%s",s);
    
    int i = 0, l = 0, u = 0, n = 0, sp = 0;
    
    while (s[i] !='\0')
    {
        if (s[i] == '_' || s[i] == '@' || s[i] == '%' || s[i] == '#' || s[i] == '$')
        {
            if (i == 0)
            {
                printf("Invalid Password");
                return 0;
            }
            else
            {
                sp+=1;
            }
        }
        
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            l+=1;
        }
        
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            u+=1;
        }
        
        else if (s[i] >= '0' && s[i] <= '9')
        {
            n += 1;
            if (i == 0)
            {
                printf("Invalid Password");
                return 0;
            }
        }
        
        i += 1;
    }
    
    if (l > 0 && u > 0 && n > 0 && sp > 0 && i >= 8 && i <= 12)
    {
        printf("Accepted");
    }
    
    else
    {
        printf("Invalid Password");
    }
}

/* Output:
abcdef
Invalid Password

Abcde@12345
Accepted
*/
