/**
 * @brief   parser
 *
 * @authors Jakub Komárek (xkomar33)
 */
#pragma once
#include "baseDeclarations.h"
#include "scaner.h"
#include "library/stack.h"

void parserMain();
void useLLtable(tokenType actualToken,stack *stack);