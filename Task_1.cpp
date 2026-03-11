#include<iostream>
using namespace std;
template<typename T>
void selectionSort(T a[],int size) {
	int min = 0;
	for (int i = 0; i < size-1; i++)
	{
		min = i;
		for (int j = i+1; j < size; j++)
		{
			if (a[j]<a[min])
			{
				min = j;
			}

		}
		T temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}
template<typename T>
void printArray(T a[],int size) {
	for (int i = 0; i < size; i++)
	{
		cout << a[i]<<", ";
	}
}
int main() {
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray,5);
	cout << endl;
	selectionSort(intArray,5);
	cout << "Sorted integer array: ";
	printArray(intArray,5);
	cout << endl;

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printArray(stringArray,4);
	cout << endl;
	selectionSort(stringArray,4);
	cout << "Sorted string array: ";
	printArray(stringArray,4);

	return 0;
}


