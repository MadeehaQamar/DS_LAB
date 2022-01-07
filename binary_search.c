#include<stdio.h>
void main(){
	int a[20], i, n, key, low, high, mid, size;
	printf("enter size of array");
	scanf("%d", &size);
	printf("enter elements in asecnding order");
	for (i=0;i<size;i++){
	scanf("%d", &a[i]);
	}
	printf("enter the key element");
	scanf("%d", &key);
	low =0;
	high =size-1;
	while(high>=low){
	mid = (low+high)/2;
	if(key == a[mid])
	break;
	else{
	if(key>=a[mid])
	low = mid+1;
	else
	high = mid-1;
	}
}
 if (key == a[mid])
 printf("key element is found at location %d",mid+1);
 else
 printf("key element is not found in array elements");
 }

