#include <iostream>

void Input(int32_t&);
bool IsNatural(int32_t);
bool AreDiff(int32_t);

int main() 
{
    int32_t num{};
    Input(num);
    if (IsNatural(num)) 
    {
        if (AreDiff(num)) 
        {
            std::cout << "Number contains same digits" << '\n';
        }
        else 
        {
            std::cout << "Number do not contains same digits" << '\n';
        }
    }
    else 
    {
        std::cout << "Number is not natural";
    }
}
void Input(int32_t& _num) 
{
    std::cout << "Input natural number: " ;
    std::cin >> _num;
}
bool IsNatural(int32_t _num) 
{
    return _num > 0;
}
bool AreDiff(int32_t _num) 
{
    int32_t cheak{};
    int32_t temp{ _num };
    while (_num) 
    {
        cheak = _num % 10;
        _num /= 10;
        while (_num) 
        {
            if (cheak == (_num % 10)) 
            {
                return 1;
            }
            else 
            {
                _num /= 10;
            }
        }
        _num = temp / 10;
        temp /= 10;
    }
    return 0;
}