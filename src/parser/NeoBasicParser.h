
// Generated from NeoBasicParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace parser {


class  NeoBasicParser : public NeoBasicParserBase {
public:
  enum {
    LEFT_PARENTHESIS = 1, RIGHT_PARENTHESIS = 2, LEFT_BRACKET = 3, RIGHT_BRACKET = 4, 
    LEFT_CURLY = 5, RIGHT_CURLY = 6, LEFT_ANGLE = 7, RIGHT_ANGLE = 8, DOT = 9, 
    COMMA = 10, SEMICOLON = 11, COLON = 12, EXCLAMATION = 13, QUESTION = 14, 
    APOSTROPHE = 15, QUOTE = 16, BACKTICK = 17, AT = 18, HASH = 19, DOLLAR = 20, 
    AMPERSAND = 21, ASTERISK = 22, SLASH = 23, DIVISION = 24, PERCENT = 25, 
    BACKSLASH = 26, TILDE = 27, CARET = 28, PIPE = 29, UNDERSCORE = 30, 
    EQUAL = 31, PLUS = 32, MINUS = 33, ELLIPSIS = 34, LAMBDA = 35, DOUBLE_LEFT_BRACKET = 36, 
    DOUBLE_RIGHT_BRACKET = 37, DOUBLE_LEFT_CURLY = 38, DOUBLE_RIGHT_CURLY = 39, 
    DOUBLE_LEFT_ANGLE = 40, DOUBLE_RIGHT_ANGLE = 41, DOUBLE_EXCLAMATION = 42, 
    DOUBLE_QUESTION = 43, DOUBLE_COLON = 44, DOUBLE_SEMICOLON = 45, SPECIAL_ASSIGNMENT = 46, 
    INCREMENT = 47, DECREMENT = 48, SQUARE_POWER = 49, SQUARE_ROOT = 50, 
    FACTORIAL = 51, BIT_NEGATION = 52, DEEP_CLONING = 53, SORTING = 54, 
    QUOTIENT = 55, PERCENTAGE_RATE = 56, PERCENTAGE_AMOUNT = 57, PERCENTAGE_INCREASE = 58, 
    PERCENTAGE_DECREASE = 59, PERCENTAGE_VARIATION = 60, BIT_CLEAR = 61, 
    UNSIGNED_RIGHT_SHIFT = 62, DIVISIBLE_BY = 63, NOT_DIVISIBLE_BY = 64, 
    ELVIS_TEST = 65, THREE_WAY_TEST = 66, STRICT_EQUALITY = 67, STRICT_INEQUALITY = 68, 
    LOOSE_EQUALITY = 69, LOOSE_INEQUALITY = 70, LESS_OR_EQUALS = 71, GREATER_OR_EQUALS = 72, 
    ERROR_PROPAGATION_NONE_COALESCING = 73, POP_ONE_ASSIGNMENT = 74, PULL_ALL_ASSIGNMENT = 75, 
    PIPE_ASSIGNMENT = 76, DESTRUCTURING_ASSIGNMENT = 77, ADDITION_ASSIGNMENT = 78, 
    SUBTRACTION_ASSIGNMENT = 79, MULTIPLICATION_ASSIGNMENT = 80, REAL_DIVISION_ASSIGNMENT = 81, 
    INTEGER_DIVISION_ASSIGNMENT = 82, QUOTIENT_ASSIGNMENT = 83, MODULO_ASSIGNMENT = 84, 
    NTH_POWER_ASSIGNMENT = 85, NTH_ROOT_ASSIGNMENT = 86, PERCENTAGE_RATE_ASSIGNMENT = 87, 
    PERCENTAGE_AMOUNT_ASSIGNMENT = 88, PERCENTAGE_INCREASE_ASSIGNMENT = 89, 
    PERCENTAGE_DECREASE_ASSIGNMENT = 90, PERCENTAGE_VARIATION_ASSIGNMENT = 91, 
    BIT_AND_ASSIGNMENT = 92, BIT_OR_ASSIGNMENT = 93, BIT_XOR_ASSIGNMENT = 94, 
    BIT_CLEAR_ASSIGNMENT = 95, LEFT_SHIFT_ASSIGNMENT = 96, SIGNED_RIGHT_SHIFT_ASSIGNMENT = 97, 
    UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = 98, NONE_COALESCING_ASSIGNMENT = 99, 
    INTERVAL_INCLUSIVE = 100, INTERVAL_LEFT_EXCLUSIVE = 101, INTERVAL_RIGHT_EXCLUSIVE = 102, 
    INTERVAL_EXCLUSIVE = 103, INTERVAL = 104, INTERVAL_LEFT = 105, INTERVAL_RIGHT = 106, 
    MIXIN = 107, EXTENDS = 108, NECK_RULE = 109, ONELINER_SUITE = 110, MONAD_BIND = 111, 
    PIPELINE = 112, COMMAND_SEQUENCE = 113, COMMAND_SEQUENCE_OKAY = 114, 
    COMMAND_SEQUENCE_FAIL = 115, COMMAND_BACKGROUND = 116, OUTPUT_REDIRECTION = 117, 
    APPEND_OUTPUT_REDIRECTION = 118, STDOUT_REDIRECTION = 119, APPEND_STDOUT_REDIRECTION = 120, 
    STDERR_REDIRECTION = 121, APPEND_STDERR_REDIRECTION = 122, DEC_LIT = 123, 
    DECIMAL_NUMBER = 124, REAL_LIT = 125, REAL_NUMBER = 126, RATIO_LIT = 127, 
    RATIONAL_NUMBER = 128, IMAGINARY_LIT = 129, IMAGINARY_NUMBER = 130, 
    NATURAL_LIT = 131, INTEGER_LIT = 132, INTEGER_NUMBER = 133, BINARY_LIT = 134, 
    HEREDOC_LITERAL = 135, HEREDOC_CONTENT = 136, REGULAR_EXPRESSION_LIT = 137, 
    REGULAR_EXPRESSION_CONTENT = 138, STRING_LIT = 139, STRING_PREFIX = 140, 
    WSTRING_LIT = 141, STRING_SEQUENCE = 142, VERBATIM_STRING = 143, TEMPLATE_STRING = 144, 
    PLACEHOLDER_VALUE = 145, CHAR_LIT = 146, WCHAR_LIT = 147, WCHAR_PREFIX = 148, 
    UNICODE_CHAR = 149, ASCII_LIT = 150, ASCII_PREFIX = 151, ASCII_CHAR = 152, 
    ATOM_DOT_LIT = 153, DOT_FRACTION = 154, SHELL_LIT = 155, SHELL_PATH_LIT = 156, 
    FILESYSTEM_PATH = 157, ABSOLUTE_PATH = 158, RELATIVE_PATH = 159, TILDE_PATH = 160, 
    PATH_NAME = 161, FILE_NAME = 162, DRIVE_LETTER = 163, TAG = 164, IDENTIFIER = 165, 
    ATOM_IDENTIFIER = 166, ASPECT_IDENTIFIER = 167, SHELL_IDENTIFIER = 168, 
    MUSIC_NOTE = 169, MUSIC_ALPHABET = 170, OCTAVE_DIGIT = 171, PITCH_FLAT = 172, 
    PITCH_SHARP = 173, SHEBANG = 174, WOODSTOCK = 175, SHERLOCK = 176, RUBBERDUCK = 177, 
    SONGBIRD = 178, LINE_COMMENT = 179, BLOCK_COMMENT = 180, CELL_COMMENT = 181, 
    HASHTAG = 182, EOS = 183, EOL = 184, BOM = 185, UTF8_BOM = 186, UTF16_BOM = 187, 
    UTF32_BOM = 188, WSP = 189, UnexpectedCharacter = 190, MODULE = 191, 
    ALGORITHM = 192, NOTABENE = 193, USE = 194, AS = 195, OF = 196, INCLUDE = 197, 
    INTERFACE = 198, EXTERN = 199, RPROC = 200, FOREIGN = 201, CONST = 202, 
    VAL = 203, VAR = 204, FUNC = 205, FEED = 206, FMAP = 207, SUB = 208, 
    TYPE = 209, DIM = 210, FACT = 211, ENUM = 212, STRUCT = 213, PROTO = 214, 
    TRAIT = 215, CLASS = 216, GET = 217, SET = 218, OPER = 219, EVENT = 220, 
    DEF = 221, DEFN = 222, UNDEF = 223, PUBLIC = 224, PROTECTED = 225, PRIVATE = 226, 
    LINEAR = 227, SHARED = 228, VOLATILE = 229, LOCAL = 230, ATOMIC = 231, 
    STATIC = 232, COMPTIME = 233, MUTABLE = 234, TRANSIENT = 235, INLINE = 236, 
    VIEW = 237, SYNCHRO = 238, VIRTUAL = 239, OVERRIDE = 240, FINAL = 241, 
    OFF = 242, ASYNC = 243, ABSTRACT = 244, SEALED = 245, SINGLETON = 246, 
    RECORD = 247, MONAD = 248, MEASURE = 249, INFIX = 250, EXPLICIT = 251, 
    DEFER = 252, WITH = 253, DO = 254, IF = 255, THEN = 256, ELIF = 257, 
    ELSE = 258, UNLESS = 259, OTHERWISE = 260, MATCH = 261, CASE = 262, 
    FALLTHROUGH = 263, TRY = 264, CATCH = 265, LOOP = 266, UPTO = 267, FOR = 268, 
    EACH = 269, STEP = 270, WHILE = 271, UNTIL = 272, REDO = 273, NEXT = 274, 
    BREAK = 275, RETURN = 276, YIELD = 277, GO = 278, TO = 279, AWAIT = 280, 
    SWITCH = 281, WHEN = 282, DEFAULT = 283, CONTINUE = 284, BEGIN = 285, 
    FINALLY = 286, INVAR = 287, THIS = 288, IOTA = 289, NTH = 290, TOP = 291, 
    END = 292, IT = 293, SELF = 294, SUPER = 295, PARENT = 296, ALL = 297, 
    ANY = 298, ONE = 299, TWO = 300, NIL = 301, LET = 302, OWN = 303, MUT = 304, 
    TYPEOF = 305, INSTANCEOF = 306, SIZEOF = 307, IS = 308, IN = 309, BETWEEN = 310, 
    LIKE = 311, NOT = 312, AND = 313, OR = 314, XOR = 315, NAND = 316, NOR = 317, 
    NXOR = 318, NEW = 319, DEL = 320, ATOM = 321, AUTO = 322, VOID = 323, 
    BOOL8 = 324, BOOL16 = 325, BOOL32 = 326, BOOL64 = 327, BOOL128 = 328, 
    BOOL = 329, DIG = 330, BIT = 331, OCT = 332, HEX = 333, ROMAN = 334, 
    NIBBLE = 335, BYTE = 336, NUMBER = 337, NAT8 = 338, NAT16 = 339, NAT32 = 340, 
    NAT64 = 341, NAT128 = 342, NAT = 343, BIGNAT = 344, INT8 = 345, INT16 = 346, 
    INT32 = 347, INT64 = 348, INT128 = 349, INT = 350, BIGINT = 351, REAL16 = 352, 
    REAL32 = 353, REAL64 = 354, REAL128 = 355, REAL = 356, BIGREAL = 357, 
    DEC1 = 358, DEC2 = 359, DEC3 = 360, DEC4 = 361, DEC5 = 362, DEC6 = 363, 
    DEC7 = 364, DEC8 = 365, DECIMAL = 366, MONEY = 367, BIGDECIMAL = 368, 
    RATIO8 = 369, RATIO16 = 370, RATIO32 = 371, RATIO64 = 372, RATIO128 = 373, 
    RATIO = 374, COMPLEX16 = 375, COMPLEX32 = 376, COMPLEX64 = 377, COMPLEX128 = 378, 
    COMPLEX = 379, QUATERN16 = 380, QUATERN32 = 381, QUATERN64 = 382, QUATERN128 = 383, 
    QUATERN = 384, DATE = 385, ELAPSE = 386, ASCII = 387, CHAR8 = 388, CHAR16 = 389, 
    CHAR32 = 390, CHAR = 391, WCHAR = 392, ANSI = 393, STR8 = 394, STR16 = 395, 
    STR32 = 396, STR = 397, CSTR = 398, WSTR = 399, REGEX = 400, BINARY = 401, 
    PATH = 402, URI = 403, INET = 404, RANGE = 405, PAIR = 406, TUPLE = 407, 
    ARRAY = 408, LIST = 409, DICT = 410, CHAN = 411, VEC = 412, MAT = 413, 
    TSET = 414, QUEUE = 415, DEQUE = 416, XML = 417, TABLE = 418, MEMO = 419, 
    TRUE = 420, FALSE = 421, NONZERO = 422, ZERO = 423, MINVALUE = 424, 
    MAXVALUE = 425, NAN = 426, POSITIVEINFINITY = 427, NEGATIVEINFINITY = 428, 
    LOCALDATE = 429, LOCALDATETIME = 430, OFFSETDATE = 431, OFFSETDATETIME = 432, 
    ZONEDDATE = 433, ZONEDDATETIME = 434, TOMORROW = 435, TODAY = 436, NOW = 437, 
    YESTERDAY = 438, EON = 439, EPOCH = 440, LETTER = 441, MARK = 442, DIGIT = 443, 
    PUNCTUATION = 444, SYMBOL = 445, SEPARATOR = 446, NONPRINTABLE = 447, 
    NULL_ = 448, BLANK = 449, NONBLANK = 450, FOLDER = 451, FILE = 452, 
    LINKLINKFILE = 453, PIPEFILE = 454, SOCKETFILE = 455, BLOCKDEVICE = 456, 
    CHARDEVICE = 457, NULLDEVICE = 458, URL = 459, URN = 460, IPV4 = 461, 
    IPV6 = 462, OKAY = 463, FAIL = 464, SOME = 465, NONE = 466, YEA = 467, 
    NAY = 468, DATA = 469, EOT = 470, SCAN = 471, ECHO = 472, ALERT = 473, 
    ENTRY = 474, TILL = 475, SINCE = 476, TIMELY = 477, CANCEL = 478, PLAY = 479, 
    CLS = 480, CD = 481, PWD = 482, LS = 483, MKDIR = 484, RMDIR = 485, 
    TOUCH = 486, RM = 487, CP = 488, MV = 489, RENAME = 490, CHMOD = 491, 
    CHOWN = 492, CHGRP = 493, RAISE = 494, PANIC = 495, UNIT = 496, FROM = 497, 
    ONCE = 498, TDATA = 499, CALL = 500, HIDE = 501, SHOW = 502, INTO = 503, 
    PASS = 504, PAST = 505, TFAIL = 506, TRACE = 507, DEBUG = 508, INFO = 509, 
    WARN = 510, ERROR = 511, FATAL = 512
  };

