#include<iostream>
#include<conio.h>

using namespace std;

void sortedArray(int arr[], int size)
{
	cout << endl << "\t\t";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void selectionSort(int arr[], int size)
{
	int temp;
	
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void unsortedArray(int arr[], int size)
{
	
	cout << "\n\t\tEnter your " << size << " elements: \n\t\t";
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		
	cout << "\t\tYour unsorted data:\n\t\t" ;
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";		
	}
}

int main()
{
	int size, arr[100];
	
	cout << "~~~~~~~~~~~~~~~~~~~~SELECTION SORTING~~~~~~~~~~~~~~~~~~~~\n\n";
	
	cout << "\t\tEnter the array size: ";
	cin >> size;
	
	unsortedArray(arr,size);
	
	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	selectionSort(arr, size);
	
	cout << "\n\t\tAfter using selection sort...\n";
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\n\t\tYour sorted data:";
	sortedArray(arr, size);
	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
getch();	
return 0;
}
