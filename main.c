#include <stdio.h>
#define REP(i,N) for(i=0;i<N;i++)
#define REPD(i,N) for(i=N;i>0;i--)
#define ARRAY_COUNT(A,S,C) {C=0;int i;REP(i,S){if(*(i+A))C++;}}
void ctoi(char,int*);	//char to int
void itoc(int,char*);	//int to char

int main()
{
	char c[10] = {"a  "};
	int count;
	ARRAY_COUNT(c,10,count);
	printf("%d",count);
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

