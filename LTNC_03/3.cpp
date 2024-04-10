#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
int convert(string s)
{
    int k=0,l=s.length()-1;
    for(int i=0;i<=l;i++)
    {
        k=k*10+(int(s[i])-48);
        cout<<s[i]<<" "<<k<<endl;
        if ((i==0)&&(s[i]=='0')) k/=10;
    }
    return k;
}

string revert(int n)
{
    string s="";
    while(n>0)
    {
        s=char(n%10+48)+s;
        n/=10;
    }
    return s;
}

string timeConversion(string s) 
{
    string day=s.substr(8,2);
    string time=s.substr(0,2);
    string min=s.substr(3,2);
    string sec=s.substr(6,2);
    string ss="";
    if ((day=="AM")&&(convert(time)==12)) ss="00:"+min+":"+sec;
    else if ((day=="PM")&&(convert(time)==12)) ss=time+":"+min+":"+sec;
    else if (day=="AM") ss=time+":"+min+":"+sec;
    else ss=revert(convert(time)+12)+":"+min+":"+sec;
    cout<<convert(time)<<" "<<time;
    //ss=revert(19);
    return ss;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
