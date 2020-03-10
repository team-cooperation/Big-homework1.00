#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  chusyear, chusmonth, chusday;  //出生
	printf("请输入您的出生年月日（格式为x.x.x）\n");//用户输入
	scanf_s("%d.%d.%d",&chusyear,&chusmonth,&chusday);
	int year, month, day;  //测定
	printf("请输入您想查询的日期（格式为x.x.x）\n");
	scanf_s("%d.%d.%d",&year,&month,&day);

	int a, b,rns;       //闰年数
	a = (year - chusyear) / 4;
	b = (year - chusyear) % 4;
	if (b == 0) rns = a;
	else rns = a + 1;

	int ad,sheng,ce;   //总天数，至生日天数，至测定天数
	if((chusyear%4==0&&chusyear%100!=0)||chusyear%400==0)  //判断出生年是否为闰年
	switch (chusmonth)     //出生年是闰年时
	{
	case 1:sheng = chusday;break;
	case 2:sheng = 31 + chusday;break;
	case 3:sheng = 60 + chusday;break;
	case 4:sheng = 91 + chusday;break;
	case 5:sheng = 121 + chusday;break;
	case 6:sheng = 152 + chusday;break;
	case 7:sheng = 182 + chusday;break;
	case 8:sheng = 213 + chusday;break;
	case 9:sheng = 244 + chusday;break;
	case 10:sheng = 274 + chusday;break;
	case 11:sheng = 305 + chusday;break;
	case 12:sheng = 335 + chusday;break;
	default:printf("请输入正确月份");
	}
	else
	{
		switch (chusmonth)
		{
		case 1:sheng = chusday;break;
		case 2:sheng = 31 + chusday;break;
		case 3:sheng = 59 + chusday;break;
		case 4:sheng = 90 + chusday;break;
		case 5:sheng = 120 + chusday;break;
		case 6:sheng = 151 + chusday;break;
		case 7:sheng = 181 + chusday;break;
		case 8:sheng = 212 + chusday;break;
		case 9:sheng = 243 + chusday;break;
		case 10:sheng = 273 + chusday;break;
		case 11:sheng = 304 + chusday;break;
		case 12:sheng = 334 + chusday;break;
		default:printf("请输入正确月份");
		}
	}

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)            //测定年是闰年时
	{
		switch (month)     //是闰年时,测试
		{
		case 1:ce = day;break;
		case 2: ce = 31 + day;break;
		case 3: ce = 60 + day;break;
		case 4: ce = 91 + day;break;
		case 5:ce = 121 + day;break;
		case 6: ce = 152 + day;break;
		case 7: ce = 182 + day;break;
		case 8: ce = 213 + day;break;
		case 9: ce = 244 + day;break;
		case 10: ce = 274 + day;break;
		case 11: ce = 305 + day;break;
		case 12: ce = 335 + day;break;
		default:printf("请输入正确月份");
		}
	}
	else
	{
		switch (month)
		{
		case 1: ce = day;break;
		case 2: ce = 31 + day;break;
		case 3: ce = 59 + day;break;
		case 4:ce = 90 + day;break;
		case 5: ce = 120 + day;break;
		case 6:ce = 151 + day;break;
		case 7: ce = 181 + day;break;
		case 8: ce = 212 + day;break;
		case 9:ce = 243 + day;break;
		case 10: ce = 273 + day;break;
		case 11: ce = 304 + day;break;
		case 12: ce = 334 + day;break;
		default:printf("请输入正确月份");
		}
	}
	ad = (year - chusyear) * 365 + rns - sheng + ce;
	printf("%d ",ad);
	system("pause");
	return 0;

}
