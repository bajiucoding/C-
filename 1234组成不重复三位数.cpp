//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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
				printf("��ɵ���λ��:%d%d%d\n",i,j,k);
			}
		}
	}
	printf("�����%d����λ��",count);
}

int main(){
	getThree(); 
	return 0;
} 
