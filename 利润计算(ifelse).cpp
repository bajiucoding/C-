//企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。
#include<stdio.h>
float getCommission(float profit){
//	printf("接收到的利润金额是%f \n",profit); 
	float commission;
	if(profit<=10){
//		printf("10以内\n");
		commission = profit * 0.10;
	}
	else if(10<profit&&profit<20){
//		printf("10到20\n");
		commission = 10 * 0.10 + (profit - 10) * 0.075;
	}
	else if(20<=profit&&profit<40){
//		printf("20到40");
		commission = 10 * 0.10 + 10 * 0.075 + (profit - 20) * 0.05;
	}
	else if(40<=profit&&profit<60){
//		printf("40到60");
		commission = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
	}
	else if(60<=profit&&profit<100){
//		printf("60到100");
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
	printf("请输入利润金额：\n");
	scanf("%f",&profit);
	printf("********************************************\n");
	float commission; 
	commission = getCommission(profit);
	printf("提成金额是：%f\n",commission);
}
