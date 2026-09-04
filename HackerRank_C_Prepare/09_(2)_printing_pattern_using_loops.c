#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i,j, size = 2*n-1;
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            int dist_vertical = (i < size-i-1 ? i:size-i-1);
            int dist_horizontal = (j < size-j-1 ? j:size-j-1);
            int dist_edge = (dist_vertical < dist_horizontal ? dist_vertical:dist_horizontal);
            printf("%d ", n-dist_edge);
        }
        printf("\n");
    }
    return 0;
}
