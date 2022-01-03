#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=1; i<=n; ++i)
		cin>>a[i];
	for(int i=1; i<=n; ++i)
		cout<<a[n-i+1]<<" ";
	return 0;
}
