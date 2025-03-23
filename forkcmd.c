#include<stdio.h>
#include<unistd.h>
int main(){
pid_t p;
p = fork();
if(p == 0){
	printf("Child process id %d\n",getpid());
}
else if(p>0){
	printf("Parent process id %d\n",getpid());
}
else{
	printf("Error");
}
return 0;
}
