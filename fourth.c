#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two point");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("(%d,%d) in the first quadrant",x,y);
    else if(x<0 && y>0)
        printf("(%d,%d) in the second quadrant",x,y);
    else if(x<0 && y<0)
        printf("(%d,%d) in the third quadrant",x,y);
    else if(x>0 && y<0)
        printf("(%d,%d) in the fourth quadrant",x,y);
    else
        printf("(%d,%d) lies at the origin",x,y);

    return 0;
}