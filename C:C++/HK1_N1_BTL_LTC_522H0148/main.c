#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int checkNumber(char input[])
{
	if(isdigit(input[0]==0 && input[0]!='-'))
		return 0;
	for(int i=1;i<strlen(input);i++){
		if(isdigit(input[i])==0)
				return 0;
	}
	return 1;
}
bool checksnt(int number)
{
	if(number<2)
		return false;
	for(int i=2;i<=sqrt(number);i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}	
	return true;
}
void xuatmang(int arr[],int len){
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main(int argc,char* argv[])
{
	int len=0,arr[100],temp;
	if(argc<2) 
	{
		printf("input error");
		return 1;
	}
	for(int i=1;i<argc;i++)
	{
		if(checkNumber(argv[i]))
			arr[len++]=atoi(argv[i]);
	}
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int k=0;k<len;k++)
	{
		if(checksnt(arr[k])==false)
		{
			for(int j=k;j<len-1;j++)
			{
				arr[j]=arr[j+1];
			}
			len--;
			k--;
		}	
	}
	xuatmang(arr,len);
	return 1;
}