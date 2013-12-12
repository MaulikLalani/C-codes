// printing maximum sum subarray
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i=0;
int MAXSIZE=20;
int *top;

void queue();
void dequeue();
void print();

int main(void) {
	top = (int *)(malloc(sizeof(int)*20));
	int m;
	int choice=1;
	// your code goes here
	while(choice){
		printf("FOR QUEUE press 1\n FOR DEQUEUE press 2\n FOR DISPLAY press 3\n");
		scanf("%d",&m);
		switch(m){
			case 1:
				queue();
				print();
				break;
			case 2:
				dequeue();
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

void queue(){
	i++;
	int d;
	if(i>MAXSIZE){
		printf("Stack is full\n");
	}
	else{
		printf("Enter the element that you want to push\n");
		scanf("%d",&d);
		*(top+i)=d;
	}
}

void dequeue(){
	if(i==0){
		printf("The stack is empty");
	}
	else{
		printf("The poped element is %d\n",*(top+1));
		top=top+1;
	}
}

void print(){
	int j;
	if(i==0){
		printf("The stack is empty");
	}
	else{
		for(j=1;j<=i;j++){
			printf("%d\n",*(top+j));
		}
	}
}
