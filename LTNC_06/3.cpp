#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    private:
    int s1,s2,s3,s4,s5;
    
    public:
    void input()
    {
        int sc1,sc2,sc3,sc4,sc5;
        cin>>sc1>>sc2>>sc3>>sc4>>sc5;
        s1=sc1;
        s2=sc2;
        s3=sc3;
        s4=sc4;
        s5=sc5;
    }
    
    int calculateTotalScore() const
    {
        return s1+s2+s3+s4+s5;
    }  
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
