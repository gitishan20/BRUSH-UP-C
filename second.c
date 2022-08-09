#include <stdio.h>
void main()
{
  int vote_age;

  printf("Enter the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible to vote.\n");
       
     }
  else
     printf("Congratulation! You are eligible for voting.\n");
}
