
#include <stdio.h>
#include <stdlib.h>

void printArray(int cards[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", cards[i]);
    }

    printf("\n");
}

void insertionSort(int cards[], int n)
{
    int i, j, key;
    int shifts = 0;

    for(i = 1; i < n; i++)
    {
        key = cards[i];
        j = i - 1;

        while(j >= 0 && cards[j] > key)
        {
            cards[j + 1] = cards[j];
            j--;
            shifts++;
        }

        cards[j + 1] = key;

        printf("Pass %d: ", i);
        printArray(cards, n);
    }

    printf("Total shifts: %d\n", shifts);
}

int main()
{
    int n, i;

    printf("Enter the number of cards: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of cards\n");
        return 1;
    }

    int *cards = (int *)malloc(n * sizeof(int));

    if(cards == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter card %d: ", i + 1);
        scanf("%d", &cards[i]);
    }

    printf("\nOriginal cards: ");
    printArray(cards, n);

    insertionSort(cards, n);

    printf("Sorted cards: ");
    printArray(cards, n);

    free(cards);

    return 0;
}