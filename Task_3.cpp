#include<iostream>
using namespace std;
template<typename T>
int BinarySearch(T a[], T n, int size) {
	int low = 0, high = size - 1, mid = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (n == a[mid])
		{
			return mid;
		}
		else if (a[mid] < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
template<typename T>
void printSearchResult(int a, T x) {
	if (a == -1)
	{
		cout << "Value: " << x << " Not Found..!" << endl;
	}
	else
	{
		cout << "Value: " << x << " Found...! at Index: " << a << endl;
	}
}
int main() {
	int arr[5] = { 11, 12, 22, 25, 64 };
	int intKey = 78;
	int intIndex = BinarySearch<int>(arr, intKey, 5);
	printSearchResult<int>(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
	float floatKey = 1.62;
	int floatIndex = BinarySearch<float>(floatArray, floatKey, 4);
	printSearchResult<float>(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "banana", "grape", "orange" };
	string stringKey = "grape";
	int stringIndex = BinarySearch<string>(stringArray, stringKey, 4);
	printSearchResult<string>(stringIndex, stringKey);

	return 0;
}

