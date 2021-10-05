#pragma once
#include "baseDeclarations.h"
#include "scaner.h"
#include "stack.h"
#include "dstring.h"

typedef struct {
    stack stack;
    token actualToken;   
}parserData;

typedef struct
{
    stack stack;
}expresionParserData;

typedef struct {
    scanerData sData;
    parserData pData;
    expresionParserData epData;
    bNodePtr symTable;
}systemData;

