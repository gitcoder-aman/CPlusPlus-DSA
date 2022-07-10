/*
    Time Complexity = O(K * (log(arrSum)))
    Space Complexity = O(1)

    Where N is the number of elements in the given array/list and arrSum is the sum of the array elements.
*/

#include <limits.h>
#include<iostream>
using namespace std;
//    Return the maximum element from the array.
int findMax(int arr[], int n)
{
	int max = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

//    Return the sum of the elements in the array.
int findSum(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

//    Find minimum required painters for given maxlen which is the maximum length a painter can paint.
int countPainters(int arr[], int maxLen,int n)
{
	int  totalSum = 0, painters = 1;

	for (int i = 0; i < n; i++)
	{
		totalSum += arr[i];

		if (totalSum > maxLen)
		{
			totalSum = arr[i];
			painters++;
		}
	}

	return painters;
}

int findLargestMinDistance(int arr[], int k,int n)
{
	int low = findMax(arr, n);
	int high = findSum(arr, n);

	while (low < high)
	{
		int mid = low + (high - low) / 2;
		int reqPainters = countPainters(arr, mid,n);

		//    Find better optimum in lower half here mid is included because we may not get anything better.
		if (reqPainters <= k)
		{
			high = mid;
		}
		
		//    Find better optimum in upper half here mid is excluded because it gives required Painters > k, which is invalid.
		else
		{
			low = mid + 1;
		}
	}

	return low;
}
int main(){

     int n = 4;
     int k = 2; // no of the painting available
     int arr[n] = {10,20,30,40};
     cout << findLargestMinDistance(arr,k,n);
}