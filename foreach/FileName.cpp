#include <iostream>

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 }; // Объявление массива

    for (int number : numbers) { // Цикл foreach для итерации по элементам массива
        std::cout << number << std::endl; // Выводит каждый элемент массива
    }

    return 0;
}


//for (тип элемент : контейнер) 
//{
//    Код, который выполняется для каждого элемента 
//}