#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m,rows;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    int ch=65;

    for(i=1; i<=rows; i++){//parent for loop
            for(j=rows; j>=i; j--){
            printf(" ");//print space for pyramid shape
            }
            for(k=1; k<=i; k++){
            printf("%c",ch++);
              }//make right site of pyramid
            ch--;

            for(m=1; m<i; m++){
                printf("%c",--ch);
            }//make left site of pyramid
            printf("\n");
    }
    
    return 0;
}