  enum {
    RuleNeoProgram = 0, RuleOneLinerProgram = 1, RuleScriptFileProgram = 2, 
    RuleInstructionSentence = 3, RuleDirective = 4, RuleInterpreterDirective = 5, 
    RulePragmaDirective = 6, RuleCanaryTestingDirective = 7, RuleDeclaration = 8, 
    RuleAccessSpecifier = 9, RuleConstSentence = 10, RuleConstSpecifier = 11, 
    RuleConstClause = 12, RuleConstDeclare = 13, RuleConstDeclareSingle = 14, 
    RuleConstDeclareMultiple = 15, RuleConstDeclareParallel = 16, RuleValSentence = 17, 
    RuleValSpecifier = 18, RuleValClause = 19, RuleValDeclare = 20, RuleValDeclareSingle = 21, 
    RuleValDeclareMultiple = 22, RuleValDeclareParallel = 23, RuleVarSentence = 24, 
    RuleVarSpecifier = 25, RuleVarClause = 26, RuleVarDeclare = 27, RuleVarDeclareSingle = 28, 
    RuleVarDeclareMultiple = 29, RuleVarDeclareParallel = 30, RuleStatement = 31, 
    RuleSimpleStatement = 32, RuleEmptyStatement = 33, RuleExpressionStatement = 34, 
    RuleAssignmentStatement = 35, RuleAssignmentSingle = 36, RuleAssignmentMultiple = 37, 
    RuleAssignmentParallel = 38, RuleCompoundStatement = 39, RuleConditionalStatement = 40, 
    RuleIfStatement = 41, RuleIfThenClause = 42, RuleUnlessStatement = 43, 
    RuleUnlessClause = 44, RulePrefixUnaryOperator = 45, RulePosfixUnaryOperator = 46, 
    RuleUnaryArithmeticOperator = 47, RuleUnaryBitwiseOperator = 48, RuleUnaryLogicalOperator = 49, 
    RuleUnarySpreadOperator = 50, RuleUnarySortOperator = 51, RuleUnaryCloneOperator = 52, 
    RuleUnaryMetaOperator = 53, RuleBinaryExponentialOperator = 54, RuleBinaryMultiplicativeOperator = 55, 
    RuleBinaryAdditiveOperator = 56, RuleBitShiftOperator = 57, RuleBitConjunctionOperator = 58, 
    RuleBitExclusiveDisjunctionOperator = 59, RuleBitDisjunctionOperator = 60, 
    RuleBinaryComparisonOperator = 61, RuleBinaryRelationalOperator = 62, 
    RuleBinaryConditionalOperator = 63, RuleBinaryConjunctionOperator = 64, 
    RuleBinaryExclusiveDisjunctionOperator = 65, RuleBinaryDisjunctionOperator = 66, 
    RuleBinaryCoalescingOperator = 67, RuleAssignmentOperator = 68, RuleSingleAssignmentOperator = 69, 
    RuleMultipleAssignmentOperator = 70, RuleCompoundAssignmentOperator = 71, 
    RuleLabelIdentifier = 72, RuleSymbolIdentifier = 73, RuleQualifiedIdentifier = 74, 
    RuleIdentifiers = 75, RuleSymbolIdentifiers = 76, RuleQualifiedIdentifiers = 77, 
    RuleType = 78, RuleNativeType = 79, RulePosfixTypeWrapper = 80, RuleEscalarType = 81, 
    RuleBooleanType = 82, RuleNumericType = 83, RuleNumericDigit = 84, RuleNumericNatural = 85, 
    RuleNumericInteger = 86, RuleNumericReal = 87, RuleNumericDecimal = 88, 
    RuleNumericRatio = 89, RuleNumericComplex = 90, RuleNumericQuaternion = 91, 
    RuleTemporalType = 92, RuleCharacterType = 93, RuleSequenceType = 94, 
    RuleCompositeType = 95, RuleMetaType = 96, RuleExpressions = 97, RuleJuxtapositionExpressions = 98, 
    RulePrimaryExpressions = 99, RuleExpression = 100, RulePrimaryExpression = 101, 
    RuleOperand = 102, RuleFactScope = 103, RuleConverter = 104, RuleSelector = 105, 
    RuleIndexing = 106, RuleSlicing = 107, RuleSlicingRange = 108, RuleRangeExpression = 109, 
    RuleArguments = 110, RuleAssignmentExpression = 111, RuleCondicionalExpression = 112, 
    RuleGuardsExpression = 113, RuleGuardClause = 114, RuleGuardDefault = 115, 
    RuleMacroExpression = 116, RuleMacroCall = 117, RuleLiteral = 118, RulePredeclaredValue = 119, 
    RuleValueConstruct = 120, RuleEscalarLiteral = 121, RuleBooleanLiteral = 122, 
    RuleNumericLiteral = 123, RuleTemporalLiteral = 124, RuleCharacterLiteral = 125, 
    RuleSequenceLiteral = 126, RuleOptionLiteral = 127, RuleResultLiteral = 128, 
    RuleMaybeLiteral = 129, RuleEitherLiteral = 130, RuleStreamLiteral = 131, 
    RuleLoggingLevel = 132
  };

