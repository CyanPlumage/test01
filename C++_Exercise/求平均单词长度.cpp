#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	string str;
	int num = 0; 
	int tol = 0;

	while(cin >> str){
		//printf("成功读取字符串\n"); 
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
题目：输出五个单词的平均字母数 
输入格式：
apple battle clock document earth

*/ 
