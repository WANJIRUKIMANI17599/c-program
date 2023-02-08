//Divisibility test of 7
#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter the value:");
  scanf("%d",&a);

  if(a%7==0){
    printf("\n a is divisible by 7:");
  }
  else{
    printf("\n a is not divisible by 7:");
  }
  return 0;
}
