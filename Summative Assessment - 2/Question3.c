/* We are given a list of integers where: the integers are in the range 1..n
The list has a length of n+1 These properties mean the list must have at least 1 duplicate.

Write a C program to identify the duplicate.

Note: For the purpose of auto-grading the input should be like
5
1
2
3
4
2
where the first line contains the number of elements in the list and the rest contain the elements. From these elements identify the duplicate.
Output should be 2 for the above example. */

#include<stdio.h>
int main()
{
    int a, b, c, d;
    
    scanf("%d", &a);
    
    int f[a];
    int j = 0, i = 0;
    
    while (j < a)
    {
        scanf("%d", &f[j]);
    j += 1;
    }
    
    d = 1;
    
    while (i < a)
    {
        int k = d;
        for (k; k < a; k++)
        {
            if (f[i] == f[k])
            {
                printf("%d", f[i]);
                return 0;
            }
        }
        d += 1;
        i += 1;
    }
}
