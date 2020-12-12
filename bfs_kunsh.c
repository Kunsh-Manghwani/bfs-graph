#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*tptr;

int d[100],p[100];
char c[100];

void bfs(struct node* arr[],int v){
	int i;
	for(i=0;i<v;i++){
		c[i]='w';
		p[i]=-1;
		d[i]=INT_MAX;
	}
	int s;
	print("Enter the value of Source");
	scanf("%d",&s);
	for(i=0;i<v;i++){
		
	}
}

int main(){
	int i;
	struct node* arr[100];
	for(i=0;i<100;i++){
		arr[i]=NULL;
	}
	printf("Number of vertices in graph \n");
	int v,e;
	scanf("%d",&v);
	int a,b;
	printf("Number of Edges in graph \n");
	scanf("%d",&e);
	for (i=0;i<e;i++){
		scanf("%d %d",&a,&b);
		// for a--b
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=b;
		ptr->next=NULL;
		if(arr[a]==NULL){
			arr[a]=ptr;
		}else{
			tptr=arr[a];
			while(tptr->next !=NULL){
				tptr=tptr->next;
			}
			tptr->next=ptr;
		}
		// for b--a
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=a;
		ptr->next=NULL;
		if(arr[b]==NULL){
			arr[b]=ptr;
		}else{
			tptr=arr[b];
			while(tptr->next !=NULL){
				tptr=tptr->next;
			}
			tptr->next=ptr;
		}
	}
	
	bfs(arr,v);
	
}
