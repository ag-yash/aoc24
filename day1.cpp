#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    unordered_map<int, int>v2;
    int x, y;
    while (true)
    {
        cin >> x;
        if(x==0) break;
        cin >> y;
        v1.push_back(x);
        v2[y]++;
    }
    sort(v1.begin(), v1.end());
    int res=0;
    for(int i=0; i<v1.size(); i++){
        res+=v1[i]*v2[v1[i]];
    }
    cout << res;    
}