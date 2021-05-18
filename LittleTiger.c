#include<stdio.h>
int main(void){
	int i,j,k;
	printf("水仙花数有:\n");
	for(i=1;i<=9;i++){//这里不初始化i=0是因为水仙花数是三位数的关系 
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if (i*i*i+j*j*j+k*k*k==i*100+j*10+k)
					printf("%d\n",i*100+j*10+k);
			}
		}
	}
} 
