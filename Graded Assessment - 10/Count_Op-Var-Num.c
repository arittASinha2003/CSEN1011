/* Given a string expression, return the count for operators, single character variables and literals.
For example, given the expression a=b+5, the output should be count operators as 2 (+ and =), variables as 2(a, b) and literals as 1 (5).
Assume no space is given between the variables, literals and operators.
Hint:  ASCII values  [0,9] -> 48 to 57,  [a, z] -> 97 to 122  [A, Z] -> 65 to 90 */

# include <stdio.h>
# include <string.h>

int main()
{
    char c[1000];
    
    int i, op = 0, var = 0, lit = 0;
    
    scanf("%s", c);
	  //gets(c)
    
    for (i = 0; c[i] != '\0'; i++)
    {
        if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
            var++;
            
        else if (c[i] >= 48 && c[i] <= 57)
            lit++;
            
        else if (c[i] == '+' || c[i] == '-' || c[i] == '*' || c[i] == '/' || c[i] == '%' || c[i] == '=')
            op++;
    }
    
    printf("%d %d %d", op, var, lit);
    
    return 0;
}

/* Output:
a=b+5
2 2 1

Z=X/Y%w
3 4 0
*/
