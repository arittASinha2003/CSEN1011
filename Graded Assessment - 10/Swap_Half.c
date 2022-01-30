/* Given a string, return the string with the first and second half swapped. If the string has odd length, leave the middle character in place. */

# include <stdio.h>
# include <string.h>
# define LENGTH 15

int main (void)
{
    
    int len = 0, i = 0, j = 0;
    char input[LENGTH], output[LENGTH];
    scanf("%s", input);  //Input string
    
    //Complete the rest of code as per the question asked
    //DONOT MAKE CHANGES TO THE ALREADY GIVEN CODE
    
    len = strlen(input);
    if(len % 2 == 0)
    {
        for(i = len / 2; i < len; i++)
        {
            output[j] = input[i];
            j = j + 1;
        }
        for(i = 0; i < len / 2; i++)
        {
            output[j] = input[i];
            j = j + 1;
        }
    }
    else
    {
        for(i = len / 2 + 1; i < len; i++)
        {
            output[j] = input[i];
            j = j + 1;
        }
        output[j++] = input[len / 2];
        for(i = 0; i < len / 2; i++)
        {
            output[j] = input[i];
            j = j + 1;
        }
    }
    
    printf("%s", output);
    
    return 0;
}

/* Output:
GITAM
AMTGI

visakhapatnam
patnamavisakh

prince
ncepri

COMPUTER
UTERCOMP    //Error coming

science
nceesci     //Error coming
*/
