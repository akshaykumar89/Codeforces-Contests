// C++ program to find largest subarray with equal number of
// 0's and 1's.

#include <bits/stdc++.h>
using namespace std;

// Returns largest subarray with equal number of 0s and 1s

pair<int , int> maxLen(string s)
{    int n=s.size();
     vi arr(n);
     ilop(i,0,n)
     {
        if(s[i]=='0') arr[i]=0;
        else arr[i]=1;
     }
	unordered_map<int, int> hM;
	int sum = 0; 
	int max_len = 0;
	int ending_index = -1;

	for (int i = 0; i < n; i++)
		arr[i] = (arr[i] == 0) ? -1 : 1;
	for (int i = 0; i < n; i++) {
		

		sum += arr[i];


		if (sum == 0) {
			max_len = i + 1;
			ending_index = i;
		}

	

		if (hM.find(sum) != hM.end()) {
			if (max_len < i - hM[sum]) {
				max_len = i - hM[sum];
				ending_index = i;
			}
		}
		else 
			hM[sum] = i;
	}

	for (int i = 0; i < n; i++)
		arr[i] = (arr[i] == -1) ? 0 : 1;

	
		return {ending_index - max_len + 1, ending_index};

}

// Driver method

int main()
{
	int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	maxLen(arr, n);
	return 0;
}

// This code is contributed by Aditya Goel
