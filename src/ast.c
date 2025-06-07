#include "dac/ast.h"

Node* FunctionNode_New(const String name, const String returnType, Vector* body) {
  Node* node = malloc(sizeof(Node));
  node->type = NODE_FUNCTION;
  node->function_n.name = name;
  node->function_n.returnType = returnType;
  node->function_n.body = body;
  return node;
}

Node* PrintNode_New(const String message) {
  Node* node = malloc(sizeof(Node));
  node->type = NODE_PRINT;
  node->print_n.message = message;
  return node;
}

Node* CallNode_New(const String functionName) {
  Node* node = malloc(sizeof(Node));
  node->type = NODE_CALL;
  node->call_n.functionName = functionName;
  return node;
}

Node* ReturnNode_New(int returnValue) {
  Node* node = malloc(sizeof(Node));
  node->type = NODE_RETURN;
  node->return_n.returnValue = returnValue;
  return node;
}