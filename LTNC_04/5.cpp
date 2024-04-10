#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n],b[n+1];
    map<int,int> map1;
    map<int,int> map2;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<=n;i++) cin>>b[i];
    sort(b,b+n+1);
    for(int i=0;i<=n;i++) if(a[i]!=b[i])
    {
        cout<<b[i];
        break;
    }
    return 0;
}
