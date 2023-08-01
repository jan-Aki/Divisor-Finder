#include<stdio.h>
#include<math.h>

int main(){
long long num,i;
int c = 0;
printf("Pick a number:");
scanf("%lld",&num);
printf("The divisors of %lld are:",num);

for(i=1;i <= num/2;i++){
    if(num % i == 0){
        printf("\n%lld",i);
        c++;
    }
}

printf("\n%lld\nA total of %d divisors!\n",num,c+1);
scanf("%lld",i);
return 0;
}