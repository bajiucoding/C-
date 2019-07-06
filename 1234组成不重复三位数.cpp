//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
void getThree(){
	int count = 0;
	for(int i=1;i<5;i++){
		for(int j=1;j<5;j++){
			if(i==j){
				continue;
			}
			for(int k=1;k<5;k++){
				if(k==i||k==j){
					continue;
				}
				count++;
				printf("组成的三位数:%d%d%d\n",i,j,k);
			}
		}
	}
	printf("共组成%d个三位数",count);
}

int main(){
	getThree(); 
	return 0;
} 
