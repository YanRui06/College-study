#include<stdio.h>
int main() {
	float m, h;
	scanf("%f %f", &m, &h);
	double bmi = m / (h * h);
	if (bmi < 18.5) {
		printf("Underweight");
	}
	else if (bmi > 18.5 && bmi < 24) {
		printf("Normal");
	}
	else {
		printf("%.4f\n", bmi);
		printf("Overweight");
	}
	return 0;
}