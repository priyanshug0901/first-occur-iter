#include <iostream>
using namespace std;

int search(int a[],int l,int h,int key){
 int mid;
  while(l<=h){
  mid=(l+h)/2;
  if(a[mid]>key)
    h=mid-1;
  
else if(a[mid]<key){
  l=mid+1;
}
else{
  if(mid==0 || a[mid-1]!=key)
     return mid;
  else
  h=mid-1;
}

}
return -1; //while
}


int main() {
 int n;
 cin>>n;
 int a[n];

for(int i=0;i<n;i++)
  cin>>a[i];
int key;
cin>>key;

int l=0,h=n-1;
int val=search(a,0,n-1,key);
cout<<val;
}