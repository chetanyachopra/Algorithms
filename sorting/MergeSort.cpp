#include<iostream>
using namespace std;

void merge(int *a,int l,int middle,int r)
{
	int n1=middle-l+1,n2=r-middle;
	int L[n1],R[n2];
	int i=0,j=0,k;
	
	for(i=0;i<n1;i++)L[i]=a[l+i];
	for(j=0;j<n2;j++)R[j]=a[middle+1+j];
	
	i=0;j=0;k=l;
	
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}

void mergeSort(int *a,int l,int r)
{
	if(l>=r)return;
	
	int middle=l+(r-l)/2;
	mergeSort(a,l,middle);
	mergeSort(a,middle+1,r);
	
	merge(a,l,middle,r);
}

void printArray(int *a,int size)
{
	int i;
	for(i=0;i<size-1;i++)cout<<a[i]<<" ";
}

int main()
{
	int a[]={1,4,2,3,5,6,7,2,4,2};
	int size=sizeof(a)/sizeof(a[0]);
	mergeSort(a,0,size-1);
	printArray(a,size);
}
