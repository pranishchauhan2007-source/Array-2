#include<iostream>
//#include<vector>
using namespace std;

int main()
{
    int arr[]={4,3,2,1,2,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    //vector<int>count(n,0);
    for(int i=0; i<n; i++)
    {
      arr[i]--;
    }
    for(int i=0; i<n; i++)
    {
     arr[arr[i]%n]+=n;
     
    }
    //missing 
    for(int i=0; i<n; i++)
    {
      if(arr[i]/n==0)
      {
        cout<<"missing "<<i+1<<endl;
        break;
      }
    }
    //repeating 
    for(int i=0; i<n; i++)
    {
      if(arr[i]/n==2)
      {
        cout<<"repeating "<<i+1<<endl;
        break;
      }
    }
}