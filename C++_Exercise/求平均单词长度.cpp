#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	string str;
	int num = 0; 
	int tol = 0;

	while(cin >> str){
		//printf("�ɹ���ȡ�ַ���\n"); 
		int len = str.size() ;
		//cout << len << endl;
		if(len == 0){
			break;
		}else{
			num ++;
		    tol += len;
		}
	}
	double avg = 1.0 * tol / num;
	printf("%.2f\n",avg);
	
}
/*
��Ŀ�����������ʵ�ƽ����ĸ�� 
�����ʽ��
apple battle clock document earth

*/ 
