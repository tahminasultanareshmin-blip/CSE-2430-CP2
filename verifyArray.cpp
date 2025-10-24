#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,s,i,ar[100000];
    cin >> t >> s;
    int fr[s+2]={0};
    for(i=1;i<=t;i++){
        cin>>ar[i];
    }
    for(i=1;i<=t;i++){
        fr[ar[i]]++;
    }
    for(i=1;i<=s;i++){
        cout<<fr[i]<<endl;
    }
    return 0;
}
