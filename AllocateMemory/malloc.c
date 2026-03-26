#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

int main(){
    int n, i;
    int *ptr;

    printf("Enter number of elements:");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL){
        printf("Memory Allocation Failed!\n");
        return 1;
    }

printf("\nEnter Value:\n");
for(i=0; i<n; i++){
    scanf("%d", ptr + i);
    }

printf("Output:");
displayData(ptr, n);

free(ptr);

}
