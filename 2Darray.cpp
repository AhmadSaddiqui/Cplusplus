#include<iostream>

using namespace std;

int main()
{
int n,m,x;

cout << "enter rows and columns" << endl;
cin>>n>>m;
cout << "enter element to find" << endl;
cin>>x;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]=x)
        {
        cout<<arr[i][j];
        }
    }
    cout<<"\n";
}
return 0;
}