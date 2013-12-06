#include <stdio.h>
#include<stdlib.h>
void add();
void print();
void delete();
struct node{
	struct node *next;
	int key;
};

struct node *root=NULL;
struct node *current=NULL;
int main(void) {
	int n;
	f:
	printf("For storing new value press 1 \n For continue press 2 \n For Exit press 3\n For Delete press 4\n");
	scanf("%d",&n);
	switch(n){
		case 1:
				add();
				print();
		case 2:
				goto f;
		case 3:
				break;
		case 4:
				delete();
				print();
	}
	return 0;
}

void add(){
	int value;
	printf("Enter the key that you want to store\n");
	scanf("%d",&value);
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	if(root==NULL){
		 ptr->key=value;
		 ptr->next=NULL;
		 root=ptr;
		 current=ptr;
	}
	else{
		ptr->key=value;
		ptr->next=NULL;
		current->next=ptr;
		current=ptr;
	}
}
void print(){
	
	current=root;
	while(current!=NULL){
		printf("%d\n",current->key);
		if(current->next==NULL)
			break;
		current=current->next;
	}
}	

void delete(){

		int v,c=0;
		printf("Enter the no. that you want to delete \n");
		scanf("%d",&v);
		//ptr3=root->next;
		current=root;
		
		while(current->next!=NULL){
		
			if(root->key==v){
				current->next=root;
				c++;
				break;
			}
			else if((current->next)->key==v){
				current->next=(current->next)->next;
				c++;
				break;
			}
			if(current->next==NULL)
				break;
			current=current->next;
		}
		if(c==0){
			printf("The no. not found");
		}
}
