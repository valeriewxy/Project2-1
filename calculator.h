#ifndef _calculator_h
#define _calculator_h

#include <stdbool.h>

extern bool isOperand(char c);
extern bool isOperator(char c);
extern int evaluation_tree(Tree tree);
extern int evaluation(Tree tree);