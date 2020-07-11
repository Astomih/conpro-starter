#include <stdio.h>
#define REP(i,N) for(i=0;i<N;i++) //N times repeat. i = increase
#define REPD(i,N) for(i=N;i>0;i--)//i = decrease 

//A:Array S:Size C:Count var
#define ARRAY_COUNT(A,S,C) {C=0;int i;REP(i,S){if(*(i+A))C++;}}
void ctoi(char,int*);	//char to int
void itoc(int,char*);	//int to char
char lower(char);		//ex:'A' to 'a'
char upper(char);		//ex:'a' to 'A'

int main()
{
	char str[32]={};
	int i,count;
	scanf("%32s",str);
	ARRAY_COUNT(str,32,count)
	REP(i,32){
		printf("%c",upper(str[i]));
	}	
	printf("\n");
	return 0;
}

void ctoi(char in, int* out)
{
	*out = in-48;
}

void itoc(int in, char* out)
{
	while(in>=10|| in<=-10)in/=10;	
	if(in < 0)in = -in;
	*out = in+48;
}

char lower(char c)
{
	if('A' <= c && c <= 'Z')return c+0x20;
	return c;
}

char upper(char c)
{
	if('a' <= c && c <= 'z')return c-0x20;
	return c;
}
