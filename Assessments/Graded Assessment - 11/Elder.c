/* Two friends have entered their date of birth and they want to know who is elder among them.
Make a structure named date to store the elements day, month and year to store the dates. */

# include <stdio.h>

struct person {
    char name[10];
    struct date {
        int day;
        int month;
        int year;
    }d;
};

int main(void) {
    struct person p[2];
    for (int i=0; i<2; i++){
        scanf("%s", p[i].name);
        scanf("%d", &p[i].d.day);
        scanf("%d", &p[i].d.month);
        scanf("%d", &p[i].d.year);
    }
    
    // Complete the code 
    
    if (p[1].d.year < p[0].d.year)
        printf("%s", p[1].name);
        
    else if (p[0].d.year < p[1].d.year)
        printf("%s", p[0].name);
        
    else
    {
        if (p[1].d.month < p[0].d.month)
            printf("%s", p[1].name);
            
        else if (p[0].d.month < p[1].d.month)
            printf("%s", p[0].name);
            
        else
        {
            if (p[1].d.day < p[0].d.day)
                printf("%s", p[1].name);
                
            else if (p[0].d.day < p[1].d.day)
                printf("%s", p[0].name);
        }
    }
    return 0; 
}

/* Output:
Supriyo 13 3 2003 Priya 18 9 2003
Supriyo

Supriyo 13 3 2003 Himaja 23 11 2002
Himaja
*/
