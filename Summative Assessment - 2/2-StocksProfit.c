/* I want to know how much money I could have made yesterday if I'd been trading Apple stocks all day.
So I grabbed Apple's stock prices from yesterday and put them in an array called stock_prices, where:
The indices are the time (in minutes) past trade opening time, which was 9:30am local time.
The values are the price (in US dollars) of one share of Apple stock at that time.
So if the stock cost $500 at 10:30am, that means stock_prices[60] = 500.

Write program in C that the best profit I could have made from one purchase and one sale of one share of Apple stock yesterday.

For example:
stock_prices = [10, 7, 5, 8, 11, 9]
the program should returns 6 (buying for $5 and selling for $11)
No "shorting"—you need to buy before you can sell. Also, you can't buy and sell in the same time step—at least 1 minute has to pass.

Note:  For the purpose of auto-grading the input should be
6 
10
7
5
8
11
9
where the first line indicates the number of elements followed by the elements. */

#include<stdio.h>
int main()
{
    int p, q, r, s = 0;
    
    scanf("%d", &p);
    
    int m[p];
    int i = 0;
    
    while (i < p)
    {
        scanf("%d", &m[i]);
        i += 1;
    }
    i = 0;
  
    while (i < p)
    {
        if (m[0] = m[i])
        s += 1;
        i += 1;
    }
  
    if (s == 0)
    {
        printf("0");
        return 0;
    }
  
    q = r = m[0];
    int n = 0;
  
    while (n < p)
    {
        if (q < m[n])
        q = m[n];
        if (r > m[n])
        r = m[n];
    n += 1;
    }
    printf("%d", q - r);
}

/* Output:
6
10 20 30 40 50 60
40
*/

/* OTHER WAY
# include <stdio.h>
# define SIZE 10
int main() {
  int stock_prices[SIZE];
  int n,max=0;
  printf("Enter the number of stock prices: ");
  scanf("%d", &n);
  printf("The stock prices are ...\n");
  for(int i=0; i<n; i++)
    scanf("%d", &stock_prices[i]);
    for(int i=0; i<n; i++)
      for (int j=i; j<n; j++) 
        if ((stock_prices[j] - stock_prices[i]) > max)
          max = stock_prices[j] - stock_prices[i];
        
  printf("The maximum profit that is possible is %d\n", max);
  return 0;
}

/* Output:
Enter the number of stock prices: 6
The stock prices are ...
10 20 30 40 50 60
The maximum profit that is possible is 50
*/
