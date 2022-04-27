#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int sum,differ,num1,num2;
    float num3,num4;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3,&num4);
    sum=num1+num2;
    differ=num1-num2;
    printf("%d %d\n",sum,differ);
    float sum2,differ2;
    sum2=num3+num4;
    differ2=num3-num4;
    printf("%.1f %.1f",sum2,differ2);
    
    
    
    return 0;
}
