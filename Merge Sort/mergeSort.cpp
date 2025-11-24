#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&arr, int low, int mid, int high)
{
    // this function is in O(n)
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    arr[i] = temp[i - low];
}
void mergeSort(vector<int> &arr, int low, int high)
{
    // this function is in O(log n)
    if (low >= high)
    {
        return;
    }
    // finding the mid
    int mid = (low + high) / 2;
    // recursively sort left half
    mergeSort(arr, low, mid);
    // recursively sort right half
    mergeSort(arr, mid+1, high);
    // merge the two sorted arr
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {5, 2, 8, 4, 1};
    mergeSort(arr, 0, arr.size() - 1);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}