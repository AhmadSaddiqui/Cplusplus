#include<iostream>
using namespace std;

int main()
{
  /*char arr[100] = "hello";
  int i=0;
  while(arr[i]!='\0')
  {
    cout<<arr[i]<<endl;
    i++;
  }*/

  /*char arr[100];
  cin>>arr;
  cout<<arr<<endl;*/

//palindrome
/*int n;
cin>>n;
char arr[n+1];
cin>>arr;
bool check =1;
for(int i=0; i<n; i++)
{
    if(arr[i]!=arr[n-1-i])
    {
        check=0;
        break;
    }

}
if(check==true)
{
    cout<<"palindrome"<<endl;
}
else{
    cout<<"not a palindrome"<<endl;
}*/
//largest word in sentence
int n;
cin >> n;
cin.ignore();

char arr[n+1];

cin.getline(arr,n+1);
cin.ignore();
int i=0;
int currentLength = 0;
int maxLength =0;
while(1)
{
    if(arr[i]==' '||arr[i]=='\0')
    {
        if(currentLength>maxLength)
        {
            maxLength=currentLength;
        }
        currentLength=0;
    }
    else
        currentLength++;
    if(arr[i]=='\0')
    break;
    i++;
}
cout<<maxLength<<endl;
    return 0;
}