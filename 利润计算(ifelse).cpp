//��ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
#include<stdio.h>
float getCommission(float profit){
//	printf("���յ�����������%f \n",profit); 
	float commission;
	if(profit<=10){
//		printf("10����\n");
		commission = profit * 0.10;
	}
	else if(10<profit&&profit<20){
//		printf("10��20\n");
		commission = 10 * 0.10 + (profit - 10) * 0.075;
	}
	else if(20<=profit&&profit<40){
//		printf("20��40");
		commission = 10 * 0.10 + 10 * 0.075 + (profit - 20) * 0.05;
	}
	else if(40<=profit&&profit<60){
//		printf("40��60");
		commission = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
	}
	else if(60<=profit&&profit<100){
//		printf("60��100");
		commission = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
	}
	else{
		commission = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;		
	}
	return commission;
}


int main(void){
	float profit;
	printf("********************************************\n");
	printf("�����������\n");
	scanf("%f",&profit);
	printf("********************************************\n");
	float commission; 
	commission = getCommission(profit);
	printf("��ɽ���ǣ�%f\n",commission);
}
