
// https://www.codingninjas.com/codestudio/problems/one-strings_1467114

int findOneStrings(string & s) {
    int ans = 0;
    int c = 0;
  
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='1')
            c++;
        else {
            ans += c*(c+1)/2;
            c = 0;            
        }
    }
    
    if (c>0)
        ans += c*(c+1)/2;
    
    return ans;
}

