#include <iostream>

int main(int argc, const char *argv[])
{
    int numbers[] = {5, 9, 3, 1, 2, 8, 4, 7, 6};
    int vector_indexSize = (sizeof(numbers) / sizeof(int)) - 1, vector_indexOrdered, aux, num_lowest;

    for (vector_indexOrdered = 0; vector_indexOrdered <= vector_indexSize; vector_indexOrdered++)
    {
        for (int i = vector_indexSize; i >= vector_indexOrdered; i--)
        {
            if (i == vector_indexSize) {
                numbers[i] <= numbers[i - 1] ? num_lowest = numbers[i] : num_lowest = numbers[i - 1];
            }
            else
            {
                if (numbers[i] < num_lowest) {
                    num_lowest = numbers[i];
                }
                else if (numbers[i - 1] < num_lowest) {
                    num_lowest = numbers[i - 1];
                }
            }

            if (numbers[i] < numbers[i - 1])
            {
                aux = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = aux;
            }
        }
        if (num_lowest != numbers[vector_indexOrdered]) {
            vector_indexOrdered--;
            std::cout << vector_indexOrdered << std::endl;
        }
    }

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        std::cout << numbers[i] << ", ";
    }
}