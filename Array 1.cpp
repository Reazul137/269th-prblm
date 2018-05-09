//Write a C++ program to find the largest element of a given
// array of integers.

#include<bits/stdc++.h>
using namespace std;
int find_largest(int nums[], int n)
{
    return * max_element(nums, nums+n);
}
int main()
{
    int nums[] = {
    5,
    4,
    9,
    12,
    8
    };

    int n = sizeof(nums) / sizeof(nums[0]);
     cout << " Original array : ";
     for (int i=0; i<n; i++)
        cout << nums[i] <<"  ";

     cout << "\n Largest element of the said array : " <<find_largest(nums, n);
     return 0;
}
