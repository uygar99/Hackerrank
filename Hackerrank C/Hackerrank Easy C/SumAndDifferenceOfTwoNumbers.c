#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int first,second;
    float f,s;
    scanf("%d %d %f %f" , &first,&second,&f,&s);
    printf("%d %d\n%.1f %.1f",first+second,first-second,f+s,f-s);
}
