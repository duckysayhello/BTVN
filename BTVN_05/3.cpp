#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,x,k,a,b;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>k>>a>>b;
    v.erase(v.begin()+k-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    int size=v.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++) cout<<v[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
