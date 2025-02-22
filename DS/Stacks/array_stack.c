#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100
#define true 1
#define false 0

typedef struct{
	char arr[MAX_LEN];
	int top;
} stack;

int isFull(stack* s){
	if(s->top==MAX_LEN-1) return true;
	else return false;
}

int isEmpty(stack *s){
	if(s->top==-1) return true;
	else return false;
}

void push(stack* s, char ele){
	if(!isFull(s)) {s->arr[++(s->top)] = ele; printf("%c pushed to stack at %d\n", ele, s->top);}
	else printf("Stack Overflow\n");
}

void pop(stack* s){
	if(!isEmpty(s)) {char ele = s->arr[(s->top)--]; printf("%c popped from stack at %d\n", ele, (s->top)+1);}
	else printf("Stack Underflow\n");
}

void display(stack* s){
	if(s->top==-1){
		printf("Stack is empty.\n");
	}
	int i=0;
	while(i<=s->top){
		printf("%c ", s->arr[i++]);
	}
	printf("\n");
}

