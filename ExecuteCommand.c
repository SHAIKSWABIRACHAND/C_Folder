#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
printf("Before exec() system call.\n");
char *args[] = {"ls","-1",NULL};
execvp(args[0],args);
perror("exec failed");
return 1;
}

