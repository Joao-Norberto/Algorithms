#include <iostream>

int main(int argc, const char *argv[])
{
    int numbers[] = {6, 1, 7, 8, 9, 3, 5, 4, 2};
    int numbers_indexSize = sizeof(numbers) / sizeof(int), numbers_lowest;

    for (int i = 0; i < numbers_indexSize; i++)
    {
        if (i == 0)
        {
            numbers_lowest = numbers[i];
        }
        else
        {
            if (numbers[i] < numbers_lowest)
            {
                numbers_lowest = numbers[i];
            }
        }
    }

    std::cout << "O menor número é: " << numbers_lowest << std::endl;

    return 0;
}
