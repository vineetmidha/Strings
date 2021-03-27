
// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068cca3

#include<bits/stdc++.h>

using namespace std;

void solve(int test)
{
    cout << "Case #" << test << ": ";
    
    int n, k;
    string s;
    cin >> n >> k >> s;

    int c = 0;

    for (int i=0; i<n/2; i++){
        if (s[i]!=s[n-1-i]){
            c++;
        }
    }

    cout << abs(k-c) << endl;
}

signed main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve(i);

    }
    
    return 0;
}
