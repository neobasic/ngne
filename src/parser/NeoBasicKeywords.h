
// Generated from NeoBasicKeywords.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace parser {


class  NeoBasicKeywords : public antlr4::Lexer {
public:
  enum {
    CONST = 1, VAL = 2, VAR = 3, IF = 4, THEN = 5, UNLESS = 6, ORELSE = 7, 
    THIS = 8, IOTA = 9, ALL = 10, ANY = 11, ONE = 12, TWO = 13, NIL = 14, 
    TYPEOF = 15, INSTANCEOF = 16, SIZEOF = 17, IS = 18, IN = 19, BETWEEN = 20, 
    LIKE = 21, NOT = 22, AND = 23, OR = 24, XOR = 25, NAND = 26, NOR = 27, 
    NXOR = 28, ATOM = 29, AUTO = 30, VOID = 31, BOOL8 = 32, BOOL16 = 33, 
    BOOL32 = 34, BOOL64 = 35, BOOL128 = 36, BOOL = 37, DIG = 38, BIT = 39, 
    OCT = 40, HEX = 41, NIBBLE = 42, BYTE = 43, NUMBER = 44, NAT8 = 45, 
    NAT16 = 46, NAT32 = 47, NAT64 = 48, NAT128 = 49, NAT = 50, BIGNAT = 51, 
    INT8 = 52, INT16 = 53, INT32 = 54, INT64 = 55, INT128 = 56, INT = 57, 
    BIGINT = 58, REAL16 = 59, REAL32 = 60, REAL64 = 61, REAL128 = 62, REAL = 63, 
    BIGREAL = 64, DEC1 = 65, DEC2 = 66, DEC3 = 67, DEC4 = 68, DEC5 = 69, 
    DEC6 = 70, DEC7 = 71, DEC8 = 72, DECIMAL = 73, MONEY = 74, BIGDECIMAL = 75, 
    RATIO8 = 76, RATIO16 = 77, RATIO32 = 78, RATIO64 = 79, RATIO128 = 80, 
    RATIO = 81, COMPLEX16 = 82, COMPLEX32 = 83, COMPLEX64 = 84, COMPLEX128 = 85, 
    COMPLEX = 86, QUATERN16 = 87, QUATERN32 = 88, QUATERN64 = 89, QUATERN128 = 90, 
    QUATERN = 91, DATE = 92, ELAPSE = 93, ASCII = 94, CHAR8 = 95, CHAR16 = 96, 
    CHAR32 = 97, CHAR = 98, STR = 99, STRING8 = 100, STRING16 = 101, STRING32 = 102, 
    STRING = 103, REGEX = 104, BINARY = 105, RANGE = 106, TRUE = 107, FALSE = 108, 
    NONZERO = 109, ZERO = 110, MINVALUE = 111, MAXVALUE = 112, NAN = 113, 
    POSITIVEINFINITY = 114, NEGATIVEINFINITY = 115, LOCALDATE = 116, LOCALDATETIME = 117, 
    OFFSETDATE = 118, OFFSETDATETIME = 119, ZONEDDATE = 120, ZONEDDATETIME = 121, 
    TOMORROW = 122, TODAY = 123, NOW = 124, YESTERDAY = 125, EON = 126, 
    EPOCH = 127, LETTER = 128, MARK = 129, DIGIT = 130, PUNCTUATION = 131, 
    SYMBOL = 132, SEPARATOR = 133, NONPRINTABLE = 134, NULL_ = 135, BLANK = 136, 
    NONBLANK = 137, OKAY = 138, FAIL = 139, SOME = 140, NONE = 141, YEA = 142, 
    NAY = 143, DATA = 144, EOT = 145, AT = 146, SCAN = 147, ECHO = 148, 
    TILL = 149, SINCE = 150, PLAY = 151, CLS = 152, CD = 153, PWD = 154, 
    LS = 155, MKDIR = 156, RMDIR = 157, TOUCH = 158, RM = 159, CP = 160, 
    MV = 161, RENAME = 162, CHMOD = 163, CHOWN = 164, CHGRP = 165, RAISE = 166, 
    PANIC = 167, TRACE = 168, DEBUG = 169, INFO = 170, WARN = 171, ERROR = 172, 
    FATAL = 173
  };

  explicit NeoBasicKeywords(antlr4::CharStream *input);

  ~NeoBasicKeywords() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace parser