  explicit NeoBasicParser(antlr4::TokenStream *input);

  NeoBasicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NeoBasicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class NeoProgramContext;
  class OneLinerProgramContext;
  class ScriptFileProgramContext;
  class InstructionSentenceContext;
  class DirectiveContext;
  class InterpreterDirectiveContext;
  class PragmaDirectiveContext;
  class CanaryTestingDirectiveContext;
  class DeclarationContext;
  class AccessSpecifierContext;
  class ConstSentenceContext;
  class ConstSpecifierContext;
  class ConstClauseContext;
  class ConstDeclareContext;
  class ConstDeclareSingleContext;
  class ConstDeclareMultipleContext;
  class ConstDeclareParallelContext;
  class ValSentenceContext;
  class ValSpecifierContext;
  class ValClauseContext;
  class ValDeclareContext;
  class ValDeclareSingleContext;
  class ValDeclareMultipleContext;
  class ValDeclareParallelContext;
  class VarSentenceContext;
  class VarSpecifierContext;
  class VarClauseContext;
  class VarDeclareContext;
  class VarDeclareSingleContext;
  class VarDeclareMultipleContext;
  class VarDeclareParallelContext;
  class StatementContext;
  class SimpleStatementContext;
  class EmptyStatementContext;
  class ExpressionStatementContext;
  class AssignmentStatementContext;
  class AssignmentSingleContext;
  class AssignmentMultipleContext;
  class AssignmentParallelContext;
  class CompoundStatementContext;
  class ConditionalStatementContext;
  class IfStatementContext;
  class IfThenClauseContext;
  class UnlessStatementContext;
  class UnlessClauseContext;
  class PrefixUnaryOperatorContext;
  class PosfixUnaryOperatorContext;
  class UnaryArithmeticOperatorContext;
  class UnaryBitwiseOperatorContext;
  class UnaryLogicalOperatorContext;
  class UnarySpreadOperatorContext;
  class UnarySortOperatorContext;
  class UnaryCloneOperatorContext;
  class UnaryMetaOperatorContext;
  class BinaryExponentialOperatorContext;
  class BinaryMultiplicativeOperatorContext;
  class BinaryAdditiveOperatorContext;
  class BitShiftOperatorContext;
  class BitConjunctionOperatorContext;
  class BitExclusiveDisjunctionOperatorContext;
  class BitDisjunctionOperatorContext;
  class BinaryComparisonOperatorContext;
  class BinaryRelationalOperatorContext;
  class BinaryConditionalOperatorContext;
  class BinaryConjunctionOperatorContext;
  class BinaryExclusiveDisjunctionOperatorContext;
  class BinaryDisjunctionOperatorContext;
  class BinaryCoalescingOperatorContext;
  class AssignmentOperatorContext;
  class SingleAssignmentOperatorContext;
  class MultipleAssignmentOperatorContext;
  class CompoundAssignmentOperatorContext;
  class LabelIdentifierContext;
  class SymbolIdentifierContext;
  class QualifiedIdentifierContext;
  class IdentifiersContext;
  class SymbolIdentifiersContext;
  class QualifiedIdentifiersContext;
  class TypeContext;
  class NativeTypeContext;
  class PosfixTypeWrapperContext;
  class EscalarTypeContext;
  class BooleanTypeContext;
  class NumericTypeContext;
  class NumericDigitContext;
  class NumericNaturalContext;
  class NumericIntegerContext;
  class NumericRealContext;
  class NumericDecimalContext;
  class NumericRatioContext;
  class NumericComplexContext;
  class NumericQuaternionContext;
  class TemporalTypeContext;
  class CharacterTypeContext;
  class SequenceTypeContext;
  class CompositeTypeContext;
  class MetaTypeContext;
  class ExpressionsContext;
  class JuxtapositionExpressionsContext;
  class PrimaryExpressionsContext;
  class ExpressionContext;
  class PrimaryExpressionContext;
  class OperandContext;
  class FactScopeContext;
  class ConverterContext;
  class SelectorContext;
  class IndexingContext;
  class SlicingContext;
  class SlicingRangeContext;
  class RangeExpressionContext;
  class ArgumentsContext;
  class AssignmentExpressionContext;
  class CondicionalExpressionContext;
  class GuardsExpressionContext;
  class GuardClauseContext;
  class GuardDefaultContext;
  class MacroExpressionContext;
  class MacroCallContext;
  class LiteralContext;
  class PredeclaredValueContext;
  class ValueConstructContext;
  class EscalarLiteralContext;
  class BooleanLiteralContext;
  class NumericLiteralContext;
  class TemporalLiteralContext;
  class CharacterLiteralContext;
  class SequenceLiteralContext;
  class OptionLiteralContext;
  class ResultLiteralContext;
  class MaybeLiteralContext;
  class EitherLiteralContext;
  class StreamLiteralContext;
  class LoggingLevelContext; 

