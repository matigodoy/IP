#include<iostream>
#include<stdlib.h>

using namespace std;
const int b=10;
int main()
{
  int a[b];
  int acum1=0,acum2=0;
  
  for(int i=0;i<b;i++)
  {
  cout<<"ingrese un numero"<<endl;
  cin>>a[i];
  }
  
  for(int i=0;i<b;i++)
  {
    if(a[i]==a[i])
    acum1+=a[i];
  }  
  
  for(int i=0;i<b;i++)
  {
    if(a[i]<0)
    acum2+=a[i];
  }  
  
  cout<<"positivos "<<acum1<<endl;
  cout<<"negativos "<<acum2<<endl;
}
