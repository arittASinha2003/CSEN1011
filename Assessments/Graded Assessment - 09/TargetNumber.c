// Given two numbers x, y, and a target, print whichever of x and y is closer to the target. If they have the same distance, print the smaller of the two.

# include <stdio.h>
# include <stdlib.h>
int main (void)
{
    int x, y, target, a, s;
    scanf("%d:%d:%d", &x, &y, &target);
  
    //Complete the rest of code as per the question asked
    // Hint - Use abs() to find the absolute value
  
    a = abs (target - x);
    s = abs (target - y);
    
    if (a > s)
        printf("%d", y);
        
    else if (s > a)
    printf("%d", x);
    
    else
    {
        if (x > y)
        printf("%d", y);
        
        else
        printf("%d", x);
    }
    return 0;
}

/* Output:
1:5:2
1

1:7:4
1

-1:1:0
-1
*/
