#include <iostream>
#include <vector>

void swapMinMaxElements(std::vector<std::vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for (int j = 0; j < n; j++)
    {
        int minIdx = 0;
        int maxIdx = 0;

        for (int i = 0; i < m; i++)
        {
            if (matrix[i][j] < matrix[minIdx][j])
            {
                minIdx = i;
            }

            if (matrix[i][j] > matrix[maxIdx][j])
            {
                maxIdx = i;
            }
        }

        std::swap(matrix[minIdx][j], matrix[maxIdx][j]);
    }
}

int main()
{
    // Example usage
    std::vector<std::vector<int>> matrix = {{1, 2, 3},
                                            {4, 5, 6},
                                            {7, 8, 9}};

    swapMinMaxElements(matrix);

    for (const auto &row : matrix)
    {
        for (const auto &num : row)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
