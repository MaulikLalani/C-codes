// printing maximum sum subarray
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	// your code goes here
	int n,i=0,j=0;
	printf("Enter the series of values\n");
	scanf("%d",&n);
	int *a= (int *)(malloc(sizeof(int)*n));
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
	int sum_initial=0;
	int b[n];
	for(i=0;i<n;i++){
		if((sum_initial+a[i])>sum_initial){
			b[j]=a[i];
			j++;
			sum_initial=sum_initial+a[i];
		}
	}
	int k=j;
	for(j=0;j<k;j++){
		printf("%d\n",b[j]);
	}
	return 0;
}
