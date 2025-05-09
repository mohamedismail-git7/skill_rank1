#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    for(i=0;i<=100;i++)
    {
        if(i%2==0){
            sum=sum+i;
        }
        
    }
    printf("The Sum of Evem number between 1 to 100 is :%d",sum);
      return 0;
}