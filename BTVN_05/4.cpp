#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,x,k;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<n;i++) cout<<v[i]<<" ";
    //cout<<endl;
    cin>>k;
    while(k>0)
    {
        cin>>x;
        //cout<<x<<endl;
        auto low=lower_bound(v.begin(),v.end(),x);
        if ((low!=v.end())&&(*low==x)) cout<<"Yes "<<1+distance(v.begin(),low)<<endl;
        else cout<<"No "<<1+distance(v.begin(),low)<<endl;
        k--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
