#ifndef SYNTATIC_H
#define SYNTATIC_H

#include <stack>
#include "./token.hpp"

class Syntatic
{

public:
    int currentTokenIndex = 0;
    std::vector<Token> tokenList;
    std::stack<int> tokenStack;

    Syntatic(std::vector<Token> results);

    void savePosition();
    void restorePosition();
    void getToken();

    bool externalDeclaration();
    bool functionDeclaration();
    bool primaryExpression();
    bool postFixExpression();
    bool postFixExpressionR();
    bool argumentExpressionList();
    bool argumentExpressionListR();
    bool argumentExpression();
    bool unaryExpression();
    bool unaryOperator();
    bool castExpression();
    bool typeName();
    bool multiplicativeExpression();
    bool multiplicativeExpressionR();
    bool additiveExpression();
    bool additiveExpressionR();
    bool shiftExpression();
    bool shiftExpressionR();
    bool relationalExpression();
    bool relationalExpressionR();
    bool equalityExpression();
    bool equalityExpressionR();
    bool andExpression();
    bool andExpressionR();
    bool exclusiveOrExpression();
    bool exclusiveOrExpressionR();
    bool inclusiveOrExpression();
    bool inclusiveOrExpressionR();
    bool logicalAndExpression();
    bool inclusiveAndExpressionR();
    bool logicalOrExpression();
    bool logicalOrExpressionR();
    bool logicalAndExpressionR();
    bool conditionExpression();
    bool assignmentExpression();
    bool assignmentOperator();
    bool expression();
    bool expressionR();
    bool expressionStatementBody();
    bool constantExrpression();
    bool declaration();
    bool declarationSpecifiers();
    bool initDeclaratorList();
    bool initDeclaratorListR();
    bool initDeclarator();
    bool typeSpecifier();
    bool specifierList();
    bool structSprecifier();
    bool structGrammar();
    bool structDeclarationList();
    bool structDeclaration();
    bool structDeclarator();
    bool declarator();
    bool directDeclarator();
    bool directDeclaratorR();
    bool pointer();
    bool parameterTypeList();
    bool parameterList();
    bool parameterListR();
    bool parameterDeclaration();
    bool identifierList();
    bool identifierListR();
    bool typeName();
    bool abstractDeclarator();
    bool directAbstractDeclarator();
    bool directAbstractDeclaratorR();
    bool initializer();
    bool initializerList();
    bool initializerListR();
    bool statement();
    bool labeledStatement();
    bool compoundStatement();
    bool compoundStatementBody();
    bool compoundStatementBodyR();
    bool declarationList();
    bool declarationListR();
    bool statementList();
    bool statementListR();
    bool expressionStatement();
    bool selectionsStatement();
    bool iterationStatement();
    bool jumpStatement();
    bool structDeclaratorList();
    bool structDeclaratorListR();
};

#endif