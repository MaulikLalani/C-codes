// printing maximum sum subarray
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i=0;
int MAXSIZE=20;
int array[20];
int d;

void push();
void pop();
void print();

int main(void) {
	array[0]=0;
	int m;
	int choice=1;
	// your code goes here
	while(choice){
		printf("FOR PUSH press 1\n FOR POP press 2\n FOR DISPLAY press 3\n");
		scanf("%d",&m);
		switch(m){
			case 1:
				push();
				print();
				break;
			case 2:
				pop();
				print();
				break;
			case 3:
				print();
		}
		printf("Do you want to continue(1or 0)\n");
		scanf("%d",&choice);
	}
		return 0;
}

void push(){
	i++;
	if(i>MAXSIZE){
		printf("Stack is full\n");
	}
	else{
		printf("Enter the element that you want to push\n");
		scanf("%d",&d);
		array[i]=d;
	}
}

void pop(){
	if(i==0){
		printf("The stack is empty");
	}
	else{
		printf("The poped element is %d\n",array[i]);
		i=i-1;
	}
}

void print(){
	int j;
	if(i==0){
		printf("The stack is empty");
	}
	else{
		for(j=1;j<=i;j++){
			printf("%d\n",array[j]);
		}
	}
}
