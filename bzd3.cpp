#include <iostream>
#include <vector>

int main()
{
    int m, n;
    std::cout << "Введите количество строк: ";
    std::cin >> m;
    std::cout << "Введите количество столбцов: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    // Ввод элементов матрицы
    std::cout << "Введите элементы матрицы:n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // Проходим по каждому столбцу матрицы
    for (int j = 0; j < n; j++)
    {
        int maxElement = matrix[0][j]; // Максимальный элемент столбца
        int minElement = matrix[0][j]; // Минимальный элемент столбца
        int maxIndex = 0;              // Индекс строки с максимальным элементом
        int minIndex = 0;              // Индекс строки с минимальным элементом

        // Находим максимальный и минимальный элементы в столбце
        for (int i = 1; i < m; i++)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
                maxIndex = i;
            }
            if (matrix[i][j] < minElement)
            {
                minElement = matrix[i][j];
                minIndex = i;
            }
        }

        // Меняем местами максимальный и минимальный элементы
        int temp = matrix[maxIndex][j];
        matrix[maxIndex][j] = matrix[minIndex][j];
        matrix[minIndex][j] = temp;
    }

    // Вывод преобразованной матрицы
    std::cout << "Преобразованная матрица:n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "n";
    }

    return 0;
}