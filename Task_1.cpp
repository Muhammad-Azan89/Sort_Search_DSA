#include<iostream>
using namespace std;
template<typename T>
int linearSearch(T a[],T n,int size) {
	bool flag; false;
	int index=0;
	for (int i = 0; i < size; i++)
	{
		if (n == a[i])
		{
			return i;
		}
	}
	return -1;
}
template<typename T>
void printSearchResult(int a,T x) {
	if (a<0)
	{
		cout << "Value: "<< x<<" Not Found..!" << endl;
	}
	else
	{
		cout << "Value: " << x << " Found...! at Index: " << a << endl;
	}

}
int main() {
	int arr[5]= { 64, 25, 12, 22, 11 };
	int intKey=78;
	int intIndex = linearSearch<int>(arr, intKey,5);
	printSearchResult<int>(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch<float>(floatArray, floatKey,4);
	printSearchResult<float>(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch<string>(stringArray, stringKey,4);
	printSearchResult<string>(stringIndex, stringKey);

	return 0;
}

