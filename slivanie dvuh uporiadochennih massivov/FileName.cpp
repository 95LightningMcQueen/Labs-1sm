#include <iostream>

const int32_t MAX_SIZE = 100;

// ��������� �������
void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
bool CheckSize(int32_t);
void MergeSortedArrays(const int32_t*, int32_t, const int32_t*, int32_t, int32_t*, int32_t&);

// ������� �������
int main()
{
    int32_t array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE];
    int32_t size1{}, size2{}, mergedSize{};

    // ���� ������� �������
    std::cout << "Input size of the first array: ";
    std::cin >> size1;
    if (!CheckSize(size1))
    {
        std::cout << "Wrong size :c\n";
        return 1;
    }
    std::cout << "Input elements of the first array in sorted order:\n";
    InputArray(array1, size1);

    // ���� ������� �������
    std::cout << "Input size of the second array: ";
    std::cin >> size2;
    if (!CheckSize(size2))
    {
        std::cout << "Wrong size :c\n";
        return 1;
    }
    std::cout << "Input elements of the second array in sorted order:\n";
    InputArray(array2, size2);

    // ������� ��������
    MergeSortedArrays(array1, size1, array2, size2, mergedArray, mergedSize);

    // ����� ������������� �������
    std::cout << "Merged sorted array:\n";
    OutputArray(mergedArray, mergedSize);

    return 0;
}

// �������� ������� �������
bool CheckSize(int32_t size)
{
    return size >= 0 && size < MAX_SIZE;
}

// ���� �������
void InputArray(int32_t* array, int32_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

// ����� �������
void OutputArray(int32_t* array, int32_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

// ������� ��� ������� ���� ������������� ��������
// ��������� �� ������ � ��� ������ ��� ��������� (��� ������� �������)
void MergeSortedArrays(const int32_t* array1, int32_t size1, const int32_t* array2, int32_t size2, int32_t* mergedArray, int32_t& mergedSize)
{
    int32_t i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] <= array2[j])
        {
            mergedArray[k++] = array1[i++];
        }
        else
        {
            mergedArray[k++] = array2[j++];
        }
    }

    // ����������� ���������� ��������� �� ������� �������
    while (i < size1)
    {
        mergedArray[k++] = array1[i++];
    }

    // ����������� ���������� ��������� �� ������� �������
    while (j < size2)
    {
        mergedArray[k++] = array2[j++];
    }

    mergedSize = k; // ��������� ��������� ������� ������������� �������
}
