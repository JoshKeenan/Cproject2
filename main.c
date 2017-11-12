#include <stdio.h>
#include <stdbool.h>

char input[1];
int quit = 1;
int mainArray[60];
int front = 0;
int back = -1;
int count = 0;


bool isFull() {                     // check if queue is full
    if(count == 60)
        return 1;
}

bool isEmpty() {                    // check if queue is empty
    if(count == 0)
        return 1;
}

void enqueue(){                     // add patient to the queue

    int patientID;
    if(!isFull()) {
        printf("Please input your Patient ID: ");
        scanf("%i", &patientID);

        if(back == 59) {
            back = -1;
        }

        mainArray[++back] = patientID;
        count++;
        printf("enqueued: %i\n", patientID);
    }

    else{
        printf("The queue is full!\n");
    }
}

int dequeue() {                     // remove patient from the queue
    int data = mainArray[front++];

    if(front == 60) {
        front = 0;
    }

    count--;
    printf("Dequeued: %i\n", data);
    return data;
}

void queue(){
    int loop;

    for(loop = 0; loop < 10; loop++)
        if(loop == front)
            printf("%d(First) ,", mainArray[loop]);
        else if(loop == back)
            printf("%d(Last) ,", mainArray[loop]);
        else
            printf("%d, ", mainArray[loop]);

    printf("\n");
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
                enqueue();
                break;
            case 'p':
                isFull();
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