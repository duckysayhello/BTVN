#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    int q,x,y;
    string s;
    map<string,int> map;
    cin>>q;
    while(q>0)
    {
       cin>>x;
       if (x==1)
       {
           cin>>s>>y;
           map[s]+=y;
       } 
       else if (x==2) 
       {
           cin>>s;
           map[s]=0;
       }
       else 
       {
           cin>>s;
           cout<<map[s]<<endl;
       }
       q--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