  class  NeoProgramContext : public antlr4::ParserRuleContext {
  public:
    NeoProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OneLinerProgramContext *oneLinerProgram();
    ScriptFileProgramContext *scriptFileProgram();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NeoProgramContext* neoProgram();

  class  OneLinerProgramContext : public antlr4::ParserRuleContext {
  public:
    OneLinerProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionSentenceContext *instructionSentence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OneLinerProgramContext* oneLinerProgram();

  class  ScriptFileProgramContext : public antlr4::ParserRuleContext {
  public:
    ScriptFileProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionSentenceContext *> instructionSentence();
    InstructionSentenceContext* instructionSentence(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScriptFileProgramContext* scriptFileProgram();

  class  InstructionSentenceContext : public antlr4::ParserRuleContext {
  public:
    InstructionSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectiveContext *directive();
    DeclarationContext *declaration();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstructionSentenceContext* instructionSentence();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpreterDirectiveContext *interpreterDirective();
    PragmaDirectiveContext *pragmaDirective();
    CanaryTestingDirectiveContext *canaryTestingDirective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectiveContext* directive();

  class  InterpreterDirectiveContext : public antlr4::ParserRuleContext {
  public:
    InterpreterDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHEBANG();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpreterDirectiveContext* interpreterDirective();

  class  PragmaDirectiveContext : public antlr4::ParserRuleContext {
  public:
    PragmaDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHEBANG();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaDirectiveContext* pragmaDirective();

  class  CanaryTestingDirectiveContext : public antlr4::ParserRuleContext {
  public:
    CanaryTestingDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WOODSTOCK();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EXCLAMATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CanaryTestingDirectiveContext* canaryTestingDirective();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessSpecifierContext *accessSpecifier();
    DeclarationContext *declaration();
    ConstSentenceContext *constSentence();
    ValSentenceContext *valSentence();
    VarSentenceContext *varSentence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class  ConstSentenceContext : public antlr4::ParserRuleContext {
  public:
    ConstSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstClauseContext *constClause();
    std::vector<ConstSpecifierContext *> constSpecifier();
    ConstSpecifierContext* constSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstSentenceContext* constSentence();

  class  ConstSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ConstSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPTIME();
    antlr4::tree::TerminalNode *INLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstSpecifierContext* constSpecifier();

  class  ConstClauseContext : public antlr4::ParserRuleContext {
  public:
    ConstClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstDeclareContext *constDeclare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstClauseContext* constClause();

  class  ConstDeclareContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclareSingleContext *constDeclareSingle();
    ConstDeclareMultipleContext *constDeclareMultiple();
    ConstDeclareParallelContext *constDeclareParallel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclareContext* constDeclare();

  class  ConstDeclareSingleContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclareSingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifierContext *symbolIdentifier();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionContext *expression();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclareSingleContext* constDeclareSingle();

  class  ConstDeclareMultipleContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclareMultipleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstDeclareSingleContext *> constDeclareSingle();
    ConstDeclareSingleContext* constDeclareSingle(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclareMultipleContext* constDeclareMultiple();

  class  ConstDeclareParallelContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclareParallelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifiersContext *symbolIdentifiers();
    MultipleAssignmentOperatorContext *multipleAssignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclareParallelContext* constDeclareParallel();

  class  ValSentenceContext : public antlr4::ParserRuleContext {
  public:
    ValSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValClauseContext *valClause();
    std::vector<ValSpecifierContext *> valSpecifier();
    ValSpecifierContext* valSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValSentenceContext* valSentence();

  class  ValSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ValSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPTIME();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *INLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValSpecifierContext* valSpecifier();

  class  ValClauseContext : public antlr4::ParserRuleContext {
  public:
    ValClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    VarDeclareContext *varDeclare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValClauseContext* valClause();

  class  ValDeclareContext : public antlr4::ParserRuleContext {
  public:
    ValDeclareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValDeclareSingleContext *valDeclareSingle();
    ValDeclareMultipleContext *valDeclareMultiple();
    ValDeclareParallelContext *valDeclareParallel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDeclareContext* valDeclare();

  class  ValDeclareSingleContext : public antlr4::ParserRuleContext {
  public:
    ValDeclareSingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifierContext *symbolIdentifier();
    TypeContext *type();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDeclareSingleContext* valDeclareSingle();

  class  ValDeclareMultipleContext : public antlr4::ParserRuleContext {
  public:
    ValDeclareMultipleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValDeclareSingleContext *> valDeclareSingle();
    ValDeclareSingleContext* valDeclareSingle(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDeclareMultipleContext* valDeclareMultiple();

  class  ValDeclareParallelContext : public antlr4::ParserRuleContext {
  public:
    ValDeclareParallelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifiersContext *symbolIdentifiers();
    MultipleAssignmentOperatorContext *multipleAssignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDeclareParallelContext* valDeclareParallel();

  class  VarSentenceContext : public antlr4::ParserRuleContext {
  public:
    VarSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarClauseContext *varClause();
    std::vector<VarSpecifierContext *> varSpecifier();
    VarSpecifierContext* varSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarSentenceContext* varSentence();

  class  VarSpecifierContext : public antlr4::ParserRuleContext {
  public:
    VarSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPTIME();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *INLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarSpecifierContext* varSpecifier();

  class  VarClauseContext : public antlr4::ParserRuleContext {
  public:
    VarClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    VarDeclareContext *varDeclare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarClauseContext* varClause();

  class  VarDeclareContext : public antlr4::ParserRuleContext {
  public:
    VarDeclareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclareSingleContext *varDeclareSingle();
    VarDeclareMultipleContext *varDeclareMultiple();
    VarDeclareParallelContext *varDeclareParallel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclareContext* varDeclare();

  class  VarDeclareSingleContext : public antlr4::ParserRuleContext {
  public:
    VarDeclareSingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifierContext *symbolIdentifier();
    TypeContext *type();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclareSingleContext* varDeclareSingle();

  class  VarDeclareMultipleContext : public antlr4::ParserRuleContext {
  public:
    VarDeclareMultipleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarDeclareSingleContext *> varDeclareSingle();
    VarDeclareSingleContext* varDeclareSingle(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclareMultipleContext* varDeclareMultiple();

  class  VarDeclareParallelContext : public antlr4::ParserRuleContext {
  public:
    VarDeclareParallelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifiersContext *symbolIdentifiers();
    MultipleAssignmentOperatorContext *multipleAssignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclareParallelContext* varDeclareParallel();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();
    antlr4::tree::TerminalNode *RUBBERDUCK();
    antlr4::tree::TerminalNode *SONGBIRD();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    SimpleStatementContext *simpleStatement();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EmptyStatementContext *emptyStatement();
    ExpressionStatementContext *expressionStatement();
    AssignmentStatementContext *assignmentStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELLIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentSingleContext *assignmentSingle();
    AssignmentMultipleContext *assignmentMultiple();
    AssignmentParallelContext *assignmentParallel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  AssignmentSingleContext : public antlr4::ParserRuleContext {
  public:
    AssignmentSingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentSingleContext* assignmentSingle();

  class  AssignmentMultipleContext : public antlr4::ParserRuleContext {
  public:
    AssignmentMultipleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentSingleContext *> assignmentSingle();
    AssignmentSingleContext* assignmentSingle(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentMultipleContext* assignmentMultiple();

  class  AssignmentParallelContext : public antlr4::ParserRuleContext {
  public:
    AssignmentParallelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionsContext *primaryExpressions();
    ExpressionsContext *expressions();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    MultipleAssignmentOperatorContext *multipleAssignmentOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentParallelContext* assignmentParallel();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalStatementContext *conditionalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  ConditionalStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatementContext *ifStatement();
    UnlessStatementContext *unlessStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalStatementContext* conditionalStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfThenClauseContext *ifThenClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfThenClauseContext : public antlr4::ParserRuleContext {
  public:
    IfThenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    SimpleStatementContext *simpleStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfThenClauseContext* ifThenClause();

  class  UnlessStatementContext : public antlr4::ParserRuleContext {
  public:
    UnlessStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnlessClauseContext *unlessClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnlessStatementContext* unlessStatement();

  class  UnlessClauseContext : public antlr4::ParserRuleContext {
  public:
    UnlessClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStatementContext *simpleStatement();
    antlr4::tree::TerminalNode *UNLESS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnlessClauseContext* unlessClause();

  class  PrefixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryArithmeticOperatorContext *unaryArithmeticOperator();
    UnaryBitwiseOperatorContext *unaryBitwiseOperator();
    UnaryLogicalOperatorContext *unaryLogicalOperator();
    UnarySpreadOperatorContext *unarySpreadOperator();
    UnarySortOperatorContext *unarySortOperator();
    UnaryMetaOperatorContext *unaryMetaOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryOperatorContext* prefixUnaryOperator();

  class  PosfixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PosfixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnarySortOperatorContext *unarySortOperator();
    UnaryCloneOperatorContext *unaryCloneOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PosfixUnaryOperatorContext* posfixUnaryOperator();

  class  UnaryArithmeticOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryArithmeticOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
    antlr4::tree::TerminalNode *SQUARE_POWER();
    antlr4::tree::TerminalNode *SQUARE_ROOT();
    antlr4::tree::TerminalNode *FACTORIAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryArithmeticOperatorContext* unaryArithmeticOperator();

  class  UnaryBitwiseOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryBitwiseOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *BIT_NEGATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryBitwiseOperatorContext* unaryBitwiseOperator();

  class  UnaryLogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryLogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryLogicalOperatorContext* unaryLogicalOperator();

  class  UnarySpreadOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnarySpreadOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELLIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnarySpreadOperatorContext* unarySpreadOperator();

  class  UnarySortOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnarySortOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *SORTING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnarySortOperatorContext* unarySortOperator();

  class  UnaryCloneOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryCloneOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DEEP_CLONING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryCloneOperatorContext* unaryCloneOperator();

  class  UnaryMetaOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryMetaOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEOF();
    antlr4::tree::TerminalNode *SIZEOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryMetaOperatorContext* unaryMetaOperator();

  class  BinaryExponentialOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryExponentialOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUARE_POWER();
    antlr4::tree::TerminalNode *SQUARE_ROOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryExponentialOperatorContext* binaryExponentialOperator();

  class  BinaryMultiplicativeOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryMultiplicativeOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *DIVISION();
    antlr4::tree::TerminalNode *QUOTIENT();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERCENTAGE_RATE();
    antlr4::tree::TerminalNode *PERCENTAGE_AMOUNT();
    antlr4::tree::TerminalNode *PERCENTAGE_INCREASE();
    antlr4::tree::TerminalNode *PERCENTAGE_DECREASE();
    antlr4::tree::TerminalNode *PERCENTAGE_VARIATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryMultiplicativeOperatorContext* binaryMultiplicativeOperator();

  class  BinaryAdditiveOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryAdditiveOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryAdditiveOperatorContext* binaryAdditiveOperator();

  class  BitShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_LEFT_ANGLE();
    antlr4::tree::TerminalNode *DOUBLE_RIGHT_ANGLE();
    antlr4::tree::TerminalNode *UNSIGNED_RIGHT_SHIFT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitShiftOperatorContext* bitShiftOperator();

  class  BitConjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitConjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *BIT_CLEAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitConjunctionOperatorContext* bitConjunctionOperator();

  class  BitExclusiveDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitExclusiveDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitExclusiveDisjunctionOperatorContext* bitExclusiveDisjunctionOperator();

  class  BitDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitDisjunctionOperatorContext* bitDisjunctionOperator();

  class  BinaryComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELVIS_TEST();
    antlr4::tree::TerminalNode *THREE_WAY_TEST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryComparisonOperatorContext* binaryComparisonOperator();

  class  BinaryRelationalOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryRelationalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRICT_EQUALITY();
    antlr4::tree::TerminalNode *STRICT_INEQUALITY();
    antlr4::tree::TerminalNode *LOOSE_EQUALITY();
    antlr4::tree::TerminalNode *LOOSE_INEQUALITY();
    antlr4::tree::TerminalNode *LEFT_ANGLE();
    antlr4::tree::TerminalNode *LESS_OR_EQUALS();
    antlr4::tree::TerminalNode *RIGHT_ANGLE();
    antlr4::tree::TerminalNode *GREATER_OR_EQUALS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryRelationalOperatorContext* binaryRelationalOperator();

  class  BinaryConditionalOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryConditionalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *DIVISIBLE_BY();
    antlr4::tree::TerminalNode *NOT_DIVISIBLE_BY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryConditionalOperatorContext* binaryConditionalOperator();

  class  BinaryConjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryConjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryConjunctionOperatorContext* binaryConjunctionOperator();

  class  BinaryExclusiveDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryExclusiveDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *NXOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryExclusiveDisjunctionOperatorContext* binaryExclusiveDisjunctionOperator();

  class  BinaryDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryDisjunctionOperatorContext* binaryDisjunctionOperator();

  class  BinaryCoalescingOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryCoalescingOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAMATION();
    antlr4::tree::TerminalNode *DOUBLE_EXCLAMATION();
    antlr4::tree::TerminalNode *ERROR_PROPAGATION_NONE_COALESCING();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *DOUBLE_QUESTION();
    antlr4::tree::TerminalNode *OTHERWISE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryCoalescingOperatorContext* binaryCoalescingOperator();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    MultipleAssignmentOperatorContext *multipleAssignmentOperator();
    CompoundAssignmentOperatorContext *compoundAssignmentOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  SingleAssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    SingleAssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *POP_ONE_ASSIGNMENT();
    antlr4::tree::TerminalNode *PULL_ALL_ASSIGNMENT();
    antlr4::tree::TerminalNode *PIPE_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleAssignmentOperatorContext* singleAssignmentOperator();

  class  MultipleAssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    MultipleAssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *DESTRUCTURING_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultipleAssignmentOperatorContext* multipleAssignmentOperator();

  class  CompoundAssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    CompoundAssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDITION_ASSIGNMENT();
    antlr4::tree::TerminalNode *SUBTRACTION_ASSIGNMENT();
    antlr4::tree::TerminalNode *MULTIPLICATION_ASSIGNMENT();
    antlr4::tree::TerminalNode *REAL_DIVISION_ASSIGNMENT();
    antlr4::tree::TerminalNode *INTEGER_DIVISION_ASSIGNMENT();
    antlr4::tree::TerminalNode *MODULO_ASSIGNMENT();
    antlr4::tree::TerminalNode *NTH_POWER_ASSIGNMENT();
    antlr4::tree::TerminalNode *NTH_ROOT_ASSIGNMENT();
    antlr4::tree::TerminalNode *PERCENTAGE_RATE_ASSIGNMENT();
    antlr4::tree::TerminalNode *PERCENTAGE_AMOUNT_ASSIGNMENT();
    antlr4::tree::TerminalNode *PERCENTAGE_INCREASE_ASSIGNMENT();
    antlr4::tree::TerminalNode *PERCENTAGE_DECREASE_ASSIGNMENT();
    antlr4::tree::TerminalNode *PERCENTAGE_VARIATION_ASSIGNMENT();
    antlr4::tree::TerminalNode *BIT_AND_ASSIGNMENT();
    antlr4::tree::TerminalNode *BIT_CLEAR_ASSIGNMENT();
    antlr4::tree::TerminalNode *BIT_XOR_ASSIGNMENT();
    antlr4::tree::TerminalNode *BIT_OR_ASSIGNMENT();
    antlr4::tree::TerminalNode *LEFT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *SIGNED_RIGHT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *UNSIGNED_RIGHT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *NONE_COALESCING_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundAssignmentOperatorContext* compoundAssignmentOperator();

  class  LabelIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LabelIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelIdentifierContext* labelIdentifier();

  class  SymbolIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SymbolIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolIdentifierContext* symbolIdentifier();

  class  QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class  IdentifiersContext : public antlr4::ParserRuleContext {
  public:
    IdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifiersContext* identifiers();

  class  SymbolIdentifiersContext : public antlr4::ParserRuleContext {
  public:
    SymbolIdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SymbolIdentifierContext *> symbolIdentifier();
    SymbolIdentifierContext* symbolIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolIdentifiersContext* symbolIdentifiers();

  class  QualifiedIdentifiersContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedIdentifierContext *> qualifiedIdentifier();
    QualifiedIdentifierContext* qualifiedIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedIdentifiersContext* qualifiedIdentifiers();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NativeTypeContext *> nativeType();
    NativeTypeContext* nativeType(size_t i);
    PosfixTypeWrapperContext *posfixTypeWrapper();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *PIPE();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  NativeTypeContext : public antlr4::ParserRuleContext {
  public:
    NativeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EscalarTypeContext *escalarType();
    CompositeTypeContext *compositeType();
    MetaTypeContext *metaType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NativeTypeContext* nativeType();

  class  PosfixTypeWrapperContext : public antlr4::ParserRuleContext {
  public:
    PosfixTypeWrapperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAMATION();
    std::vector<antlr4::tree::TerminalNode *> QUESTION();
    antlr4::tree::TerminalNode* QUESTION(size_t i);
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *RIGHT_ANGLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PosfixTypeWrapperContext* posfixTypeWrapper();

  class  EscalarTypeContext : public antlr4::ParserRuleContext {
  public:
    EscalarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanTypeContext *booleanType();
    NumericTypeContext *numericType();
    TemporalTypeContext *temporalType();
    CharacterTypeContext *characterType();
    SequenceTypeContext *sequenceType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EscalarTypeContext* escalarType();

  class  BooleanTypeContext : public antlr4::ParserRuleContext {
  public:
    BooleanTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL8();
    antlr4::tree::TerminalNode *BOOL16();
    antlr4::tree::TerminalNode *BOOL32();
    antlr4::tree::TerminalNode *BOOL64();
    antlr4::tree::TerminalNode *BOOL128();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanTypeContext* booleanType();

  class  NumericTypeContext : public antlr4::ParserRuleContext {
  public:
    NumericTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericDigitContext *numericDigit();
    NumericNaturalContext *numericNatural();
    NumericIntegerContext *numericInteger();
    NumericRealContext *numericReal();
    NumericDecimalContext *numericDecimal();
    NumericRatioContext *numericRatio();
    NumericComplexContext *numericComplex();
    NumericQuaternionContext *numericQuaternion();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericTypeContext* numericType();

  class  NumericDigitContext : public antlr4::ParserRuleContext {
  public:
    NumericDigitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIG();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *OCT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *NIBBLE();
    antlr4::tree::TerminalNode *BYTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericDigitContext* numericDigit();

  class  NumericNaturalContext : public antlr4::ParserRuleContext {
  public:
    NumericNaturalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAT8();
    antlr4::tree::TerminalNode *NAT16();
    antlr4::tree::TerminalNode *NAT32();
    antlr4::tree::TerminalNode *NAT64();
    antlr4::tree::TerminalNode *NAT128();
    antlr4::tree::TerminalNode *NAT();
    antlr4::tree::TerminalNode *BIGNAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericNaturalContext* numericNatural();

  class  NumericIntegerContext : public antlr4::ParserRuleContext {
  public:
    NumericIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT8();
    antlr4::tree::TerminalNode *INT16();
    antlr4::tree::TerminalNode *INT32();
    antlr4::tree::TerminalNode *INT64();
    antlr4::tree::TerminalNode *INT128();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIGINT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericIntegerContext* numericInteger();

  class  NumericRealContext : public antlr4::ParserRuleContext {
  public:
    NumericRealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL16();
    antlr4::tree::TerminalNode *REAL32();
    antlr4::tree::TerminalNode *REAL64();
    antlr4::tree::TerminalNode *REAL128();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *BIGREAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericRealContext* numericReal();

  class  NumericDecimalContext : public antlr4::ParserRuleContext {
  public:
    NumericDecimalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC1();
    antlr4::tree::TerminalNode *DEC2();
    antlr4::tree::TerminalNode *DEC3();
    antlr4::tree::TerminalNode *DEC4();
    antlr4::tree::TerminalNode *DEC5();
    antlr4::tree::TerminalNode *DEC6();
    antlr4::tree::TerminalNode *DEC7();
    antlr4::tree::TerminalNode *DEC8();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *MONEY();
    antlr4::tree::TerminalNode *BIGDECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericDecimalContext* numericDecimal();

  class  NumericRatioContext : public antlr4::ParserRuleContext {
  public:
    NumericRatioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RATIO8();
    antlr4::tree::TerminalNode *RATIO16();
    antlr4::tree::TerminalNode *RATIO32();
    antlr4::tree::TerminalNode *RATIO64();
    antlr4::tree::TerminalNode *RATIO128();
    antlr4::tree::TerminalNode *RATIO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericRatioContext* numericRatio();

  class  NumericComplexContext : public antlr4::ParserRuleContext {
  public:
    NumericComplexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPLEX16();
    antlr4::tree::TerminalNode *COMPLEX32();
    antlr4::tree::TerminalNode *COMPLEX64();
    antlr4::tree::TerminalNode *COMPLEX128();
    antlr4::tree::TerminalNode *COMPLEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericComplexContext* numericComplex();

  class  NumericQuaternionContext : public antlr4::ParserRuleContext {
  public:
    NumericQuaternionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUATERN16();
    antlr4::tree::TerminalNode *QUATERN32();
    antlr4::tree::TerminalNode *QUATERN64();
    antlr4::tree::TerminalNode *QUATERN128();
    antlr4::tree::TerminalNode *QUATERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericQuaternionContext* numericQuaternion();

  class  TemporalTypeContext : public antlr4::ParserRuleContext {
  public:
    TemporalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *ELAPSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemporalTypeContext* temporalType();

  class  CharacterTypeContext : public antlr4::ParserRuleContext {
  public:
    CharacterTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *CHAR8();
    antlr4::tree::TerminalNode *CHAR16();
    antlr4::tree::TerminalNode *CHAR32();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *WCHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharacterTypeContext* characterType();

  class  SequenceTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANSI();
    antlr4::tree::TerminalNode *STR8();
    antlr4::tree::TerminalNode *STR16();
    antlr4::tree::TerminalNode *STR32();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *CSTR();
    antlr4::tree::TerminalNode *WSTR();
    antlr4::tree::TerminalNode *REGEX();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceTypeContext* sequenceType();

  class  CompositeTypeContext : public antlr4::ParserRuleContext {
  public:
    CompositeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *PAIR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompositeTypeContext* compositeType();

  class  MetaTypeContext : public antlr4::ParserRuleContext {
  public:
    MetaTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATOM();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MetaTypeContext* metaType();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionsContext* expressions();

  class  JuxtapositionExpressionsContext : public antlr4::ParserRuleContext {
  public:
    JuxtapositionExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JuxtapositionExpressionsContext* juxtapositionExpressions();

  class  PrimaryExpressionsContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryExpressionContext *> primaryExpression();
    PrimaryExpressionContext* primaryExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionsContext* primaryExpressions();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    PrefixUnaryOperatorContext *prefixUnaryOperator();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AssignmentExpressionContext *assignmentExpression();
    CondicionalExpressionContext *condicionalExpression();
    MacroExpressionContext *macroExpression();
    BinaryExponentialOperatorContext *binaryExponentialOperator();
    BinaryMultiplicativeOperatorContext *binaryMultiplicativeOperator();
    BinaryAdditiveOperatorContext *binaryAdditiveOperator();
    BitShiftOperatorContext *bitShiftOperator();
    BitConjunctionOperatorContext *bitConjunctionOperator();
    BitExclusiveDisjunctionOperatorContext *bitExclusiveDisjunctionOperator();
    BitDisjunctionOperatorContext *bitDisjunctionOperator();
    BinaryComparisonOperatorContext *binaryComparisonOperator();
    BinaryRelationalOperatorContext *binaryRelationalOperator();
    BinaryConditionalOperatorContext *binaryConditionalOperator();
    BinaryConjunctionOperatorContext *binaryConjunctionOperator();
    BinaryExclusiveDisjunctionOperatorContext *binaryExclusiveDisjunctionOperator();
    BinaryDisjunctionOperatorContext *binaryDisjunctionOperator();
    PosfixUnaryOperatorContext *posfixUnaryOperator();
    BinaryCoalescingOperatorContext *binaryCoalescingOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    PrimaryExpressionContext *primaryExpression();
    ConverterContext *converter();
    SelectorContext *selector();
    IndexingContext *indexing();
    SlicingContext *slicing();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();
  PrimaryExpressionContext* primaryExpression(int precedence);
  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    PredeclaredValueContext *predeclaredValue();
    QualifiedIdentifierContext *qualifiedIdentifier();
    ExpressionContext *expression();
    FactScopeContext *factScope();
    antlr4::tree::TerminalNode *BACKTICK();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperandContext* operand();

  class  FactScopeContext : public antlr4::ParserRuleContext {
  public:
    FactScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *TWO();
    antlr4::tree::TerminalNode *NIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactScopeContext* factScope();

  class  ConverterContext : public antlr4::ParserRuleContext {
  public:
    ConverterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConverterContext* converter();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorContext* selector();

  class  IndexingContext : public antlr4::ParserRuleContext {
  public:
    IndexingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexingContext* indexing();

  class  SlicingContext : public antlr4::ParserRuleContext {
  public:
    SlicingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    SlicingRangeContext *slicingRange();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SlicingContext* slicing();

  class  SlicingRangeContext : public antlr4::ParserRuleContext {
  public:
    SlicingRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangeExpressionContext *rangeExpression();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SlicingRangeContext* slicingRange();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *INTERVAL_LEFT();
    antlr4::tree::TerminalNode *INTERVAL_RIGHT();
    RangeExpressionContext *rangeExpression();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *INTEGER_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();
  RangeExpressionContext* rangeExpression(int precedence);
  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  CondicionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    CondicionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GuardsExpressionContext *guardsExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CondicionalExpressionContext* condicionalExpression();

  class  GuardsExpressionContext : public antlr4::ParserRuleContext {
  public:
    GuardsExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GuardClauseContext *> guardClause();
    GuardClauseContext* guardClause(size_t i);
    GuardDefaultContext *guardDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardsExpressionContext* guardsExpression();

  class  GuardClauseContext : public antlr4::ParserRuleContext {
  public:
    GuardClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIPE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardClauseContext* guardClause();

  class  GuardDefaultContext : public antlr4::ParserRuleContext {
  public:
    GuardDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIPE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardDefaultContext* guardDefault();

  class  MacroExpressionContext : public antlr4::ParserRuleContext {
  public:
    MacroExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MacroCallContext *> macroCall();
    MacroCallContext* macroCall(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroExpressionContext* macroExpression();

  class  MacroCallContext : public antlr4::ParserRuleContext {
  public:
    MacroCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroCallContext* macroCall();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EscalarLiteralContext *escalarLiteral();
    OptionLiteralContext *optionLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  PredeclaredValueContext : public antlr4::ParserRuleContext {
  public:
    PredeclaredValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *IOTA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredeclaredValueContext* predeclaredValue();

  class  ValueConstructContext : public antlr4::ParserRuleContext {
  public:
    ValueConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueConstructContext* valueConstruct();

  class  EscalarLiteralContext : public antlr4::ParserRuleContext {
  public:
    EscalarLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanLiteralContext *booleanLiteral();
    NumericLiteralContext *numericLiteral();
    TemporalLiteralContext *temporalLiteral();
    CharacterLiteralContext *characterLiteral();
    SequenceLiteralContext *sequenceLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EscalarLiteralContext* escalarLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURAL_LIT();
    antlr4::tree::TerminalNode *INTEGER_LIT();
    antlr4::tree::TerminalNode *DEC_LIT();
    antlr4::tree::TerminalNode *REAL_LIT();
    antlr4::tree::TerminalNode *RATIO_LIT();
    antlr4::tree::TerminalNode *IMAGINARY_LIT();
    antlr4::tree::TerminalNode *NONZERO();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *ZERO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *NAN();
    antlr4::tree::TerminalNode *POSITIVEINFINITY();
    antlr4::tree::TerminalNode *NEGATIVEINFINITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  TemporalLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemporalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATOM_DOT_LIT();
    antlr4::tree::TerminalNode *LOCALDATE();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *LOCALDATETIME();
    antlr4::tree::TerminalNode *OFFSETDATE();
    antlr4::tree::TerminalNode *OFFSETDATETIME();
    antlr4::tree::TerminalNode *ZONEDDATE();
    antlr4::tree::TerminalNode *ZONEDDATETIME();
    antlr4::tree::TerminalNode *TOMORROW();
    antlr4::tree::TerminalNode *TODAY();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *YESTERDAY();
    antlr4::tree::TerminalNode *EON();
    antlr4::tree::TerminalNode *EPOCH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemporalLiteralContext* temporalLiteral();

  class  CharacterLiteralContext : public antlr4::ParserRuleContext {
  public:
    CharacterLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII_LIT();
    antlr4::tree::TerminalNode *WCHAR_LIT();
    antlr4::tree::TerminalNode *CHAR_LIT();
    antlr4::tree::TerminalNode *LETTER();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *PUNCTUATION();
    antlr4::tree::TerminalNode *SYMBOL();
    antlr4::tree::TerminalNode *SEPARATOR();
    antlr4::tree::TerminalNode *NONPRINTABLE();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharacterLiteralContext* characterLiteral();

  class  SequenceLiteralContext : public antlr4::ParserRuleContext {
  public:
    SequenceLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEREDOC_LITERAL();
    antlr4::tree::TerminalNode *REGULAR_EXPRESSION_LIT();
    antlr4::tree::TerminalNode *WSTRING_LIT();
    antlr4::tree::TerminalNode *STRING_LIT();
    antlr4::tree::TerminalNode *ATOM_DOT_LIT();
    antlr4::tree::TerminalNode *BINARY_LIT();
    antlr4::tree::TerminalNode *NONBLANK();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *BLANK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceLiteralContext* sequenceLiteral();

  class  OptionLiteralContext : public antlr4::ParserRuleContext {
  public:
    OptionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResultLiteralContext *resultLiteral();
    MaybeLiteralContext *maybeLiteral();
    EitherLiteralContext *eitherLiteral();
    StreamLiteralContext *streamLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionLiteralContext* optionLiteral();

  class  ResultLiteralContext : public antlr4::ParserRuleContext {
  public:
    ResultLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OKAY();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *FAIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResultLiteralContext* resultLiteral();

  class  MaybeLiteralContext : public antlr4::ParserRuleContext {
  public:
    MaybeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOME();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MaybeLiteralContext* maybeLiteral();

  class  EitherLiteralContext : public antlr4::ParserRuleContext {
  public:
    EitherLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEA();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *NAY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EitherLiteralContext* eitherLiteral();

  class  StreamLiteralContext : public antlr4::ParserRuleContext {
  public:
    StreamLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *EOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StreamLiteralContext* streamLiteral();

  class  LoggingLevelContext : public antlr4::ParserRuleContext {
  public:
    LoggingLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRACE();
    antlr4::tree::TerminalNode *DEBUG();
    antlr4::tree::TerminalNode *INFO();
    antlr4::tree::TerminalNode *WARN();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *FATAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoggingLevelContext* loggingLevel();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex);
  bool rangeExpressionSempred(RangeExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace parser
