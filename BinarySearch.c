
#include<stdio.h>
int binarysearch(int a[],int low,int high,int key){
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]<key){
			low = mid + 1;
		}
		else if(a[mid]>key){
			high = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	int key = 6;
	int ans = binarysearch(a,0,8,6);
	printf("%d",ans);
	return 0;
}
