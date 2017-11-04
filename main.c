#include <stdio.h>
#include <stdbool.h>

void enqueue(int n){
    printf("%i, enqueued\n", n);
}

int dequeue() {
    printf("dequeue\n");
    return 0;
}

int first(){
    printf("First\n");
    return 0;
}

int last(){
    printf("last\n");
    return 0;
}

void clear(){
    printf("clear\n");
}

bool isEmpty(){
    printf("isEmpty\n");
    return true;
}

bool isFull(){
    printf("isFull\n");
    return true;
}

void print(){
    printf("print\n");
}

int position(int n){
    printf("position\n");
    return n;
}

void remover(int n){
    printf("%i, removed\n", n);
}

int main(){
    printf("Hello, World!\n");
    return 0;
}