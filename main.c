#include <stdio.h>
#include <stdbool.h>

char input[1];
int quit = 1;

void enqueue(int n){                // add patient to the queue
    printf("%i, enqueued\n", n);
}

int dequeue() {                     // remove patient from the queue
    printf("dequeue\n");
    return 0;
}

void queue(){
    printf("Queue\n");
}

int first(){                        // get first patient in the queue(pos)
    printf("First\n");
    return 0;
}

int last(){                         // get last patient in the queue(pos)
    printf("last\n");
    return 0;
}

void clear(){                       // clear queue
    printf("clear\n");
}

bool isEmpty(){                     // state if queue is empty
    printf("isEmpty\n");
    return true;
}

bool isFull(){                      // state if queue is full
    printf("isFull\n");
    return true;
}

void print(){                       // list available doctors
    printf("print\n");
}

void help(){                        // display help list with commands
    printf("help\n");
}

void ready(){                       // param could be used, ready doctor accept patient
    printf("ready\n");
}

int position(int n){                // return position in queue
    printf("position\n");
    return n;
}

void remover(int n){                // remove patient from queue
    printf("%i, removed\n", n);
}

void away(){
    printf("away\n");
}

void exit(){
    printf("exit");
    quit = 0;
}

int main(){
    while(quit != 0) {
        printf("What would you like to do?\n");
        scanf("%c", &input);
        switch(input[0]) {
            case 'i':
                enqueue(0);
                break;
            case 'p':
                position(0);
                break;
            case 'q':
                remover(0);
                break;
            case 'd':
                print();
                break;
            case 'h':
                help();
                break;
            case 'o':
                dequeue();
                break;
            case 'r':
                ready();
                break;
            case 'a':
                away();
                break;
            case 'w':
                queue();
                break;
            case 'x':
                exit(0);
                break;

        }
    }
    return 0;
}