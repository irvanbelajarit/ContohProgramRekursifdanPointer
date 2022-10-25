#include<iostream>

using namespace std;

int rekFaktorial(int n){
	if(n==0 or n==1)  //base case
	return 1;
	else
	return n * rekFaktorial(n-1);
}

int itFaktorial(int n){
	int fak = 1;
	if(n!=0){
		for(int i=1; i<=n;i++){
			fak = fak *i;	
		}
		
	}
	return fak;
	
}

int main(){
	int n;
	cout<<"masukan n : "; cin>>n;
	cout<<n <<" rekursif = "<< rekFaktorial(n)<<endl;
	cout<< n <<" iteratif = "<<itFaktorial(n);
	return 0;
}
