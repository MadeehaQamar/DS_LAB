#include<stdio.h>
void insertion_sort(int [],int);
int main(){
	int a[20],n,i;
	printf("enter value of n");
	scanf("%d" , &n);
	printf("enter elements in array");
	for (i = 0;i < n; i++){
	       scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("enter sorted order of elements");
	for (i = 0;i < n;i++){
		printf("%d\t", a[i]);
		}
	return 0;
	}
void insertion_sort(int a[],int n){
	int i,j,temp;
	for (i = 0;i < n-1; i++){
	         while(j >= 0 && a[j-1] > a[j]) {
	                 temp = a[j];
	                 a[j] = a[j-1];
	                 a[j-1] = temp;
	                 }
	           }
	      }
	
