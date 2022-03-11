#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int min, max,i;
    scanf("%d %d", &min, &max);
    char *strings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int string_index;
  	for (i=min; i<=max; i++) {
        if(i<=9) string_index=i-1;
        else if(i%2==0) string_index=9;
        else string_index=10;
        printf("%s\n", strings[string_index]);
    }

    return 0;
}
