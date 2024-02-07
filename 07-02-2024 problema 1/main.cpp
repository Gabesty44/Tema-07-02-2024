#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,a[100][100],minim,maxim;
    cin>>n>>m;
    cin>>a[0][0];
    minim=maxim=a[0][0];
    for(j=1;j<m;j++)
    {
        cin>>a[0][j];
        if(a[0][j]<minim)
            minim=a[0][j];
        if(a[0][j]>maxim)
            maxim=a[0][j];
    }
    for(i=1;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<minim)
                minim=a[i][j];
            if(a[i][j]>maxim)
                maxim=a[i][j];
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(a[i][j]==minim)
                minim=i;
            if(a[i][j]==maxim)
                maxim=i;
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            swap(a[minim][j],a[maxim][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
