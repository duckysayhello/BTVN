#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAX=1005;
bool isValidPosition(int x, int y, char a[MAX][MAX], int r, int c)
{
    return 0<=x && r > x && 0<=y && c > y;
}
int main() {

  int w,h;
  cin>>w>>h;
  char a[MAX][MAX];
  for(int i=0; i <h; i++)
  {
      for(int j=0; j<w; j++)
      {
          cin>>a[i][j];

      }
  }
  for(int i=0; i<h; i++)
  {
        for(int j=0; j<w; j++)
        {
            if(a[i][j]=='Y')
            {

                if(isValidPosition(i+1,j,a, h, w) && a[i+1][j]=='E' ) {a[i+1][j]='Y';}
                if(isValidPosition(i+1,j+1,a, h, w) && a[i+1][j+1]=='E' && a[i][j+1]!='R') {a[i+1][j+1]='Y';}
                if(isValidPosition(i+1,j-1,a, h, w) && a[i+1][j-1]=='E' && a[i][j-1]!='R') {a[i+1][j-1]='Y'; }

            }
        }
  }
 for(int k=0; k< w; k++ )
 {
     if(a[h-1][k]=='Y') {cout<<"YES"; return 0;}
 }
    cout<<"NO";
    return 0;
}