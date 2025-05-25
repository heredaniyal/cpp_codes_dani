#include<iostream>
using namespace std;

void rotate(int arr[],int size, int pos)		// getting the array, size, and the number of shits
{
	int stored[pos];		// making an array to store the shifting values
	
	for(int i=size-pos, c=0; i<size; i++, c++)		// running this code the number of valeus to be moved to front times  
	{
		stored[c] = arr[i];		// storing the values that are to be moved to the front
	}
	
	cout<<"stored value: "<<stored[0];
	
	int run = 0;
	int temp;
	
	while(run < pos)		// for the values more than 1 it will shift the 
							// values to the right the number of pos times
	{
		for(int i=size-1; i > -1; i--)
		{
			temp = arr[i];
			cout<<"arr-1: "<<arr[i-1];		// moving values to the right one at a time
			arr[i] = arr[i-1];
		}
		run++;
	}
	
	for(int i=0; i<pos; i++)
	{
		arr[i] = stored[i];		// now storing the stored values at the start of the array
	}
	cout<<"\nAfter Rotating\n";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" --> ";		// printing function
	}
	
}

int main()
		{
			int s;
			cout<<"Enter the size of Array"; // asking for the size of the array
			cin>>s;
			int array[s];
			int d;
			for(int i=0; i<s; i++)
			{
				cout<<"Enter your "<<i+1<<" value: ";
				cin>>d; 								// passing values in the array
				array[i] = d;
			}
			int r;
			cout<<"ENter the number of values you wish to rotate right: ";
			cin>>r;
			
			rotate(array, s, r);		// calling the rotate function
		}
