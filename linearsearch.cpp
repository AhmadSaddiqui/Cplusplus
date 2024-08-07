#include <iostream>
#include <cmath> 
#include <climits>


using namespace std;
int linearsearch(int n, int key, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main()  
{
int n;
cin >> n;
int arr[n];
int key;
cin>>key;

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}

cout <<linearsearch(n,key,arr);
    return 0;
}

//time complexity is o*n
