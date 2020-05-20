#include <iostream>

void printOrder(int num[], int indexSize)
{
    for (int i = 0; i <= indexSize; i++)
    {
        std::cout << num[i];
        i == indexSize ? std::cout << "." : std::cout << ", ";
    }
    std::cout << "\033[m" << std::endl;
}

int main(int argc, const char *argv[])
{
    int numbers[] = {5, 4, 3, 2, 6, 7, 8, 1, 9, 10};
    int vector_indexSize = (sizeof(numbers) / sizeof(int)) - 1, vector_indexOrdered, aux;
    int numbers_lowest, numbers_biggest, numbers_middle[2];
    bool isOrdered = false;

    std::cout << "\033[1;31m";
    printOrder(numbers, vector_indexSize);

    for (vector_indexOrdered = 0; vector_indexOrdered <= vector_indexSize; vector_indexOrdered++)
    {
        for (int i = vector_indexSize; i >= vector_indexOrdered; i--)
        {
            if (numbers[i] < numbers[i - 1])
            {
                aux = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = aux;
            }
        }
    }
    std::cout << "\033[1;32m";
    printOrder(numbers, vector_indexSize);
}