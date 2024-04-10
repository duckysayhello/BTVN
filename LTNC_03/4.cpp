#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) 
{
    int k=0,n=s.length();
    for(int i=0;i<n;i++) if (isupper(s[i])) k++;
    if (isupper(s[0])) k+=0;
    else k++;
    cout<<isalpha('a')<<" "<<isalpha('A');
    return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
