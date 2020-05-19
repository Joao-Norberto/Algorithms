#include <iostream>

int main(int argc, const char* argv[])
{
    int numbers[] = {5, 9, 3, 1, 2, 8, 4, 7, 6};
    int numbers_size = sizeof(numbers)/sizeof(int), aux;
    if (numbers[numbers_size] < numbers[numbers_size-1])
    {
        aux = numbers[numbers_size];
        numbers[numbers_size] = numbers[numbers_size-1];
        numbers[numbers_size-1] = aux;       
    }
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        std::cout << numbers[i] << ", ";
    }
}