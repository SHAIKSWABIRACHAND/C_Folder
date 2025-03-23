#include<stdio.h>
int main(int argc,char *argv[]){
FILE  *fr;
char ch;
if(argc <2){
ch = getchar();
while(ch != EOF){
putchar(ch);
ch = getchar();
}
return 0;}
for(int i = 1;i<argc;i++){
fr = fopen(argv[i],"r");
if(fr = NULL){
return 1;}

while((ch = fgetc(fr))!= EOF){
putchar(ch);}

fclose(fr);
}
return 0;}
