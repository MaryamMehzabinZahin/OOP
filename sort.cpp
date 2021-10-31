#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>vec;
    int n, nums;
    cin >> n;

    while(n>0)
    {
        cout<<"n "<<n<<endl;
        cin>>nums;
        vec.push_back(nums);
        n--;
    }
    sort(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
