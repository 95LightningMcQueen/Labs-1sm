#include <iostream>

void InputNumber(int32_t&); //Ввод числа
bool CheckNatural(int32_t); //Проверка на натуральность
void FindMaxDigit(int32_t); 
void MakeBordersWithMaxDigit(int32_t);
 

int32_t main() 
{
    int32_t number{};
    InputNumber(number);
    if (!CheckNatural(number))
    {
        std::cout << "The number is not natural :c";
    }
    else
    {
        FindMaxDigit(number);
        MakeBordersWithMaxDigit(number);
    }
    return 0;
}

void InputNumber(int32_t& number) //ввод числа
{
    std::cout << "Input your number: ";
    std::cin >> number;
}

bool CheckNatural(int32_t number) //проверка на натуральность
{
    return number > 0;
}

void FindMaxDigit(int32_t number)
{
    int32_t copyNumber = number;
    int32_t counter{};
    int32_t maxCounter{};
    int32_t maxDigit{};
    for (int32_t digit{}; digit <= 9; ++digit)
    {
        while (number > 0)
        {
            if (number % 10 == digit)
            {
                ++counter;
            }
            number /= 10;
        }
        if (counter > maxCounter)
        {
            maxDigit = digit;
            maxCounter = counter;
        }
        number = copyNumber;
        counter = 0;
    }
    std::cout << maxDigit;
    std::cout << "Final number: " << maxDigit << number << maxDigit;
}

void MakeBordersWithMaxDigit(int32_t number) //Добавляет слева и справа в записи числа цифру, повторяющуюся максимальное число раз
{
    std::cout << "\nFinal number: ";
    FindMaxDigit(number);
    int32_t finalNumber{};

}