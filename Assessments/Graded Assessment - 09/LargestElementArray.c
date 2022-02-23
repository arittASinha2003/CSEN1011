/* Given a two-dimensional array of integers and a row index, return the largest element in that row. */

# include <stdio.h>
# define ROW 4
# define COL 5

int main (void)
{
    int matrix_1[ROW][COL];
    int row;  //Row whose maximum element needs to be found
    int max;  // Maximum element should be stored in this variable
    
    for (int row_index = 0; row_index < ROW; row_index++)
      for (int col_index = 0; col_index < COL; col_index++)
        scanf("%d", &matrix_1[row_index][col_index]);
    
    scanf("%d", &row); 
    max = matrix_1 [row][0];
    
    //Complete the rest of code as per the question asked
    //DONOT MAKE CHANGES TO THE ALREADY GIVEN CODE
    
    for (int i = 0; i < COL - 1; i++)
    {
        if (max < matrix_1 [row][i + 1])
        {
            max = matrix_1 [row][i + 1];
        }
    }
    printf("%d", max);
    return 0;
}

/* Output:
1 2 3 4 6 5 6 7 8 7 9 10 11 12 8 13 14 15 16 9 0
6

1 2 3 4 6 5 6 7 8 7 9 10 11 12 8 13 14 15 16 9 1
8

1 2 3 4 6 5 6 7 8 7 9 10 11 12 8 13 14 15 16 9 2
12

1 2 3 4 6 5 6 7 8 7 9 10 11 12 8 13 14 15 16 9 3
16

1 10 3 4 6 5 6 7 8 7 9 10 11 12 8 13 14 15 16 9 0
10
*/
