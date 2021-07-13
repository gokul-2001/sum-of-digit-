#include<stdio.h>
int sum_of_digit(int n);
int main() {
	int number,result;
	printf("Input Number:");
	scanf("%d",&number);
	result=sum_of_digit(number);
	printf("sum of digits:%d",result);
	return 0;
}

int sum_of_digit(int n) {
	if(n==0)
	return 0;
	return(n%10+sum_of_digit(n/10));
}
