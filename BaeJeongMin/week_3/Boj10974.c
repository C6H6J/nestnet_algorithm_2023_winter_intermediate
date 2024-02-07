#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int start, int end)
{
    if (start == end)
    {
        for (int i = 0; i <= end; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else 
    {
        for (int i = start; i <= end; i++) 
        {
            swap(&arr[start], &arr[i]);
            permute(arr, start + 1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    permute(arr, 0, N - 1);

    free(arr);

    return 0;
}