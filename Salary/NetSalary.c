#include <stdio.h>
int main()
{
	int basic,hra,da,pf,it,netsalary;
	printf("Enter the Basic:\n");
	scanf("%d",&basic);
	printf("Enter the DA:\n");
	scanf("%d",&da);
	printf("Enter the HRA:\n");
	scanf("%d",&hra);
	printf("Enter the PF:\n");
	scanf("%d",&pf);
	printf("Enter the IT:\n");
	scanf("%d" ,&it);
	netsalary=(basic+hra+da)-(pf+it);
    printf("\nCalculated Net Salary: %d\n",(basic+hra+da)-(pf+it));
    
}
