#include<stdio.h>
#include<math.h>
int main()
{
int x = 10, y = 5, p;
    printf("enter the values");
    scanf("%d%d", &x, &y);
    x = x + y;
    y = x - y;
    p = x - y;

    printf("answer is %d", x);
    printf("answer is %d", y);
    printf("answer is %d", p);
    return 0;
    }
