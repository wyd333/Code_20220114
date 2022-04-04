#include<iostream>
using namespace std;
int main(){
	int f1=1,f2=1,f3;
	int i;
	cout << f1 << f2 << "  ";
	for(i=1;i<=38;i++){
		f3=f1+f2;
		cout << f3 << "  ";
		f1=f2;
		f2=f3;
	}
	return 0;
}
