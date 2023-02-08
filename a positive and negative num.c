//Determining a positive and a negative number
#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter the value of a:");
  scanf("%d",&a);

  if (a==0){
    printf("\na is neither positive nor negative:");
  }

  if (a>0){
    printf("\na is positive:");
  }
  else{
    printf("\na is negative:");
  }
  return 0;
}
