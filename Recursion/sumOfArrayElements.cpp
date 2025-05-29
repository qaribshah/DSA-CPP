#include <iostream>
using namespace std;

int sumOfArrayElements(int* arr, const int& size);

int main()
{
    int numberArr[5] = {1, 2, 3, 4, 5};
    int sum = sumOfArrayElements(numberArr, 5);
    cout << sum << endl;
    return 0;
}
int sumOfArrayElements(int* arr, const int& size)
{
    if(size == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[size - 1] + sumOfArrayElements(arr, size - 1);
    }

}