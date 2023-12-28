#include <bits/stdc++.h>
using namespace std;

string text;
string word;

string s;
int main() {
    cin >> text >> word;
    for(auto x: text) {
        s.push_back(x);

        if(s.size() < word.size()) continue;

        while(s.size() >= word.size()) {
            int a = s.size();
            int b = word.size();
            if(s.substr(a-b, b) == word) {
                for(int i=0; i<b; i++) s.pop_back();
            }
            else {
                break;
            }
        }
    }
    cout << s;
    return 0;
}