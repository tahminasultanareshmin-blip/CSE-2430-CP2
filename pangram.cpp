#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i = 0; i<n; i++)
    {
       s[i] = tolower(s[i]);  ///for converting a string in lowercase.
    }
    sort(s.begin(), s.end());

    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }

    if(count == 26)
        cout<< "YES";
    else
        cout<< "NO";

    return 0;
}
