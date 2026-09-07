#include <iostream>
using namespace std;

int main()
{
int mp[3][3]={4,8,15,18,22,26,36,40,45};
int p=3,m=3,x=22;
int i=0, j=m-1;
while (i<p&&j>=0)
{
 if(mp[i][j]==x)
 {
  cout<<"elements found";
  return 0;
 }
 else if(mp[i][j]<x)
 {
  i++;
 }
  else
 {
  j--;
 }
}
cout<<"elements not found";
return 0;
}