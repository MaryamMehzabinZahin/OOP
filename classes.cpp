
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
    int scores[5];
public:
    void input()
    {
        int num;
        for(int i=0;i<5;i++)
        {
            cin>>num;
            scores[i]=num;
        }
    }
    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=scores[i];
        }
        return sum;
    }
};
