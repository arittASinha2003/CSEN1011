/* Using structures, write a C program to find the sum of heights of two persons measured in feet and inches.
Heights are taken in Feet and Inches (5 7  means 5 feet and 7 inches)
If the input is 5 7 5 5, output should be 11 0.

Note: 1 Foot = 12 inches */

#include <stdio.h>

struct dist
{
    int feet;
    int inch;
};

void addDist (struct dist d1, struct dist d2)
{
    struct dist d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    
    d3.feet = d3.feet + d3.inch / 12; 
    d3.inch = d3.inch % 12;
    
    printf("%d %d", d3.feet, d3.inch);
}

int main()
{
    struct dist d1, d2;
    scanf("%d%d%d%d", &d1.feet, &d1.inch, &d2.feet, &d2.inch);
    
    addDist (d1, d2);
    return 0;
}

/* Output:
6 7 5 5
12 0

6 7 5 4
11 11
*/
