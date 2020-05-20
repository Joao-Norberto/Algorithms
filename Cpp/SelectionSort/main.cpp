#include <iostream>

void printOrder(int num[], int indexSize)
{
    for(int i = 0; i < indexSize; i++)
    {
        std::cout << num[i];
        i == indexSize-1 ? std::cout << "." : std::cout << ", ";
    }
    std::cout << "\033[m" << std::endl;
}

int main(int argc, const char *argv[])
{
    int numbers[] = {3, 1, 2, 5, 7, 6, 8, 9, 10};
    int numbers_indexSize = sizeof(numbers) / sizeof(int), aux, lowest_num, lowest_numIndex, numbers_ordenedIndex;

    std::cout << "\033[1;31m", std::cout << "Entrada -> ";
    printOrder(numbers, numbers_indexSize);

    for (numbers_ordenedIndex = 0; numbers_ordenedIndex < numbers_indexSize; numbers_ordenedIndex++)
    {
        for (int i = numbers_ordenedIndex; i < numbers_indexSize; i++)
        {
            if (i == numbers_ordenedIndex)
            {
                lowest_num = numbers[i];
            }
            else
            {
                if (numbers[i] < lowest_num)
                {
                    lowest_num = numbers[i];
                    lowest_numIndex = i;
                }
            }
        }
        if (lowest_num != numbers[numbers_ordenedIndex])
        {
            aux = numbers[numbers_ordenedIndex];
            numbers[numbers_ordenedIndex] = numbers[lowest_numIndex];
            numbers[lowest_numIndex] = aux;
        }
        printOrder(numbers, numbers_indexSize);
    }

    std::cout << "\033[1;32m", std::cout << "Saída -> ";
    printOrder(numbers, numbers_indexSize);

    return 0;
}