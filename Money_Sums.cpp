// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	return inv_count;
}

// Driver Code
int main()
{
	// int arr[] = { 1, 3, 2, 3, 2,1 };
    // int n;
    //  cin>>n;
     int arr[200];
     for(int i=0;i<100;i++) {arr[i]=i+1;
     arr[(2*100)-i-1]=arr[i];
     };
    //  for(int i=1;i<=100;i++)
    //  arr[i-1]=i;
     

	int nm = sizeof(arr) / sizeof(arr[0]);
	cout << " Number of inversions are "
		<< getInvCount(arr, nm);
	return 0;
}

// This code is contributed
// by Akanksha Rai
