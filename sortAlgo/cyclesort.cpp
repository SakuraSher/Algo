#include <iostream>
using namespace std;

void cycleSort(int arr[],int size)
{
	int i = 0;
	while (i < size)
	{
		if (arr[i] - i > 1)
		{
			swap(arr[arr[i] - 1], arr[i]);
		}
		else
		{
			i++;
		}
	}
	
	
}
void printArray(int a[],int size )
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i]<<"**";
	}
	cout << endl;
}

int main()
{
	int arr[] = { 3, 5, 1, 2, 4,6,8,7 };
	//cout << size(arr);
	printArray(arr, size(arr));
	cycleSort(arr,size(arr));
	printArray(arr,size(arr));
	
	return 0;
}