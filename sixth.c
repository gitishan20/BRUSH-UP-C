#include <stdio.h>

int main()  
{  
    int anglea, angleb, anglec, sum;  
 
    printf("Input three angles of triangle : ");  
    scanf("%d %d %d", &anglea, &angleb, &anglec);  
  
    // Calculate the sum of all angles of triangle 
    sum = anglea + angleb + anglec;   
  
    // To check whether sum=180 then its a valid triangle otherwise invalid triangle
    if(sum == 180)   
    {  
        printf("It is a  triangle.\n");  
    }  
    else  
    {  
        printf("It is not a triangle.\n");  
    }  
    return 0;
}