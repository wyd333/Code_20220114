#include<iostream>
using namespace std;
int main(){
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++){
		cout << f1 << " " << f2 << " ";
		f1=f1+f2;
		f2=f2+f1;
		if(i%2==0){
			cout << endl;
		}
	}
	return 0;
}
