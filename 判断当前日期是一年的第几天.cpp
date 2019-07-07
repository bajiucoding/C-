//输入某年某月某日，判断这一天是这一年的第几天？
//程序结构：计算当前有几个月，再计算今天是本月的第几天。计算当前是否是闰年，闰年且月份大于3就多加一天 
#include<stdio.h> 
int isLeap(int year)
{
	//判断是否闰年，能被4整除且不能被100整除，或者能被400整除 
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}else{
		return 0;
	}
}

int getDay(int year,int month,int day)
{
	//先求出当前日期之前的月份总天数，判断是否闰年，闰年加一天。之后再加上当前日期的day值返回 
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
	printf("请依次输入年 月 日，以空格分隔\n");
	scanf("%d %d %d",&year,&month,&day);
	printf("%d,%d,%d",year,month,day);
	int dayNum = getDay(year,month,day);
	printf("今天是一年的第%d天",dayNum);
	return 0;
}
