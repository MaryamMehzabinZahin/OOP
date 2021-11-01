
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numOfqueries;
    cin>>numOfqueries;
    map<string,int> umap;
    while(numOfqueries--)
    {
        int choice;
        cin>>choice;
        string x;
        cin>>x;
        int num;
        if(choice==1)
        {
            cin>>num;
            umap[x]+=num;
        }
        else if(choice==2)
        {
            umap.erase(x);
        }
        else if(choice==3)
        {
            cout<<umap[x]<<endl;
        }

    }
    return 0;
}
