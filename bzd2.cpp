#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cout << "Введите размер массива: ";
    std::cin >> N;

    std::vector<int> arr(N);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    int maxSum = arr[0] + arr[1]; // Изначально считаем, что максимальная сумма это сумма первых двух элементов
    int maxIndex1 = 0;            // Индекс первого элемента с максимальной суммой
    int maxIndex2 = 1;            // Индекс второго элемента с максимальной суммой

    for (int i = 1; i < N - 1; i++)
    {
        int sum = arr[i] + arr[i + 1]; // Вычисляем сумму текущих соседних элементов

        if (sum > maxSum)
        {
            maxSum = sum;      // Обновляем максимальную сумму
            maxIndex1 = i;     // Обновляем индекс первого элемента
            maxIndex2 = i + 1; // Обновляем индекс второго элемента
        }
    }

    std::cout << "Два соседних элемента с максимальной суммой: " << arr[maxIndex1] << " и " << arr[maxIndex2] << std::endl;

    return 0;
}
