#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swap(int *elem1ptr, int *elem2ptr)
{
    int temp = *elem1ptr;
    *elem1ptr = *elem2ptr;
    *elem2ptr = temp;
}

void bubble(int *const work, const int size, int (*compare)(int a, int b))
{
    int i; // step counter
    int j;

    for(i = 0; i < size; i++)
        for(j = 0; j < size - 1; j++)
            if((*compare)(work[j], work[j + 1])){
                swap(&work[j], &work[j + 1]);
            }
}

int ascending(int a, int b)
{
    return a > b;
}

int descending(int a, int b)
{
    return a < b;
}

int main(void)
{
    int order, i;
    int a[SIZE];

    for(i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
    
    printf("Digite 1 para ordem crescente ou 2 para ordem decrescente: ");
    scanf("%d", &order);

    printf("\nItens de dados na ordem original\n");
    // show original array
    for(i = 0; i < SIZE; i++)
        printf("%5d", a[i]);

    if(order == 1){
        bubble(a, SIZE, ascending);
        printf("\nAscending order\n");
    }

    else{
        bubble(a, SIZE, descending);
        printf("\nDescending order\n");
    }
    // sorted array
    for(i = 0; i < SIZE; i++)
        printf("%5d", a[i]);

    printf("\n");

    return 0;
}