// // ***THE SUM OF THE  NUMBER (1 to the nth number) ^_^
// USING WHILE LOOOP
#include<stdio.h>
int main(){

int i=1,sum=0,num=10;
// printf("Enter a number");
// scanf("%d",num);
while (i<=num){
sum=sum+i;
i++;
}
    printf("the sum of the number upto %d is : %d",num,sum);

return 0;


}