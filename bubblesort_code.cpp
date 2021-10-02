//BUBBLE SORT= repeatedly swap two adjacent elements if they are in wrong order(L>R-WRONG ORDER)
//we get sorted array of n elements after n-1 iterations
//ith iteration= n-i 

#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];
cout<<"enter values of array: ";
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	}	

int counter=1; //for iteration
while(counter<n){
	for(int i=0;i<n-counter;i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
		}
	}
	counter++; //it will help to move to the next iteration
}
cout<<"sorted array: ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<endl;
}
return 0;
}

