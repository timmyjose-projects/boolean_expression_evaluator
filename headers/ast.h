#ifndef _AST_H_
#define _AST_H_
#ifdef __cplusplus
extern "C" {
#endif

  typedef struct {
    bool value; 
  } Expression;

  typedef struct {
    Expression *left;
    Expression *right;

  } AndExpression;

  typedef struct {
    Expression *left;
    Expression *right;

  } OrExpression;

  typedef struct {
    Expression *left;
    Expression *right;

  } XorExpression;

  typedef struct {
    Expression *expr;

  } NotExpression;

  typedef struct {
    Expression *antecedent;
    Expression *consequent;

  } ImplicationExpression;

  typedef struct {
    Expression *antecedent;
    Expression *consequent;

  } EquivalenceExpression;

#ifdef __cplusplus
}
#endif
#endif
