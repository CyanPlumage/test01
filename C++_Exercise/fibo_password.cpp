#include <cstdio>
const int maxn = 110 ;
int fibo[maxn] = {0};
int main(){
	scanf("%d %d",&fibo[0],&fibo[1]);
	int now = 2;
	while(now < 6){
		fibo[now] = fibo[now-2] + fibo[now-1];
		if(fibo[now] > 9){
			fibo[now + 1] = fibo[now] % 10;
			fibo[now] /= 10; 
			now += 2; 
		}else{
			now ++;
		}
	}
	for(int i=0;i<now;i++){
		printf("%d",fibo[i]);
		if(i < now-1) printf(" ");
		else printf("\n");
	}
}
