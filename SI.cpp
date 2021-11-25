#include<stdio.h>
int main() {
	float principle, rate, simple;
	int time;
	
	printf("Enter Principle Amount, Rate %% Per Annum and Time\n");
	scanf("%f %f %d", &principle, &rate, &time);
	
	simple = (principle * rate * time)/100;
	
	printf("Principle Amount = %5.2f\n", principle);
	printf("Rate %% Per Annum = %5.2f%\n", rate);
	printf("Time = %d Years\n", time);
	printf("Simple Interest = %5.2f\n", simple);
}
