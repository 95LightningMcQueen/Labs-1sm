#include <iostream>

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 }; // ���������� �������

    for (int number : numbers) { // ���� foreach ��� �������� �� ��������� �������
        std::cout << number << std::endl; // ������� ������ ������� �������
    }

    return 0;
}


//for (��� ������� : ���������) 
//{
//    ���, ������� ����������� ��� ������� �������� 
//}