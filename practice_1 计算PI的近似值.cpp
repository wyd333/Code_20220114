#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double addNumber;
	int n;
	int sign=1;
	double sum=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		addNumber=1.0/(2*i-1)*sign;

		if(fabs(addNumber)<0.000001){
			break;
		}else{
		sum += addNumber;
		sign=-sign;
		}
	}
//	计算第1项
//	分子是1 分母是2*1-1  符号是1
//	如果第一项绝对值小于0.000001
//    不干了
//	计算第2项
//	分子是1 分母是2*2-1  符号是-1
//	如果第二项绝对值小于0.000001
//	不干了
//	计算第3项
//	分子是1 分母是2*3-1  符号是1
//	如果第三项绝对值小于0.000001
//	不干了
//	计算第n项
//	分子是1 分母是2*n-1  符号是
	double PI;
	PI=4*sum;
	cout << "addnumber = " << addNumber << endl;
	cout << "sum = " << sum << endl;
	cout << "PI ≈ " << PI << endl;
	return 0;
}
