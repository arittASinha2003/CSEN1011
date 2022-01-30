/* C Program to find whether two strings are anagrams.
(Anagram is a word formed my rearranging the letters of another word. For example, silent and listen are anagrams.)
Hint: Sort the characters in the string and compare */

# include <stdio.h>
# include <string.h>
# define LENGTH 10

void sortArray (char[]);
int main (void)
{
    char s1[LENGTH], s2[LENGTH];
    scanf("%s", s1);    //First string
    scanf("%s", s2);    //Second string
    
    //char A = s1[LENGTH];
    //char B = s2[LENGTH];
    
    int i;
    
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    
    //Complete the code
    
    if (n1 != n2)
    {
        printf("False");
        return 0;
    }
    else
    {
        sortArray (s1);
        sortArray (s2);
        
        for (i = 0; i < n1; i++)
        {
            if (s1[i] != s2[i])
            {
                printf("False");
                return 0;
            }
        }
        printf("True");
    }
    return 0;
}

void sortArray (char a[])
{
    int temp, i, j;
    
    for (i = 0; i < strlen(a) - 1; i++)
    {
        for (j = i + 1; j < strlen(a); j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

/* Output:
gitam mat
False

funeral realfun
True
*/
