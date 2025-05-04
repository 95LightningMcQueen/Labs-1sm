#include <iostream>
#include <cmath>
#include <iomanip>

bool CheckNatural(int32_t); //проверка на натуральность
double FirstFunction(double); //первая функция
double SecondFunction(double); //вторая функция
double ThirdFunction(double); //третья функция
double CalculateUsingMethod(double, double, double, double(*)(double), double(*)(double, double, double, double(*)(double))); //функция для вычисления интеграла с использованием различных методов

//методы интегрирования
double RightRectangleMethod(double, double, double, double(*)(double));
double LeftRectangleMethod(double, double, double, double(*)(double));
double MiddleRectangleMethod(double, double, double, double(*)(double));
double TrapezoidMethod(double, double, double, double(*)(double));
double SimpsonMethod(double, double, double, double(*)(double));


int main()
{
    double (*functions[3])(double) = { FirstFunction, SecondFunction, ThirdFunction };
    double (*methods[5])(double, double, double, double(*)(double)) = { RightRectangleMethod, LeftRectangleMethod, MiddleRectangleMethod, TrapezoidMethod, SimpsonMethod };
    int64_t decimalPlaces;
    std::cout << "Enter the number of decimal places: ";
    std::cin >> decimalPlaces;
    if (!CheckNatural(decimalPlaces))
    {
        std::cout << "\nNumber is not natural!";
        return 0;
    }
    else
    {
        double epsilon = 1 * pow(10, -decimalPlaces);
        std::cout << std::fixed << std::setprecision(decimalPlaces);
        double arrayBorders[6] = { 0.0, 1.7, 0.0, 2.0, -2.0, -1.2 };
        {
            for (int32_t numberFunction{ 0 }, borders{ 0 }; numberFunction < 3; ++numberFunction, borders+= 2)
            {
                std::cout << "\nFunction number " << numberFunction + 1 << '\n';
                for (int32_t NumberMethod{ 0 }; NumberMethod < 5; ++NumberMethod)
                {
                    std::cout << "Method number " << NumberMethod + 1 << ": ";
                    double result = CalculateUsingMethod(arrayBorders[borders], arrayBorders[borders + 1], epsilon, functions[numberFunction], methods[NumberMethod]);
                    std::cout << result << '\n';
                }
            }
        }
    }
    return 0;
}


bool CheckNatural(int32_t number)
{
    return (number > 0);
}

double FirstFunction(double x)
{
    return (x * atan(x));
}

double SecondFunction(double x)
{
    return (1 / (1 + sqrt(x)));
}

double ThirdFunction(double x)
{
    return (2 / (1 - (4 * x)));
}

double CalculateUsingMethod(double a, double b, double epsilon, double(*function)(double), double(*method)(double, double, double, double(*)(double)))
{
    double n{ 1 };
    while (abs(method(a, b, n, function) - method(a, b, 2 * n, function)) > epsilon)
    {
        n *= 2;
    }
    return method(a, b, n, function);
}

double RightRectangleMethod(double a, double b, double n, double(*function)(double))
{
    double integral{ 0.0 };
    double h{ (b - a) / n };
    for (int32_t i{ 0 }; i < n; ++i)
    {
        integral += function(a + (i + 1) * h) * h;
    }
    return integral;
}

double LeftRectangleMethod(double a, double b, double n, double(*function)(double))
{
    double integral{ 0.0 };
    double h{ (b - a) / n };
    for (int32_t i{ 0 }; i < n; ++i)
    {
        integral += function(a + i * h) * h;
    }
    return integral;
}

double MiddleRectangleMethod(double a, double b, double n, double(*functoin)(double))
{
    double integral{ 0.0 };
    double h{ (b - a) / n };
    for (int32_t i{ 0 }; i < n; ++i)
    {
        integral += functoin(a + (i + 0.5) * h) * h; 
    }
    return integral;
}

double TrapezoidMethod(double a, double b, double n, double(*function)(double))
{
    double integral{ 0.0 };
    double h{ (b - a) / n };
    for (int32_t i{ 1 }; i < n + 1; ++i)
    {
        integral += (function(a + ((i - 1) * h)) + function(a + i * h)) / 2;
    }
    integral *= h;
    return integral;
}

double SimpsonMethod(double a, double b, double n, double(*function)(double))
{
    double integral = function(a) + function(b);
    double h{ (b - a) / n };
    double firstSum{}, secondSum{};
    for (int32_t i{ 1 }; i <= n; ++i)
    {
        firstSum += function(a + (((2 * i) - 1) * (h / 2.0)));
    }
    for (int32_t i{ 1 }; i <= (n - 1); ++i)
    {
        secondSum += function(a + ((2 * i) * (h / 2.0)));
    }
    integral = ((firstSum * 4.0) + (secondSum * 2.0)) * (h / 6.0);
    return integral;
}