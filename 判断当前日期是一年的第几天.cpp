//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//����ṹ�����㵱ǰ�м����£��ټ�������Ǳ��µĵڼ��졣���㵱ǰ�Ƿ������꣬�������·ݴ���3�Ͷ��һ�� 
#include<stdio.h> 
int isLeap(int year)
{
	//�ж��Ƿ����꣬�ܱ�4�����Ҳ��ܱ�100�����������ܱ�400���� 
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}else{
		return 0;
	}
}

int getDay(int year,int month,int day)
{
	//�������ǰ����֮ǰ���·����������ж��Ƿ����꣬�����һ�졣֮���ټ��ϵ�ǰ���ڵ�dayֵ���� 
	int monthDay = 0;
	switch(month)
	{
		case 1:monthDay=0;break;
		case 2:monthDay=31;break;
		case 3:monthDay=59;break;
		case 4:monthDay=90;break;
		case 5:monthDay=120;break;
		case 6:monthDay=151;break;
		case 7:monthDay=181;break;
		case 8:monthDay=212;break;
		case 9:monthDay=243;break;
		case 10:monthDay=273;break;
		case 11:monthDay=304;break;
		case 12:monthDay=334;break;
	}
	if(isLeap(year)==1)
	{
		monthDay++;
	}
	return monthDay+day;
} 

int main(){
	int year,month,day;
	printf("������������ �� �գ��Կո�ָ�\n");
	scanf("%d %d %d",&year,&month,&day);
	printf("%d,%d,%d",year,month,day);
	int dayNum = getDay(year,month,day);
	printf("������һ��ĵ�%d��",dayNum);
	return 0;
}
