#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(int n, int a, int i, int j){
    if (a>0){
        int lower_limit = n - a + 1;
        int upper_limit = n + a - 1;
        if(i == upper_limit || i == lower_limit || j == upper_limit || j == lower_limit){
        printf("%d ", a);
        return(1);
    }
    else
        return(0);
    }
    else
        return(-1);
}
int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i,j,temp = n;
    for (i=(temp*2)-1; i>0; i--){
        for (j=(temp*2)-1; j>0; j--){
            while (check(n, temp, i, j) == 0){
                temp--;
            }
            temp = n;
        }
        printf("\n");
    }
    return 0;
}
