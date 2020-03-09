/* Interpolation search */

int search(int a[], int h,int k){
	int l = 0;
	h = h - 1;
	while((h!= l ) && (k >= a[l]) && (k <= a[h])){
		int pos = l + (int)( ((float)(h-l) / (a[h] - a[l])) * (k - a[l]) );
        if(a[pos] == k){
            return pos;
        }
        else if (a[pos] < k){
            l = pos + 1;
    }
        else{
            h =pos - 1;
	}
	}
	return -1;
}
#include<stdio.h>
int main(){
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int h = 9;
	int k = 1;
	int res = search(a,h,5);
	printf("%d",res+1);
	return 0;
}
