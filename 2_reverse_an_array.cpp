#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int size) 
{
	for (int i = 0; i < size/2; ++i)
	{
		int temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}

void print_array(int arr[],  int size) 
{
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int size=sizeof(arr)/sizeof(int);
	print_array(arr, size);
	reverse_array(arr, size);
	print_array(arr,size);
	return 0;
}