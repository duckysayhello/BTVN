#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    set<int> set;
    int q,x,y;
    cin>>q;
    while(q>0)
    {
        cin>>y>>x;
        if (y==1) set.insert(x);
        if (y==2) set.erase(x);
        if (y==3)
        {
            if (set.find(x)!=set.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        q--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



