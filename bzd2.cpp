#include <iostream>
#include <vector>

std::pair<int, int> findMaxSumPair(const std::vector<int> &arr)
{
    int maxSum = arr[0] + arr[1];
    int maxIndex1 = 0;
    int maxIndex2 = 1;

    for (int i = 1; i < arr.size() - 1; i++)
    {
        int sum = arr[i] + arr[i + 1];
        if (sum > maxSum)
        {
            maxSum = sum;
            maxIndex1 = i;
            maxIndex2 = i + 1;
        }
    }

    return std::make_pair(arr[maxIndex1], arr[maxIndex2]);
}

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

    std::pair<int, int> maxSumPair = findMaxSumPair(arr);
    std::cout << "Соседние элементы с максимальной суммой: " << maxSumPair.first << " " << maxSumPair.second << std::endl;

    return 0;
}