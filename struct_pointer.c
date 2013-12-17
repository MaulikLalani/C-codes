#include <stdio.h>
#include <string.h>
struct sentence{
	char s[20];

};
int main(void) {
	int n,i;
	// your code goes her
	printf("Enter the no. of sentence that you want to enter\n");
	scanf("%d",&n);
	struct sentence *pointer= (struct sentence *)malloc(sizeof(struct sentence)*n);
	for(i=0;i<n;i++){
		//scanf("%s",(pointer+i)->s);
		gets((pointer+i)->s);
	}
	for(i=0;i<n;i++){
		printf("%s\n",(pointer+i)->s);
	}
	return 0;
}
