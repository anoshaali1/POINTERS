#include<stdio.h>
void addnumbers(int *a, int *b,int *s){
	*s=*a+*b;
}
int main(){
	int num1,num2,sum;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    addnumbers(&num1,&num2,&sum);
    printf("sum=%d\n",sum);
}
