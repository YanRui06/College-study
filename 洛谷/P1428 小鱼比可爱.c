#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//小鱼总数
	int a[n];//定义数组a，储存小鱼的可爱程度
	for(int i = 0;i<n;i++){//进入循环遍历数组a
		scanf("%d",&a[i]);//输入每只小鱼的可爱程度并存入数组a的第i个位置	
	}
	int count[n];//定义数组，储存有几只小鱼不如自己可爱
	for(int i = 0;i<n;i++){//进入循环遍历每只小鱼及其可爱程度
		count[i] = 0;//初始化数组，表示当前小鱼左边还么被比较即第i个位置为0
		for(int j = 0;j<i;i++){//进入循环，遍历当前小鱼与左边小鱼j为左边小鱼，i为当前小鱼
			if(a[j]<a[i]){//如过左边小鱼比右边小鱼丑
				count[i]++;//比自己丑的小鱼加1
			}
		}
	}
	for(int i = 0;i<n;i++){//进入循环遍历所有小鱼
		printf("%d",count[i]);//输出count数组的值
		if(i<n-i){//如果不是最后一只小鱼
			printf(" ");//在元素之间添加一个空格
		}
	}
	printf("\n");
	
	return 0;
}