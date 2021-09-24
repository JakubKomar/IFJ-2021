#include "tokens.h"

char * tokenStr(tokenType type)
{
    char * str;
    switch (type)
    {
    case T_ID:
        str="T_ID";
    break;
    case T_ADD:
        str="T_ADD";
    break;
    case T_SUB:
        str="T_SUB";
    break;
    case T_DIV:
        str="T_DIV";
    break;
    case T_DIV2:
        str="T_DIV2";
    break;
    case T_MUL:
        str="T_MUL";
    break;
    case T_STR_LEN:
        str="T_STR_LEN";
    break;
    case T_ASSIGEN:
        str="T_ASSIGEN";
    break;
    case T_EQ:
        str="T_EQ";
    break;
    case T_NOT_EQ:
        str="T_NOT_EQ";
    break;
    case T_LT:
        str="T_LT";
    break;
    case T_LTE:
        str="T_LTE";
    break;
    case T_GT:
        str="T_GT";
    break;
    case T_GTE:
        str="T_GTE";
    break;
    case T_RBR:
        str="T_RBR";
    break;
    case T_LBR:
        str="T_LBR";
    break;
    case T_COLON:
        str="T_COLON";
    break;
    case T_COMMA:
        str="T_COMMA";
    break;
    case T_EOF:
        str="T_EOF";
    break;
    case T_STR:
        str="T_STR";
    break;
    case T_INT:
        str="T_INT";
    break;
    case T_DOUBLE:
        str="T_DOUBLE";
    break;
    case K_DO:
        str="K_DO";
    break;
    case K_ELSE:
        str="K_ELSE";
    break;
    case K_END:
        str="K_END";
    break;
    case K_FUNCTION:
        str="K_FUNCTION";
    break;
    case K_GLOBAL:
        str="K_GLOBAL";
    break;
    case K_IF:
        str="K_IF";
    break;
    case K_LOCAL:
        str="K_LOCAL";
    break;
    case K_NIL:
        str="K_NIL";
    break;
    case K_READ:
        str="K_READ";
    break;
    case K_REQUIRE:
        str="K_REQUIRE";
    break;
    case K_RETURN:
        str="K_RETURN";
    break;
    case K_THEN:
        str="K_THEN";
    break;
    case K_WHILE:
        str="K_WHILE";
    break;
    case K_WRITE:
        str="K_WRITE";
    break;
    default:
        str="UNDEFINED";
        break;
    }
    return str;
}