#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) 
{
    int k1=0,k2=0;
    if (p==1) return k1;
    int a=1,b=n;
    bool check=0;
    if (n%2!=0)
    {
        if ((p==n)||(p==n-1)) return k2;
    }
    else if (p==n) return k2;
    if (n%2==0) b++;
    while (check==0)
    {
        a+=2;
        b-=2;
        k1++;
        k2++;
        if ((p==a)||(p==a-1)||(p==b)||(p==b-1)) 
        {
            check=1;
            return k1;
        } 
    }
    return k2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
