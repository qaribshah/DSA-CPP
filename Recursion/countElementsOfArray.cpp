// arr = [10, 20, 30]
// size = 3
#include <iostream>
using namespace std;
int sizeOfArray(int* arr, const int& size);
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sizeOfArray(arr, 8);
    return 0;
}
int sizeOfArray(int* arr, const int& size)
{
    if(size == 1)
    {
        return 1;
    }
    return 1 + sizeOfArray(arr, size - 1);
}
//for (int i = size; i >= 0; i--)
// {
// count++;
// }