#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin>>a[i][j];
        }
        if(a[i][1]+a[i][0]+a[i][2]>=2)
            ans++;
    }
    cout<<ans;
    return 0;
}
