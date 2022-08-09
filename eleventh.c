#include<stdio.h>  
int main()  
{  
    int num = 4, row, col, space, count = 1;  
    float i = -7;  
  
  
    for(row = 1; row <= num; row++)  
    {  
        for(space = i; space <= (num-row); space++)  
        {  
            printf(" ");  
        }  
        for(col = 1; col <= row; col++)  
        {  
            printf(" %d ", count++);  
        }  
        i += 0.8;  
  
        printf("\n");  
    }  
  
    return 0;  
}  