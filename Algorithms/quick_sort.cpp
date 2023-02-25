#include <iostream>


void quickSort(int arr[], int start, int end);
void swap(int *a, int *b);
int partition(int arr[], int start, int end);


int main()
{
    int arr[] = {-9, -3, 5, 2, 6, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for (auto &el : arr)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    return 0;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int partition(int arr[], int start, int end)
{
    /*
        1. Выбираем элемент(pivot), от которого будем смещать другие элементы
        2. Если элемент меньше или равен pivot то они меняются местами(так же увеличиваем индекс смещения)
        3. Меняем местами конечный элемент с элементом по индексу смещения
        4. Возвращаем индекс смещения
    */
    int pivot = arr[end];
    int p_index = start;

    for (int i = start; i < end; ++i)
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[p_index]);
            p_index++;
        }
    
    swap(arr[p_index], arr[end]);

    return p_index;
}

void quickSort(int arr[], int start, int end)
{
    /*
        1. Получаем pivot
        2. Запускаем функцию со смещением на +1 по start, 
        затем со смещеним на -1 по end
    */
    if (start >= end)
        return;

    int pivot = partition(arr, start, end);

    quickSort(arr, pivot+1, end);
    quickSort(arr, start, pivot-1);
}
