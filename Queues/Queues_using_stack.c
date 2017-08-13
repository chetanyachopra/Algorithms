#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack {
 int top;
    unsigned capacity;
    int* arr;
}stack;

stack* createStack(unsigned capacity) {
    stack* news = (stack*)malloc(sizeof(stack));
    news->top = -1;
    news->capacity = capacity;
    news->arr = (int *)malloc(news->capacity*sizeof(int));
    return news;
}

int isFull(stack* s) {
    return (s->top == s->capacity-1);
}

int isEmpty(stack *s) {
    return (s->top == -1);
}

void push(stack *s, int data) {
    if(isFull(s))return;
    s->arr[++s->top] = data;
    //printf("pushed\n");
}

int pop(stack* s) {
    if(isEmpty(s))return -1;
    return s->arr[s->top--];
}

int peek(stack* s){
    return s->arr[s->top];
}

int main() {
    stack* s1 = createStack(pow(10, 5));
    stack* s2 = createStack(pow(10, 5));
    int t, k;
	scanf("%d", &t);
    for( k = 0;k < t;k++) {
        int n;scanf("%d", &n);int no, temp, temp1;
        switch(n)
        {
            case 1:
                scanf("%d", &no);
                push(s1, no);
                break;
            case 2:
                if(isEmpty(s2))
                {
                    while(!isEmpty(s1))
                    {
                     temp =  pop(s1);
                     push(s2, temp);
                    }
                temp1 = pop(s2);
                }
                else 
                {
                    temp1 = pop(s2);
                }
                break;
            case 3:
                if(isEmpty(s2))
                {
                      while(!isEmpty(s1))
                      {
                          temp = pop(s1);
                          push(s2, temp);
                      }
                }
                printf("%d\n", peek(s2));
                break;
            default:
                break;
        }
    }
    return 0;
}

