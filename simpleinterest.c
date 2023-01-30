//program of finding simple interest
#include <stdio.h>
int main(){
	int p, r, t;
	float si;
	si=(p*t*r)/100;
	printf("Enter the principle amount, time and rate value\n");
	scanf("%d %d %d", &p,&r,&t);
	printf("the simple interest is %f", si);
	return 0;
	
}
