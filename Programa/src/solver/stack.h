#pragma once


typedef struct stack Stack;

typedef struct node Node;


struct node
{
  /* Aqui agrega tu código */
};

struct stack
{
  /* Aqui agrega tu código */
};


Stack *stack_init();

void push(int row, int col, int color);

int pop(int row, int col);

void destroy(Stack *stack);
