//#include <iostream>
//using namespace std;
//
//int search(int* arr, const int& size, const int& value);
//
//int main()
//{
//	cout << "Hello World" << endl;
//
//	int arr[10] = { -1, 1, 2, 3, 4, 5, 6, 7, 80, 9 };
//	cout << search(arr, 10, 8) << endl;
//	return 0;
//}
//int search(int* arr, const int& size, const int& value)
//{
//	//we are going to implement binary search
//	int end = size - 1;
//	int start = 0;
//	int mid = 0;
//	while (start <= end)
//	{
//		mid = (start + end) / 2;
//		if (arr[mid] == value)
//		{
//			return mid;
//		}
//		else if (arr[mid] < value)
//		{
//			start = mid + 1;
//		}
//		else
//			end = mid - 1;
//	}
//	return -1;
//}