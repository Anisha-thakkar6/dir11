#include<stdio.h>
#include"cal_mean_sub.h"
int main(int argc, char *argv[]){
	double v1,v2,m1,m2;
	v1=5.2;
	v2=9.8;
	m1=mean(v1,v2);
	m2=sub(v1,v2);
	printf("Mean: %3.2f\n",m1);
	printf("Substraction: %3.2f\n",m2);
	return 0;
}
