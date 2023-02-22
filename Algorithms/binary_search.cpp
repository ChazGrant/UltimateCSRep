#include <iostream>
#define ARRAY_SIZE 5
/*
    1. Выбираем середину массива
    2. Если нужное значение меньше текущего => продолжаем поиск в левой части
    т.е. уменьшаем правую часть
    3. Иначе уменьшанм левую часть
    4. Если значения совпадают => возвращаем индекс
    5. Если левая граница больше правой, то данного значения в массиве нет
*/

#include <iostream>


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