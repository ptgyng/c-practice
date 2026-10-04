#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 10002
typedef struct{
    int top;
    int data[MAXSIZE];
}SqStack;
int evalRPN(char** tokens, int tokensSize) {
    SqStack op;
    op.top=0;
    for(int i=0;i<tokensSize;i++){
        if(strcmp(tokens[i],"+")==0||strcmp(tokens[i],"-")==0||strcmp(tokens[i],"*")==0||strcmp(tokens[i],"/")==0){
            int op2=op.data[--op.top];
            int op1=op.data[--op.top];
            if(strcmp(tokens[i],"+")==0){
                op.data[op.top++]=op1+op2;
            }
            else if(strcmp(tokens[i],"-")==0){
                op.data[op.top++]=op1-op2;
            }
            else if(strcmp(tokens[i],"*")==0){
                op.data[op.top++]=op1*op2;
            }
            else{
                op.data[op.top++]=op1/op2;
            }
        }
        else{
            if(op.top!=MAXSIZE-1){
                op.data[op.top++]=atoi(tokens[i]);
            }
        }
    }
    return op.data[--op.top];
}