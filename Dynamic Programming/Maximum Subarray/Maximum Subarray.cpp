#include <bits/stdc++.h>
using namespace std;

// Function to find Maximum subarray sum using
// divide and conquer
int MaximumSum(int A[], int low, int high)
{
	// If array contains only one element
	if (high == low)
		return A[low];

	// Find middle element of the array
	int mid = (low + high) / 2;

	// Find maximum subarray sum for the left subarray
	// including the middle element
	int leftMax = INT_MIN;
	int sum = 0;
	for (int i = mid; i >= low; i--)
	{
		sum += A[i];
		leftMax=max(sum,leftMax);
	}

	// Find maximum subarray sum for the right subarray
	// excluding the middle element
	int rightMax = INT_MIN;
	sum = 0;	// reset sum to 0
	for (int i = mid + 1; i <= high; i++)
	{
		sum += A[i];
		rightMax=max(sum,rightMax);
	}

	// Recursively find the maximum subarray sum for left subarray
	// and right subarray and tale maximum
	int maxLeftRight = max(MaximumSum(A, low, mid),MaximumSum(A, mid + 1, high));

	// return maximum of the three
	return max(maxLeftRight, leftMax + rightMax);
}

int main()
{
	//int arr[] = { 2, -4, 1, 9, -6, 7, -3 };
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

	printf("The Maximum sum of the subarray is: %d\n",MaximumSum(arr,0,n-1));

	return 0;
}
