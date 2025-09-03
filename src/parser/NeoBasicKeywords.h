
// Generated from NeoBasicKeywords.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace parser {


class  NeoBasicKeywords : public antlr4::Lexer {
public:
  enum {
    MODULE = 1, ALGORITHM = 2, NOTABENE = 3, USE = 4, AS = 5, OF = 6, INCLUDE = 7, 
    INTERFACE = 8, EXTERN = 9, RPROC = 10, FOREIGN = 11, CONST = 12, VAL = 13, 
    VAR = 14, FUNC = 15, FEED = 16, FMAP = 17, SUB = 18, TYPE = 19, DIM = 20, 
    FACT = 21, ENUM = 22, STRUCT = 23, PROTO = 24, TRAIT = 25, CLASS = 26, 
    GET = 27, SET = 28, OPER = 29, EVENT = 30, DEF = 31, DEFN = 32, UNDEF = 33, 
    PUBLIC = 34, PROTECTED = 35, PRIVATE = 36, LAMBDA = 37, LINEAR = 38, 
    SHARED = 39, VOLATILE = 40, LOCAL = 41, ATOMIC = 42, STATIC = 43, COMPTIME = 44, 
    MUTABLE = 45, TRANSIENT = 46, INLINE = 47, VIEW = 48, SYNCHRO = 49, 
    VIRTUAL = 50, OVERRIDE = 51, FINAL = 52, OFF = 53, ASYNC = 54, ABSTRACT = 55, 
    SEALED = 56, SINGLETON = 57, RECORD = 58, MONAD = 59, MEASURE = 60, 
    INFIX = 61, EXPLICIT = 62, DEFER = 63, WITH = 64, DO = 65, IF = 66, 
    THEN = 67, ELIF = 68, ELSE = 69, UNLESS = 70, OTHERWISE = 71, MATCH = 72, 
    CASE = 73, FALLTHROUGH = 74, TRY = 75, CATCH = 76, LOOP = 77, UPTO = 78, 
    FOR = 79, EACH = 80, STEP = 81, WHILE = 82, UNTIL = 83, REDO = 84, NEXT = 85, 
    BREAK = 86, RETURN = 87, YIELD = 88, GO = 89, TO = 90, AWAIT = 91, SWITCH = 92, 
    WHEN = 93, DEFAULT = 94, CONTINUE = 95, BEGIN = 96, FINALLY = 97, INVAR = 98, 
    THIS = 99, IOTA = 100, NTH = 101, TOP = 102, END = 103, IT = 104, SELF = 105, 
    SUPER = 106, PARENT = 107, ALL = 108, ANY = 109, ONE = 110, TWO = 111, 
    NIL = 112, LET = 113, OWN = 114, MUT = 115, TYPEOF = 116, INSTANCEOF = 117, 
    SIZEOF = 118, IS = 119, IN = 120, BETWEEN = 121, LIKE = 122, NOT = 123, 
    AND = 124, OR = 125, XOR = 126, NAND = 127, NOR = 128, NXOR = 129, NEW = 130, 
    DEL = 131, ATOM = 132, AUTO = 133, VOID = 134, BOOL8 = 135, BOOL16 = 136, 
    BOOL32 = 137, BOOL64 = 138, BOOL128 = 139, BOOL = 140, DIG = 141, BIT = 142, 
    OCT = 143, HEX = 144, ROMAN = 145, NIBBLE = 146, BYTE = 147, NUMBER = 148, 
    NAT8 = 149, NAT16 = 150, NAT32 = 151, NAT64 = 152, NAT128 = 153, NAT = 154, 
    BIGNAT = 155, INT8 = 156, INT16 = 157, INT32 = 158, INT64 = 159, INT128 = 160, 
    INT = 161, BIGINT = 162, REAL16 = 163, REAL32 = 164, REAL64 = 165, REAL128 = 166, 
    REAL = 167, BIGREAL = 168, DEC1 = 169, DEC2 = 170, DEC3 = 171, DEC4 = 172, 
    DEC5 = 173, DEC6 = 174, DEC7 = 175, DEC8 = 176, DECIMAL = 177, MONEY = 178, 
    BIGDECIMAL = 179, RATIO8 = 180, RATIO16 = 181, RATIO32 = 182, RATIO64 = 183, 
    RATIO128 = 184, RATIO = 185, COMPLEX16 = 186, COMPLEX32 = 187, COMPLEX64 = 188, 
    COMPLEX128 = 189, COMPLEX = 190, QUATERN16 = 191, QUATERN32 = 192, QUATERN64 = 193, 
    QUATERN128 = 194, QUATERN = 195, DATE = 196, ELAPSE = 197, ASCII = 198, 
    CHAR8 = 199, CHAR16 = 200, CHAR32 = 201, CHAR = 202, WCHAR = 203, ANSI = 204, 
    STR8 = 205, STR16 = 206, STR32 = 207, STR = 208, CSTR = 209, WSTR = 210, 
    REGEX = 211, BINARY = 212, PATH = 213, URI = 214, INET = 215, RANGE = 216, 
    PAIR = 217, TUPLE = 218, ARRAY = 219, LIST = 220, DICT = 221, CHAN = 222, 
    VEC = 223, MAT = 224, TSET = 225, QUEUE = 226, DEQUE = 227, XML = 228, 
    TABLE = 229, MEMO = 230, TRUE = 231, FALSE = 232, NONZERO = 233, ZERO = 234, 
    MINVALUE = 235, MAXVALUE = 236, NAN = 237, POSITIVEINFINITY = 238, NEGATIVEINFINITY = 239, 
    LOCALDATE = 240, LOCALDATETIME = 241, OFFSETDATE = 242, OFFSETDATETIME = 243, 
    ZONEDDATE = 244, ZONEDDATETIME = 245, TOMORROW = 246, TODAY = 247, NOW = 248, 
    YESTERDAY = 249, EON = 250, EPOCH = 251, LETTER = 252, MARK = 253, DIGIT = 254, 
    PUNCTUATION = 255, SYMBOL = 256, SEPARATOR = 257, NONPRINTABLE = 258, 
    NULL_ = 259, BLANK = 260, NONBLANK = 261, FOLDER = 262, FILE = 263, 
    LINKLINKFILE = 264, PIPEFILE = 265, SOCKETFILE = 266, BLOCKDEVICE = 267, 
    CHARDEVICE = 268, NULLDEVICE = 269, URL = 270, URN = 271, IPV4 = 272, 
    IPV6 = 273, OKAY = 274, FAIL = 275, SOME = 276, NONE = 277, YEA = 278, 
    NAY = 279, DATA = 280, EOT = 281, AT = 282, SCAN = 283, ECHO = 284, 
    ALERT = 285, ENTRY = 286, TILL = 287, SINCE = 288, TIMELY = 289, CANCEL = 290, 
    PLAY = 291, CLS = 292, CD = 293, PWD = 294, LS = 295, MKDIR = 296, RMDIR = 297, 
    TOUCH = 298, RM = 299, CP = 300, MV = 301, RENAME = 302, CHMOD = 303, 
    CHOWN = 304, CHGRP = 305, RAISE = 306, PANIC = 307, UNIT = 308, FROM = 309, 
    ONCE = 310, TDATA = 311, CALL = 312, HIDE = 313, SHOW = 314, INTO = 315, 
    PASS = 316, PAST = 317, TFAIL = 318, TRACE = 319, DEBUG = 320, INFO = 321, 
    WARN = 322, ERROR = 323, FATAL = 324
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
