#define ARRAY_SIZE 5
#include <iostream>

void merge(int *arr, int low, int high, int mid);
void mergeSort(int *arr, int low, int high);

int main()
{
    int arr[ARRAY_SIZE] = {21, -5, -9, 2, 3};
    mergeSort(arr, 0, ARRAY_SIZE - 1);

    for (auto &el:arr)
        std::cout << el << " ";
    std::cout << std::endl;
    return 0;
}

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }

    for (i = low; i < k; ++i)
        arr[i] = c[i];
}

void mergeSort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}