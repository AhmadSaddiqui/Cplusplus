#include <iostream>
#include <cmath> 
#include <climits>


using namespace std;


int main()  
{
int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
int maxno = INT_MIN;
int minno = INT_MAX;
for (int i = 0; i < n; i++)
{
    //maxno=max(maxno,arr[i]);
    //minno=min(minno,arr[i]);
    if(arr[i] > maxno)
    {
        maxno = arr[i];
    }
    if(arr[i] < minno)
    {
        minno = arr[i];
    }
  
}
  cout << maxno << " " << minno << endl;

    return 0;
}
