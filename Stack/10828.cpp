#include<iostream>
#define MAX_SIZE 10000

using namespace std;

typedef struct _stack{
    int arr[MAX_SIZE];
    int size;
} Stack;

void InitStack(Stack * s){
    s->size = 0;
}

int StackSize(Stack * s){
    return s->size;
}

bool StackEmpty(Stack * s){
    return s->size == 0 ? true : false;
}

int StackTop(Stack * s){
    return s->size == 0 ? -1 : s->arr[s->size - 1];
}

void StackPush(Stack * s, int n){
    s->arr[(s->size)++] = n;
}

int StackPop(Stack * s){
    if(s->size == 0)
        return -1;
    return s->arr[(s->size--) - 1];
}

int main()
{
    Stack s;
    InitStack(&s);
    string command;

    int n, x;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
        cin >> command;
        if(command == "push"){
            cin >> x;
            StackPush(&s, x);
        }
        else if(command == "pop"){
            cout << StackPop(&s) << '\n';
        }
        else if(command == "size"){
            cout << StackSize(&s) << '\n';
        }
        else if(command == "empty"){
            cout << StackEmpty(&s) << '\n';
        }
        else{ // top
            cout << StackTop(&s) << '\n';
        }
    }

}