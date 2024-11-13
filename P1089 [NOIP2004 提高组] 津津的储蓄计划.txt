/*#include<stdio.h>
int main() {
	int buyget[12];
	int start_money = 0,end_money = 0,month;
	for (month = 0; month < 12; month++)
	{ 
		scanf_s("%d" ,&buyget[month]);
	}//接收每个月的预算
	for (month = 0; month < 12; month++)
	{
		start_money += 300;//妈妈每个月给300块
		if (start_money-buyget[month]<0)
		{
			printf("-%d", month);
			return 0;
		}
		int month_end = start_money - buyget[month];
		if (month_end >= 100)
		{
			int end_amount = month_end / 100 * 100;
			end_money += end_amount;
			start_money -= end_amount;
		}
	}
	int final_monry = start_money + end_money * 1.2;
	printf("%d\n", final_monry);
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int a[12], totm = 0, tot = 0; // totm是存的钱，tot是除了存的剩下的
	for (int i = 0; i < 12; i++)
	{
		scanf_s("%d", &a[i]); // 接收这个月的预算
	}
	for (int i = 0; i < 12; i++) { // 循环模拟每个月的经济流动
		tot += 300; // 妈妈先给了jj 300元
		//scanf_s("%d", &a[i]); // 接收这个月的预算
		if (tot - a[i] < 0) { // 如果预算超过了jj手中的钱……
			printf("-%d\n", i + 1); // 输出这是第几个月（注意数组是从0开始，但月份从1开始）
			return 0; // 直接结束程序
		}
		tot -= a[i]; // 如果钱够，算出jj用完后剩下的钱

		// 如果jj手上有整百的，则给妈妈，妈妈会加上利息（但在这个循环中我们只减去整百）
		while (tot >= 100) {
			tot -= 100; // jj给妈妈100元（注意这里只是模拟存钱，并没有真的加上利息）
			totm += 100; // 妈妈收到jj的100元（这里的totm只是记录了jj存了多少钱，并没有加上利息）
		}
	}

	// 输出妈妈给的本息（但在这个简单模拟中，我们并没有计算利息，只是按照题目要求乘以1.2）
	// 还有12月剩下的钱（即tot，因为我们已经模拟完了12个月的经济流动）
	printf("%.2f\n", 1.2 * totm + tot); // 使用%.2f来格式化输出为两位小数

	return 0;
}*/


/*#include<stdio.h>
int main() {
	int start[12];
	int start_money = 0, end_money = 0;
	for (int i = 0; i < 12; i++)
	{
		scanf_s("%d", &start[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		start_money += 300;
		if (start_money - start[i] < 0) {
			printf("-%d", i + 1);
			return 0;
		}
		else {
			start_money -= start[i];
		}
		while (start_money) {
			start_money -= 100;
			end_money += 100;
		}
	}
	printf("%.2f\n", 1.2 * end_money + start_money);
	return 0;
}*/

#include <stdio.h>

int main() {
	int money = 0, cost, mama = 0, flag = 1, monthofdeath;
	// money代表在津津手里的钱，cost代表花费的钱，mama代表在妈妈手里的100元的张数，
	// flag=1代表尚未透支，monthofdeath代表死亡月份 

	for (int i = 1; i <= 12; i++) {
		money += 300;  // 每个月津津手里的钱都会增加300 
		scanf("%d", &cost);     // 输入这个月的花销 
		money -= cost;     // 津津手里的钱减去这个月的花销等于剩余的钱 

		if (money < 0)     // 若剩余的钱小于0, 
		{
			flag = 0;      // 旗帜倒下，即已经透支 
			monthofdeath = i;    // 记录死亡月份 
			break;            // 终止循环 
		}

		mama += money / 100;    // 剩余的钱整除100即为在妈妈手里的100元的张数 
		money %= 100;         // 用100去模剩余的钱即为月底幸存的钱         
	}

	if (flag == 1)      // 若旗帜未倒下，即坚持到年底还没有透支 
	{
		money += mama * 120;    // 剩余的钱加上妈妈手里100元张数乘以120（这里假设的逻辑是年底妈妈会给每张100元额外的120元奖励）
		printf("%d\n", money);
	}
	else
	{
		printf("-%d\n", monthofdeath);
	}

	return 0;
}
