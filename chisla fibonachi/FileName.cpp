#include <iostream>
#include <cmath>

void InputNumber(int32_t&);
int64_t SumOfDigits(int32_t);
int32_t CountAmountOfDigits(int32_t);
void ArraySize(int32_t&);
void InputArray(int32_t*, int32_t);
int32_t SumOfArray(int32_t*, int32_t);
void OutputSumOfArray(int32_t*, int32_t);
int32_t Fibonacci(int32_t);
int32_t SumFibonacci(int32_t);


int main()
{
    int32_t number{}, size{}, quantity{}, fib{};
    int64_t sum{};
    InputNumber(number);
    system("cls");
    std::cout << "\nYour Number: " << number;
    std::cout << "\n\nSum of digits: " << SumOfDigits(number);
    std::cout << "\n\nAmount of digits: " << CountAmountOfDigits(number);

    int32_t* array; //
    ArraySize(size);
    InputArray(array, size);
    SumOfArray(array, size);
    OutputSumOfArray(array, size);

    InputNumber(fib);
    std::cout << '\n' << SumFibonacci(fib);
}

void InputNumber(int32_t& number)
{
    std::cout << "Input number: ";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "\nInput non-negative number!\n";
        InputNumber(number);
    }
}

int64_t SumOfDigits(int32_t number)
{
    if (number == 0)
    {
        return 0;
    }
    return (number % 10) + SumOfDigits(number / 10);
}

int32_t CountAmountOfDigits(int32_t number)
{
    if (number == 0)
    {
        return 0;
    }
    return 1 + CountAmountOfDigits(number / 10);
}

void ArraySize(int32_t& size) //
{
    std::cout << "\n\nInput size of array: ";
    std::cin >> size;
    if (size < 0)
    {
        std::cout << "\nEnter an array size more than 0!\n";
        ArraySize(size);
    }
}

void InputArray(int32_t* array, int32_t size)
{
    for (int32_t i = 0; i < size; ++i) 
    {
        std::cout << "\nEnter " << i + 1 << " element of array: ";
        std::cin >> array[i];
    }
}

int32_t SumOfArray(int32_t* array, int32_t size)
{
    if (size <= 0) {
        return 0;
    }
    return array[size - 1] + SumOfArray(array, size - 1);
}

void OutputSumOfArray(int32_t* array, int32_t size)
{
    std::cout << "\nSum array elements: " << SumOfArray(array, size) << '\n';
}

int32_t Fibonacci(int32_t number) {
    if (number <= 1)
    {
        return number;
    }
    return Fibonacci(number - 1) + Fibonacci(number - 2);
}

int32_t SumFibonacci(int32_t number)
{
    if (number <= 1) {
        return number;
    }
    return Fibonacci(number) + SumFibonacci(number - 1);
}

void OutputCombineAndSortArraysDescending(int32_t* FirstArray, int32_t size_one, int32_t* SecondArray, int32_t size_two, int32_t* MultiArray)
{
    int32_t i{};
    int32_t j{};
    int32_t g{};

    while (i < size_one && j < size_two)
    {

        if (FirstArray[i] >= SecondArray[j])

        {
            MultiArray[g++] = FirstArray[i++];


        }
        else
        {
            MultiArray[g++] = SecondArray[j++];

        }
    }
    while (i < size_one)
    {
        MultiArray[g++] = FirstArray[i++];
    }
    while (j < size_two)
    {
        MultiArray[g++] = SecondArray[j++];
    }
    OutputSumOfArray(MultiArray, size_one + size_two);
}