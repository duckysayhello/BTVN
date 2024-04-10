#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int maxx=0;
    maxx=max(maxx,a);
    maxx=max(maxx,b);
    maxx=max(maxx,c);
    maxx=max(maxx,d);
    return maxx;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
