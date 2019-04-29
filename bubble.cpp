#include <iostream>
using namespace std;

int main()
{
	int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting using Bubble sort\n";
	for(int i=1;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nThe array after sorting is:\n";
		for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\nThe total number of comparisions are:"<<(size*(size-1)/2);
}
