#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={4,3,2,1,2,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>count(n,0);
    for(int i=0; i<n; i++)
    {
      count[arr[i]-1]++;
    }
    //missing
    for(int i=0; i<n; i++)
    {
     if(count[i]==0)
     {
      cout<<"missing "<<i+1<<endl;
      break;
     }
    }
    //repeat
    for(int i=0; i<n; i++)
    {
      if(count[i]==2)
      {
        cout<<"repeating "<<i+1;
        break;
      }
    }
}