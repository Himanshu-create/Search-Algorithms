int linear_search(int a[],int l,int k){
	int i;
	for(i=0;i<l;i++){
		if(a[i]==k){
			return i;
		}
	}
	return -1;
	
}

#include<stdio.h>
int main(){
	int k,l;
	int a[]= {1,2,3,4,5,6,7,8,9};
	int pos = linear_search(a,9,6);
	printf("%d",pos);
	return 0;
}
