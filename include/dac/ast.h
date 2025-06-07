#ifndef AST_H
#define AST_H

#include "dac/inline.h"
#include "dac/string.h"
#include "dac/vector.h"

typedef enum {
  NODE_FUNCTION,
  NODE_PRINT,
  NODE_CALL,
  NODE_RETURN
} NodeType;

typedef struct Node Node;

struct Node {
  NodeType type;

  struct {
    String name;
    String returnType;
    Vector* body;
  } function_n;
  
  struct {
    String message;
  } print_n;
  
  struct {
    String functionName;
  } call_n;
  
  struct {
    int returnValue;
  } return_n;
};

Node* FunctionNode_New(String, String, Vector*);

Node* PrintNode_New(String name);

Node* CallNode_New(String);

Node* ReturnNode_New(int);

#endif