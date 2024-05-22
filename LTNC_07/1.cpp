#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int left, int right, int n)
{
    if (left>right) return -1;

    int mid=(left+right)/2;

    if (arr[mid]==n) return mid;

    if (arr[mid]>n) return search(arr,left,mid-1,n);
    else return search(arr,mid+1,right,n);
}

int main()
{
    vector<int> arr={1,20,32,45,54,67,78,82,93,1000};
    int n=arr.size();
    int x;
    cin>>x;
    int res=search(arr,0,n-1,x);
    if (res==-1) cout<<"Not Found";
    else cout<<res;
}
