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
//	�����1��
//	������1 ��ĸ��2*1-1  ������1
//	�����һ�����ֵС��0.000001
//    ������
//	�����2��
//	������1 ��ĸ��2*2-1  ������-1
//	����ڶ������ֵС��0.000001
//	������
//	�����3��
//	������1 ��ĸ��2*3-1  ������1
//	������������ֵС��0.000001
//	������
//	�����n��
//	������1 ��ĸ��2*n-1  ������
	double PI;
	PI=4*sum;
	cout << "addnumber = " << addNumber << endl;
	cout << "sum = " << sum << endl;
	cout << "PI �� " << PI << endl;
	return 0;
}
