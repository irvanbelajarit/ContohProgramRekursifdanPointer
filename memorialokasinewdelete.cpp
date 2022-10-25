#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int *p=NULL;
	p = new int[5];
	for (int i=0;i<5;i++){
		p[i]=(i+1)*10;
		cout<<p[i]<<" "<<endl;
	}
	
	delete []p;
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<p[i]<<endl;   //isi memori setelah
	}

return 0;	
}
