#include<stdio.h>
#include<stdlib.h>
struct n{
int d;
struct n*nx;
};
struct n*t=NULL;
void push(){
struct n*p=(struct n*)malloc(sizeof(struct n));
if(p==NULL){printf("Overflow\n");return;}
printf("Value: ");
scanf("%d",&p->d);
p->nx=t;
t=p;
}
void pop(){
struct n*p;
if(t==NULL){printf("Underflow\n");return;}
p=t;
printf("Deleted:%d\n",p->d);
t=t->nx;
free(p);
}
void peek(){
if(t==NULL){printf("Empty\n");return;}
printf("Top:%d\n",t->d);
}
void display(){
struct n*p=t;
if(p==NULL){printf("Empty\n");return;}
while(p){
printf("%d ",p->d);
p=p->nx;
}
printf("\n");
}
int main(){
int c;
while(1){
printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\nChoice:");
scanf("%d",&c);
if(c==1)push();
else if(c==2)pop();
else if(c==3)peek();
else if(c==4)display();
else if(c==5)break;
else printf("Wrong Choice\n");
}
return 0;
}