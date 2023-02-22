#include <iostream>
#define ARRAY_SIZE 5


int binarySearch(int arr[ARRAY_SIZE], int value, int left, int right);

int main()
{
    int arr[ARRAY_SIZE] = {2, 3, 5, 7, 9};
    std::cout << binarySearch(arr, 4, 0, ARRAY_SIZE - 1);
    return 0;
}

int binarySearch(int arr[ARRAY_SIZE], int value, int left, int right)
{
    if (left > right)
        return -1;

    int middle = (left + right) / 2;
    if (arr[middle] < value)
        left = middle + 1;
    else if(arr[middle] > value)
        right = middle - 1;
    else
        return middle;

    return binarySearch(arr, value, left, right);
}