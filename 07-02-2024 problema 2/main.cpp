#include <iostream>

using namespace std;

int main()
{
    int n,i,j,suma=0,a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            suma+=a[i][j];
        }
    cout<<suma;
    return 0;
}
