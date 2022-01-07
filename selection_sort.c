#include<stdio.h>
void selection_sort(int [],int);
int main(){
	int a[20],n,i;
	printf("enter value of n");
	scanf("%d" , &n);
	printf("enter elements in array");
	for (i = 0;i < n; i++){
	       scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("enter sorted order of elements");
	for (i = 0;i < n;i++){
		printf("%d\t", a[i]);
		}
	return 0;
	}
void selection_sort(int a[],int n){
	int i,j,temp,min;
	for (i=0;i<n-1;i++){
		min=i;
	        for (j=i+1;j<n;j++){
			if (a[j]<a[min]){
                        
                              min = j;
                              }
                           }
                    if(i != min){
                            temp = a[min];
                            a[min] = a[i];
                            a[i] = temp;
                                    }
                              }
                      }
