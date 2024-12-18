#include<iostream>
using namespace std;
void swap(int* a,int* b)
{ 
	int temp = *a;
	*a = *b;
	*b = temp;
}
bool changed = true;
void bubbleSort(int* arr, int size)
{
	do
	{
		 changed = false;
		for(int i=0;i<size-1;i++)
			if (arr[i] > arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	int size;
	cout << "请输入数组元素个数：" << endl;
	cin >> size;
	int* arr = new int [size];
	cout << "请依次输入数组元素：" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr, size);
	cout << "排列后的数组为：" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	delete[]arr;
	return 0;
}
