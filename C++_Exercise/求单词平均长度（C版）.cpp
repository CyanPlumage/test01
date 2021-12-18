#include <stdio.h>

int main(){
    char str;
    int j=0;
    int i=0;
    int a[100]={0};
    while(1){
        str=getchar();
        if (str =='\n')
        
           break;
        else if (str ==' ')
                j++;
             else a[j]++;
    }
    double sum=0;
    for(i=0;i<=j;i++){
    	printf("%d\n",a[i]);
        sum+=a[i];
    }
    printf("%.2f\n",sum);
    printf("%d\n",j);
    printf("%.2f",sum/(j+1));
}

