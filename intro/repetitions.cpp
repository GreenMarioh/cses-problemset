#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int i = 1, j = 1;
    int res = 1;
    while(i < n && j < n){
        int tmp = 1;
        j = i;
        while(s[j] == s[j-1]){
            tmp++; j++;
        }
        i = j+1;
        res = max(tmp, res);
    }
    cout << res;
    return 0;

}