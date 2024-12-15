#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx= 5e3 +123; // 5123
int main()
{
    optimize();

    int n;
    cin>>n;
    int arr[mx];

    map<int,int>freq;



        for( int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }

    int ans=0;

    for(int j=0;j<n;j++)
    {
        ans=max(ans, freq[arr[j]]);
    }
    cout<<ans<<endl;

}
