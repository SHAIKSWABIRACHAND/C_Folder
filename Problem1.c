#include<stdio.h>
int f(int x,int y){
for(int i = 0;i<y;i++){
x = x+x+y;
}return x;
}
int main(){
printf("%d\n",f(20,20));
return 0;}
