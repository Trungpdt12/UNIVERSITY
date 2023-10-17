#include <stdio.h>
#include <string.h>
////Cau1
//int array(int a[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//	return 0;
//}
//int sum(int a[],int n)
//{
//	int S=0;
//	int i;
//	for(i=0;i<n;i++)
//	{
//		if(a[i]%2==0) 
//		{
//			S=S+a[i];
//		}
//	}
//	return S;
//}
//int main()
//{
//	int n,a[100];
//	printf("nhap so luong n:");
//	scanf("%d",&n);
//	array(a,n);
//	sum(a,n);
//	printf("Tong chan la:%d",sum(a,n));
//	return 0;
//}

////Cau2
//int array(int a[],int n)
//{
//	int i,dem=0;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		if(a[i]%2!=0) 
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//int main()
//{
//	int a[100],n;
//	printf("");
//	scanf("%d",&n);
// 	//array(a,n); //neu lam 1 ham chung ca 2 thi khong can viet nay, vi viet nay se bi lap 2 lan
//	printf("so phan tu gia tri le la:%d",array(a,n));
//	return 0;
//}

////Cau3
//int input(int a[],int n,int X)
//{
//	int i,dem=0;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//		if(a[i]==X)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//int main()
//{
//	int n,X,a[100];
//	printf("n=");
//	scanf("%d",&n);
//	printf("X=");
//	scanf("%d",&X);
//	printf("so gia tri bang X la:%d",input(a,n,X));
//	return 0;
//}

////Cau4
//int array(int a[],int n)
//{
//	int dem=0,i;
//	for(i=0;i<n;i++) //chuyen gia ghi nham ";" thanh ","
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//		if(a[i]%5==0)
//	    {
//			dem++;
//		}
//	}
//	return dem;
//}
//int main()
//{
//	int n,a[100];
//	printf("n=");
//	scanf("%d",&n);
//	if(array(a,n)==n)
//	{
//		printf("day la ham boi cua 5");
//		return 0;
//	}
//	printf("day khong phai la ham boi cua 5");
//	return 0;
//}

////Cau5
//        khong chac la de hoi tim 1 vi tri hay nhieu vi tri 
//int array(int a[],int n, int X)
//{
//	int i,dem=0;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		if(a[i]==X)	 //khong nen de ham tim nay trong ham nhap mang vi khi chua nhap xong mang no da end luon r
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[100],n,X;   //lam nho khai bao X
//	printf("n=");
//	scanf("%d",&n);
//	printf("X=");
//	scanf("%d",&X);
//	printf("%d",array(a,n,X));      //lam hay quen ghi "%d" va in ra thi khong co "&"
//	return 0;
//}


////Cau6
//int nhap(int a[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]); //nho la co "&"
//	}
//	return 0;
//}
//int xoa(int a[],int n,int X)
//{
//	int i,j;
//	for(i=0;i<n;i++)
//	{
//		if(a[i]==X)
//		{
//				for(j=i;j<n-1;j++)
//				{
//					a[j]=a[j+1];
//				}
//				n--;
//				i--;
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=%d \n",i,a[i]);
//	}
//	return 0;
//
//}
//int main()
//{
//	int a[100],X,n;
//	printf("n=");
//	scanf("%d",&n);
//	printf("X=");
//	scanf("%d",&X);
//	nhap(a,n);
//	xoa(a,n,X);
//	return 0;
//}

////Cau7
//int array(int a[],int n)
//{
//	int i,temp=0;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//		if(a[i]%2==0)
//		{
//			temp=a[i];
//		}
//	}
//	if(temp==0) return -1;
//	return temp;
//}
//int main()
//{
//	int a[100],n;
//	printf("n=");
//	scanf("%d",&n);
//	*/////array(a,n);   ///xai mang khong nen ghi dong nay, se bi lap 2 lan
//	*		//////if(array(a,n)==0)	////nho cho nay khong xai temp duoc, va dac biet neu lam nhu nay thi se bi lap 2 lan khien cho bai bi sai///
//	printf("%d",array(a,n));
//	return 0;
//}


////Cau8
//int array(int a[],int n)
//{
//	int i,temp=0;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//		if(a[i]%2!=0)
//		{
//			if(a[i]>temp) temp=a[i];
//		}
//	}
//	if(temp==0) return 0;
//	return temp;
//}
//int main()
//{
//	int a[100],n;
//	printf("n=");
//	scanf("%d",&n);
//	printf("%d",array(a,n));
//	return 0;
//}


////Cau9
//int array(int a[],int n)
//{
//	int i,S=0;     //lam bai nho cho S=0 khi tong, S=1 khi tinh tich
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//		if(a[i]%3==0 && a[i]%5==0)
//		{
//			S=S+a[i];
//		}
//	}
//	return S; ///nho return gia tri cho ham
//}
//int main()
//{
//	int a[100],n;
//	printf("n=");
//	scanf("%d",&n);
//	printf("S=%d",array(a,n));
//	return 0;
//}


////Cau10
//void array(int a[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//}
//int dem(int a[],int n)
//{
//	int i,k,p,temp=1,dem=0;
//	for(i=0;i<n;i++)
//	{
//		temp=1;		//nen ghi o day moi dung, moi gia tri cua mang thi temp phai quay ve 1;
//		for(k=i+1;k<n;k++)
//		{
//			if(a[i]==a[k])
//			{
//				temp++;
//			}
//		}
//		for(k=i+1;k<n;k++)
//		{
//			if(a[i]==a[k])
//			{
//				for(p=k;p<n;p++)
//				{
//					a[p]=a[p+1];				
//				}
//				n--;
//				k--;
//			}
//		}
//		if(temp>1)
//		{
//			dem++;
//		}
//
//	}
//	return dem;
//}
//int main()
//{
//	int a[100],n;
//	printf("n=");
//	scanf("%d",&n);
//	array(a,n);
//	printf("so luong trung=%d",dem(a,n));
//	return 0;
//}