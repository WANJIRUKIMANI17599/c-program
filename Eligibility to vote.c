//Voters eligibility to vote
#include<stdio.h>
int main ()
{
  int age,nationality,kenyan;
  printf("\nEnter your age:");
  scanf("%d",&age);
  
  printf("\nEnter nationality:");
  scanf("%d",&nationality);

  if (age>=18 && nationality==kenyan){
    printf("\nYou can vote:");
    }
  else{
    printf("\nYou can't vote:");
  }

  
  return 0;
}
