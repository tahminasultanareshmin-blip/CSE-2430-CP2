#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    sort(s.begin(), s.end());
    int a[150] = {0};
    for(int i = 0; i<s.size(); i++)
    {
        a[s[i]]++;
    }
    for(int i = 65; i<=122; i++)
    {
        if(a[i] !=0)
            cout<<char(i)<<" "<<a[i]<<"\n";
    }

    return 0;
}
