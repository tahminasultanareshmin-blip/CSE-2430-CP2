#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            freq[c - 'a']++;
        }

        int red = 0;
        int single = 0;

        for(int i = 0; i < 26; i++) {
            if(freq[i] >= 2) red++;
            else if(freq[i] == 1) single++;
        }

        int k = red + single / 2;
        cout << k << endl;
    }

    return 0;
}
