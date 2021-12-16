#pragma once

class Token {
public:
    enum TokenType {
        Operator, // +, -, *, =
        Symbol, // { }, ( )
        Keyword, // for, if, while
        Constant, // 4, 0x1, 0x5
        Identifier // var names, function names, class names
    };
    int ID,size;
    char * data;
    TokenType type;
    
    Token(char* txt, TokenType t, int len) {
        type = t;
        data = txt;
        size = len;
    }
};

class LexicalAnalyzer {
public:
    LexicalAnalyzer(char * code, int len) {

    }
};