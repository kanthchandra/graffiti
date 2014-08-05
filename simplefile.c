#include<stdio.h>
#include<stdlib.h>

void add(int , int);

void main(){
	int a, b , sum;
	scanf("%d %d", &a, &b);
	add(a,b);
}

void add(int a, int b){
	int sum;
	sum = a+b;
	printf("%d", sum);
}

