//Program of a bank loan
#include<stdio.h>
int main()
{
  int age,salary;
  printf("\nEnter your age:");
  scanf("%d",&age);

  printf("\nEnter your salary:");
  scanf("%d",&salary);

if(age>21 && salary>21000){
  printf("\nCongratulation you have qualify for a loan:");
  }
  else{
    printf("\nUnfortunately you have not qualified for a loan:");
  }
  return 0;
}
