#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

int main(){
    int n, i;
    int *ptr;
    char choice;

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

printf("\nDo you want to add more elements?: (Y/N)\n");
scanf(" %c", &choice);

if (choice == 'Y' || choice == 'y'){
    int extra;

printf("How many elements?:");
scanf("%d", &extra);

int *temp = realloc(ptr, (n + extra) *sizeof(int));
if(temp == NULL){
        printf("Reallocation Failed!\n");
}else{
    ptr = temp;
    printf("Enter additional value:\n");
    for ( i = n; i < n + extra; i++){
        scanf("%d", ptr + i);
    }
    n = n + extra;

    printf("Update Value:");
    displayData(ptr, n);
}

free(ptr);

}
}