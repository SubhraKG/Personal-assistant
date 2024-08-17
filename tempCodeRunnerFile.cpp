#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin>>N;
    int rem=0;
    int n=N;
    vector<int> ans;
    while(n!=0)
    {
        rem=n%2;
        ans.push_back(rem);
        n=n/2;

    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    cout << endl;
 
    return 0;
    }