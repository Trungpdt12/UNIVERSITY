#include <stdio.h>
#include <string.h>
//DDDDDDDDDDDDDDDĐDDDDDDDDDDDDDDDD
////cau 1
//int fx1)(int x)
//{
//	if(x==0) return 1;
//	if(x==1) return 2;
//	return 2*fx(x-1)+3*fx(x-2);
//}

////Cau 2____________________________________
//int main()
//{
//	int x;
//	printf("");
//	scanf("%d",&x);
//	fx1(x);
//	printf("%d",fx1(x));
//	return 1;
//}

////Cau3____________________________________
//int fx3(int x)
//{
//	if(x==0) return 3;
//	if(x==1) return 5;
//	return fx3(x-1) + fx3(x-2);
//}

////Cau4____________________________________
//int main()
//{
//	int x;
//	printf("");
//	scanf("%d",&x);
//	fx3(x);
//	printf("%d",fx3(x));
//}

////Cau5____________________________________
//float dequymang(int a[],int n)
//{
//   if(n==1) return (float)a[n-1];
//  return (float)(dequymang(a,n-1)*(n-1)+a[n-1]/n);
//}

////Cau6____________________________________
//timgiatrilonnhatcua2so,sosanh2so
//int max(int n1,int n2)
//{
//	return n1>n2?n1:n2;
//}
//int timdequy(int a[], int lenght)
//{
//	if(lenght==1) return a[0];
//	return max(timdequy(a,lenght-1),a[lenght-1]);
//}

////Cau7____________________________________
//float S(int x)
//{
//	if(x==0) return 1;
//	return 2.0*S(x-1.0)+(3.0/4.0);
//}

////Cau8____________________________________
////////nho khai bao include <string.h>/////
//void check(char word[],int index)
//{
//	int len=strlen(word)-(index+1);
//	if(word[index]==word[len])
//	{
//		if(index+1 == len || index == len)
//		{
//			printf("so doi xung");
//			return;
//		}
//		check(word,index+1);
//	}
//	else
//	{
//		printf("khong phai so doi xung");
//	}
//}
//int main()
//{
//	char word[15];
//	printf("");
//	scanf("%s",word); //luu y char khong can xai "&"
//	check(word,0);
//	return 0;
//}

////Cau9____________________________________
//float P(int n);
//int main()
//{
//	int n;
//	printf("nhap n:");
//	scanf("%d",&n);
//	printf("P(%d)=%f\n",n,P(n));
//	return 0;
//}
//float P(int n)
//{
//	if(n==1)return 3*1 - 1.0/3;
//	return 3*n - 1.0/3 + P(n-1);
//}

////Cau10____________________________________ 
//int tongarray(int a[1000],int n)
//{
//	if(n==1) return a[0];
//	return a[n-1] + tongarray(a,n-1);
//}
//int main()
//{
//	int n,i;
//	int array[1000];
//	printf("nhap n:");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)    //di thi nho la ";" chu khong phai ","
//	{
//		printf("");
//		scanf("%d",&array[i]); //nhap mang cung phai co "&"
//	}
//	printf("%d",tongarray(array,n));
//}