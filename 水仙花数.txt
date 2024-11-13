#include<stdio.h>
#include<math.h>
int main()
{
	int shu;
	printf("请输入一个三位整 : %d", shu);
	scanf("%d", &shu);
	int b, s, g;//b???,s???,g???
	b = shu / 100 % 10;
	s = shu / 10 % 10;
	g = shu % 10;
	int sun = pow(b, 3) + pow(s, 3) + pow(g, 3);
	if (sun == shu) {
		printf("%d3是水仙花数！！!", shu);
	}
	else {
		printf(" % d不是水仙花数！！！", shu);
	}
	//printf("%d %d %d", b, s, g);




	return 0;
}
