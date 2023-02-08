//Program to determine if a value is even or odd
#include<stdio.h>
int main()
{
  int num;
  printf("\nEnter the integer:");
  scanf("%d",&num);
  /*true if num is divisible by 2*/

  if(num%2==0){
    printf("\n num is even:");
  }
  else{
    printf("\n num is odd:");
  }
  return 0;
}
