// Write a C program to convert binary to decimal number.

/* Note: For the purpose of auto-grading the input should be like
5
1
0
1
1
0
where the first line contains the number of bits in the list and the rest contain bits. From these bits obtain the decimal number.
Output should be 22 for the above example. */

#include<stdio.h>
#include<math.h>

int main()
{
    int r, s = 0;
    
    scanf("%d", &r);
    
    int f[r], i = 0;
    
    while (i < r)
    {
        scanf("%d", &f[i]);
        i += 1;
    }
    int j = 0;
    
    while (j < r)
    {
        s = s + f[j] * pow(2, r - j - 1);
        j += 1;
    }
    printf("%d", s);
}
