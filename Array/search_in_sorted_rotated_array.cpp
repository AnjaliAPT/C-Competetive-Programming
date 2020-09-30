#include<iostream>
using namespace std;
int search(int a[],int n,int lo, int up,int k){
    if(lo>up)
     return -1;
    int mid=(lo+up)/2;
    if(a[mid]==k)
     return mid;
    if(a[mid]>=a[lo]){
        if((a[mid]>=k)&&(a[lo]<=k)){
            return search(a,n,lo,mid-1,k);
        }
        else{
            return search(a,n,mid+1,up,k);
        }
    }
      if(a[mid]<=a[up]){
        if((a[mid]<=k)&&(a[up]>=k)){
            return search(a,n,mid+1,up,k);
        }
        else{
            return search(a,n,lo,mid-1,k);
        }
      }
}
int main() {
	//code
	const int n,k;
	cin>>n;  //size of array
	int a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	cin>>k; //element to be found
	int ans=search(a,n,0,n-1,k);
	cout<<ans<<"\n";
	return 0;
}