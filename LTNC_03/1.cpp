#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    string s3=s1.substr(1,s1.length()-1);
    string s4=s2.substr(1,s2.length()-1);
    s3=s2[0]+s3;
    s4=s1[0]+s4;
    cout<<s3<<" "<<s4;
    return 0;
}
