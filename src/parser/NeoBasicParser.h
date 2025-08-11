
// Generated from NeoBasicParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace parser {


class  NeoBasicParser : public antlr4::Parser {
public:
  enum {
    LEFT_PARENTHESIS = 1, RIGHT_PARENTHESIS = 2, LEFT_BRACKET = 3, RIGHT_BRACKET = 4, 
    LEFT_CURLY = 5, RIGHT_CURLY = 6, LEFT_ANGLE = 7, RIGHT_ANGLE = 8, DOT = 9, 
    COMMA = 10, SEMICOLON = 11, COLON = 12, EXCLAMATION = 13, QUESTION = 14, 
    APOSTROPHE = 15, QUOTE = 16, BACKTICK = 17, AT = 18, HASH = 19, DOLLAR = 20, 
    AMPERSAND = 21, ASTERISK = 22, SLASH = 23, DIVISION = 24, PERCENT = 25, 
    BACKSLASH = 26, TILDE = 27, CARET = 28, PIPE = 29, UNDERSCORE = 30, 
    EQUAL = 31, PLUS = 32, MINUS = 33, POSITIVE = 34, NEGATIVE = 35, INCREMENT = 36, 
    DECREMENT = 37, BIT_NOT = 38, BIT_NEGATION = 39, SQUARE_POWER = 40, 
    SQUARE_ROOT = 41, FACTORIAL = 42, ADDITION = 43, SUBTRACTION = 44, MULTIPLICATION = 45, 
    REAL_DIVISION = 46, INTEGER_DIVISION = 47, MODULO = 48, NTH_POWER = 49, 
    NTH_ROOT = 50, PERCENTAGE_RATE = 51, PERCENTAGE_AMOUNT = 52, PERCENTAGE_INCREASE = 53, 
    PERCENTAGE_DECREASE = 54, PERCENTAGE_VARIATION = 55, BIT_AND = 56, BIT_CLEAR = 57, 
    BIT_XOR = 58, BIT_OR = 59, LEFT_SHIFT = 60, SIGNED_RIGHT_SHIFT = 61, 
    UNSIGNED_RIGHT_SHIFT = 62, IDENTITY = 63, NOT_IDENTITY = 64, MEMBERSHIP = 65, 
    NOT_MEMBERSHIP = 66, BETWEEN_RANGE = 67, NOT_BETWEEN_RANGE = 68, MATCHING = 69, 
    NOT_MATCHING = 70, DIVISIBLE_BY = 71, NOT_DIVISIBLE_BY = 72, ELVIS_TEST = 73, 
    THREE_WAY_TEST = 74, EQUALS = 75, NOT_EQUALS = 76, LESS = 77, LESS_OR_EQUALS = 78, 
    GREATER = 79, GREATER_OR_EQUALS = 80, LOGICAL_AND = 81, LOGICAL_XOR = 82, 
    LOGICAL_OR = 83, LOGICAL_NOT = 84, LOGICAL_NAND = 85, LOGICAL_NXOR = 86, 
    LOGICAL_NOR = 87, ERROR_PROPAGATION = 88, ERROR_COALESCING = 89, ERROR_PROPAGATION_NONE_COALESCING = 90, 
    ERROR_TO_NONE_CONVERTION = 91, EXCEPTION_COALESCING = 92, EXCEPTION_STATEMENT = 93, 
    BASIC_ASSIGNMENT = 94, DESTRUCTURING_ASSIGNMENT = 95, MACRO_ASSIGNMENT = 96, 
    ADDITION_ASSIGNMENT = 97, SUBTRACTION_ASSIGNMENT = 98, MULTIPLICATION_ASSIGNMENT = 99, 
    REAL_DIVISION_ASSIGNMENT = 100, INTEGER_DIVISION_ASSIGNMENT = 101, MODULO_ASSIGNMENT = 102, 
    NTH_POWER_ASSIGNMENT = 103, NTH_ROOT_ASSIGNMENT = 104, PERCENTAGE_RATE_ASSIGNMENT = 105, 
    PERCENTAGE_AMOUNT_ASSIGNMENT = 106, PERCENTAGE_INCREASE_ASSIGNMENT = 107, 
    PERCENTAGE_DECREASE_ASSIGNMENT = 108, PERCENTAGE_VARIATION_ASSIGNMENT = 109, 
    BIT_AND_ASSIGNMENT = 110, BIT_OR_ASSIGNMENT = 111, BIT_XOR_ASSIGNMENT = 112, 
    BIT_CLEAR_ASSIGNMENT = 113, BIT_NOT_ASSIGNMENT = 114, LEFT_SHIFT_ASSIGNMENT = 115, 
    SIGNED_RIGHT_SHIFT_ASSIGNMENT = 116, UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = 117, 
    NONE_COALESCING_ASSIGNMENT = 118, INTERVAL = 119, ELLIPSIS = 120, FRACTION = 121, 
    IMPLICIT_RETURN = 122, MONAD_BIND = 123, NUMBER_LIT = 124, TIME_LIT = 125, 
    SEQUENCE_LIT = 126, HEREDOC_LITERAL = 127, HEREDOC_CONTENT = 128, BINARY_LIT = 129, 
    REGULAR_EXPRESSION_LIT = 130, REGULAR_EXPRESSION_CONTENT = 131, STRING_LIT = 132, 
    VERBATIM_STRING_LIT = 133, TEMPLATE_STRING_LIT = 134, STRING_PLACEHOLDER = 135, 
    CHAR_LIT = 136, ASCII_LIT = 137, ATOM_DOT_LIT = 138, DOT_FRACTION = 139, 
    RANGE_LIT = 140, KEYWORD = 141, IDENTIFIER = 142, ATOM_IDENTIFIER = 143, 
    MUSIC_NOTE = 144, MUSIC_ALPHABET = 145, OCTAVE_DIGIT = 146, PITCH_FLAT = 147, 
    PITCH_SHARP = 148, SHEBANG = 149, SHEBANG_INTERPRETER = 150, WOODSTOCK = 151, 
    RUBBERDUCK = 152, TRACERBIRD = 153, LOGGING_LEVEL = 154, HASHTAG = 155, 
    EOS = 156, EOL = 157, BOM = 158, UTF8_BOM = 159, UTF16_BOM = 160, UTF32_BOM = 161, 
    WSP = 162, EXPLICIT_LINE_JOINING = 163, LINE_COMMENT = 164, BLOCK_COMMENT = 165, 
    DOCUMENTATION_COMMENT = 166, UnexpectedCharacter = 167, CONST = 168, 
    VAL = 169, VAR = 170, IF = 171, THEN = 172, UNLESS = 173, ORELSE = 174, 
    THIS = 175, IOTA = 176, ALL = 177, ANY = 178, ONE = 179, TWO = 180, 
    NIL = 181, TYPEOF = 182, INSTANCEOF = 183, SIZEOF = 184, IS = 185, IN = 186, 
    BETWEEN = 187, LIKE = 188, NOT = 189, AND = 190, OR = 191, XOR = 192, 
    NAND = 193, NOR = 194, NXOR = 195, ATOM = 196, AUTO = 197, VOID = 198, 
    BOOL8 = 199, BOOL16 = 200, BOOL32 = 201, BOOL64 = 202, BOOL128 = 203, 
    BOOL = 204, DIG = 205, BIT = 206, OCT = 207, HEX = 208, NIBBLE = 209, 
    BYTE = 210, NUMBER = 211, NAT8 = 212, NAT16 = 213, NAT32 = 214, NAT64 = 215, 
    NAT128 = 216, NAT = 217, BIGNAT = 218, INT8 = 219, INT16 = 220, INT32 = 221, 
    INT64 = 222, INT128 = 223, INT = 224, BIGINT = 225, REAL16 = 226, REAL32 = 227, 
    REAL64 = 228, REAL128 = 229, REAL = 230, BIGREAL = 231, DEC1 = 232, 
    DEC2 = 233, DEC3 = 234, DEC4 = 235, DEC5 = 236, DEC6 = 237, DEC7 = 238, 
    DEC8 = 239, DECIMAL = 240, MONEY = 241, BIGDECIMAL = 242, RATIO8 = 243, 
    RATIO16 = 244, RATIO32 = 245, RATIO64 = 246, RATIO128 = 247, RATIO = 248, 
    COMPLEX16 = 249, COMPLEX32 = 250, COMPLEX64 = 251, COMPLEX128 = 252, 
    COMPLEX = 253, QUATERN16 = 254, QUATERN32 = 255, QUATERN64 = 256, QUATERN128 = 257, 
    QUATERN = 258, DATE = 259, ELAPSE = 260, ASCII = 261, CHAR8 = 262, CHAR16 = 263, 
    CHAR32 = 264, CHAR = 265, STR = 266, STRING8 = 267, STRING16 = 268, 
    STRING32 = 269, STRING = 270, REGEX = 271, BINARY = 272, RANGE = 273, 
    TRUE = 274, FALSE = 275, NONZERO = 276, ZERO = 277, MINVALUE = 278, 
    MAXVALUE = 279, NAN = 280, POSITIVEINFINITY = 281, NEGATIVEINFINITY = 282, 
    LOCALDATE = 283, LOCALDATETIME = 284, OFFSETDATE = 285, OFFSETDATETIME = 286, 
    ZONEDDATE = 287, ZONEDDATETIME = 288, TOMORROW = 289, TODAY = 290, NOW = 291, 
    YESTERDAY = 292, EON = 293, EPOCH = 294, LETTER = 295, MARK = 296, DIGIT = 297, 
    PUNCTUATION = 298, SYMBOL = 299, SEPARATOR = 300, NONPRINTABLE = 301, 
    NULL_ = 302, BLANK = 303, NONBLANK = 304, OKAY = 305, FAIL = 306, SOME = 307, 
    NONE = 308, YEA = 309, NAY = 310, DATA = 311, EOT = 312, SCAN = 313, 
    ECHO = 314, TILL = 315, SINCE = 316, PLAY = 317, CLS = 318, CD = 319, 
    PWD = 320, LS = 321, MKDIR = 322, RMDIR = 323, TOUCH = 324, RM = 325, 
    CP = 326, MV = 327, RENAME = 328, CHMOD = 329, CHOWN = 330, CHGRP = 331, 
    RAISE = 332, PANIC = 333, TRACE = 334, DEBUG = 335, INFO = 336, WARN = 337, 
    ERROR = 338, FATAL = 339
  };

  enum {
    RuleNeoProgram = 0, RuleOneLinerProgram = 1, RuleScriptFileProgram = 2, 
    RuleInstructionSentence = 3, RuleDirective = 4, RuleInterpreterDirective = 5, 
    RulePragmaDirective = 6, RuleCanaryTestDirective = 7, RuleDeclaration = 8, 
    RuleConstDeclaration = 9, RuleConstClause = 10, RuleConstants = 11, 
    RuleConstant = 12, RuleValDeclaration = 13, RuleValClause = 14, RuleVarDeclaration = 15, 
    RuleVarClause = 16, RuleVariables = 17, RuleVariable = 18, RuleStatement = 19, 
    RuleLabeledStatement = 20, RuleDebugingStatement = 21, RuleLoggingStatement = 22, 
    RuleSExpressionStatement = 23, RuleSimpleStatement = 24, RuleEmptyStatement = 25, 
    RuleExpressionStatement = 26, RuleAssignmentStatement = 27, RuleCompoundStatement = 28, 
    RuleConditionalStatement = 29, RuleIfStatement = 30, RuleIfThenClause = 31, 
    RuleUnlessStatement = 32, RuleUnlessClause = 33, RulePrefixUnaryOperator = 34, 
    RulePosfixUnaryOperator = 35, RuleUnaryArithmeticOperator = 36, RuleUnaryBitwiseOperator = 37, 
    RuleUnaryLogicalOperator = 38, RuleUnarySpreadOperator = 39, RuleUnarySortOperator = 40, 
    RuleUnaryCloneOperator = 41, RuleUnaryMetaOperator = 42, RuleBinaryExponentialOperator = 43, 
    RuleBinaryMultiplicativeOperator = 44, RuleBinaryAdditiveOperator = 45, 
    RuleBitShiftOperator = 46, RuleBitConjunctionOperator = 47, RuleBitExclusiveDisjunctionOperator = 48, 
    RuleBitDisjunctionOperator = 49, RuleBinaryComparisonOperator = 50, 
    RuleBinaryRelationalOperator = 51, RuleBinaryConditionalOperator = 52, 
    RuleBinaryConjunctionOperator = 53, RuleBinaryExclusiveDisjunctionOperator = 54, 
    RuleBinaryDisjunctionOperator = 55, RuleBinaryCoalescingOperator = 56, 
    RuleAssignmentOperator = 57, RuleSingleAssignmentOperator = 58, RuleCompoundAssignmentOperator = 59, 
    RuleSymbolIdentifier = 60, RuleQualifiedIdentifier = 61, RuleIdentifiers = 62, 
    RuleSymbolIdentifiers = 63, RuleQualifiedIdentifiers = 64, RuleType = 65, 
    RuleNativeType = 66, RulePosfixTypeWrapper = 67, RuleEscalarType = 68, 
    RuleBooleanType = 69, RuleNumericType = 70, RuleNumericDigit = 71, RuleNumericNatural = 72, 
    RuleNumericInteger = 73, RuleNumericReal = 74, RuleNumericDecimal = 75, 
    RuleNumericRatio = 76, RuleNumericComplex = 77, RuleNumericQuaternion = 78, 
    RuleTemporalType = 79, RuleCharacterType = 80, RuleSequenceType = 81, 
    RuleCompositeType = 82, RuleMetaType = 83, RuleExpressions = 84, RuleJuxtapositionExpression = 85, 
    RulePrimaryExpressions = 86, RuleExpression = 87, RulePrimaryExpression = 88, 
    RuleOperand = 89, RuleFactScope = 90, RuleConverter = 91, RuleSelector = 92, 
    RuleIndexing = 93, RuleSlicing = 94, RuleSlicingRange = 95, RuleArguments = 96, 
    RuleAssignmentExpression = 97, RuleCondicionalExpression = 98, RuleGuardsExpression = 99, 
    RuleGuardClause = 100, RuleGuardDefault = 101, RuleLiteral = 102, RulePredeclaredValue = 103, 
    RuleValueConstruct = 104, RuleEscalarLiteral = 105, RuleBooleanLiteral = 106, 
    RuleNumericLiteral = 107, RuleTemporalLiteral = 108, RuleCharacterLiteral = 109, 
    RuleSequenceLiteral = 110, RuleCompositeLiteral = 111, RuleOptionLiteral = 112, 
    RuleResultLiteral = 113, RuleMaybeLiteral = 114, RuleEitherLiteral = 115, 
    RuleStreamLiteral = 116
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
  class CanaryTestDirectiveContext;
  class DeclarationContext;
  class ConstDeclarationContext;
  class ConstClauseContext;
  class ConstantsContext;
  class ConstantContext;
  class ValDeclarationContext;
  class ValClauseContext;
  class VarDeclarationContext;
  class VarClauseContext;
  class VariablesContext;
  class VariableContext;
  class StatementContext;
  class LabeledStatementContext;
  class DebugingStatementContext;
  class LoggingStatementContext;
  class SExpressionStatementContext;
  class SimpleStatementContext;
  class EmptyStatementContext;
  class ExpressionStatementContext;
  class AssignmentStatementContext;
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
  class CompoundAssignmentOperatorContext;
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
  class JuxtapositionExpressionContext;
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
  class ArgumentsContext;
  class AssignmentExpressionContext;
  class CondicionalExpressionContext;
  class GuardsExpressionContext;
  class GuardClauseContext;
  class GuardDefaultContext;
  class LiteralContext;
  class PredeclaredValueContext;
  class ValueConstructContext;
  class EscalarLiteralContext;
  class BooleanLiteralContext;
  class NumericLiteralContext;
  class TemporalLiteralContext;
  class CharacterLiteralContext;
  class SequenceLiteralContext;
  class CompositeLiteralContext;
  class OptionLiteralContext;
  class ResultLiteralContext;
  class MaybeLiteralContext;
  class EitherLiteralContext;
  class StreamLiteralContext; 

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
    antlr4::tree::TerminalNode *BOM();
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
    CanaryTestDirectiveContext *canaryTestDirective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectiveContext* directive();

  class  InterpreterDirectiveContext : public antlr4::ParserRuleContext {
  public:
    InterpreterDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHEBANG_INTERPRETER();

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

  class  CanaryTestDirectiveContext : public antlr4::ParserRuleContext {
  public:
    CanaryTestDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WOODSTOCK();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EXCLAMATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CanaryTestDirectiveContext* canaryTestDirective();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclarationContext *constDeclaration();
    ValDeclarationContext *valDeclaration();
    VarDeclarationContext *varDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstClauseContext *constClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclarationContext* constDeclaration();

  class  ConstClauseContext : public antlr4::ParserRuleContext {
  public:
    ConstClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstantsContext *constants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstClauseContext* constClause();

  class  ConstantsContext : public antlr4::ParserRuleContext {
  public:
    ConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantsContext* constants();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifiersContext *symbolIdentifiers();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  ValDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ValDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValClauseContext *valClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDeclarationContext* valDeclaration();

  class  ValClauseContext : public antlr4::ParserRuleContext {
  public:
    ValClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    VariablesContext *variables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValClauseContext* valClause();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarClauseContext *varClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  VarClauseContext : public antlr4::ParserRuleContext {
  public:
    VarClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    VariablesContext *variables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarClauseContext* varClause();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariablesContext* variables();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolIdentifiersContext *symbolIdentifiers();
    TypeContext *type();
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    DebugingStatementContext *debugingStatement();
    LoggingStatementContext *loggingStatement();
    SExpressionStatementContext *sExpressionStatement();
    SimpleStatementContext *simpleStatement();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATOM_IDENTIFIER();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  DebugingStatementContext : public antlr4::ParserRuleContext {
  public:
    DebugingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RUBBERDUCK();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DebugingStatementContext* debugingStatement();

  class  LoggingStatementContext : public antlr4::ParserRuleContext {
  public:
    LoggingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRACERBIRD();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoggingStatementContext* loggingStatement();

  class  SExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    SExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    StatementContext *statement();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SExpressionStatementContext* sExpressionStatement();

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
    PrimaryExpressionsContext *primaryExpressions();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

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
    antlr4::tree::TerminalNode *POSITIVE();
    antlr4::tree::TerminalNode *NEGATIVE();
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
    antlr4::tree::TerminalNode *BIT_NOT();
    antlr4::tree::TerminalNode *BIT_NEGATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryBitwiseOperatorContext* unaryBitwiseOperator();

  class  UnaryLogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryLogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_NOT();

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
    std::vector<antlr4::tree::TerminalNode *> CARET();
    antlr4::tree::TerminalNode* CARET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnarySortOperatorContext* unarySortOperator();

  class  UnaryCloneOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryCloneOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);

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
    antlr4::tree::TerminalNode *NTH_POWER();
    antlr4::tree::TerminalNode *NTH_ROOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryExponentialOperatorContext* binaryExponentialOperator();

  class  BinaryMultiplicativeOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryMultiplicativeOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLICATION();
    antlr4::tree::TerminalNode *REAL_DIVISION();
    antlr4::tree::TerminalNode *INTEGER_DIVISION();
    antlr4::tree::TerminalNode *MODULO();
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
    antlr4::tree::TerminalNode *ADDITION();
    antlr4::tree::TerminalNode *SUBTRACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryAdditiveOperatorContext* binaryAdditiveOperator();

  class  BitShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SHIFT();
    antlr4::tree::TerminalNode *SIGNED_RIGHT_SHIFT();
    antlr4::tree::TerminalNode *UNSIGNED_RIGHT_SHIFT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitShiftOperatorContext* bitShiftOperator();

  class  BitConjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitConjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_CLEAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitConjunctionOperatorContext* bitConjunctionOperator();

  class  BitExclusiveDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitExclusiveDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitExclusiveDisjunctionOperatorContext* bitExclusiveDisjunctionOperator();

  class  BitDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_OR();

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
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NOT_EQUALS();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESS_OR_EQUALS();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATER_OR_EQUALS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryRelationalOperatorContext* binaryRelationalOperator();

  class  BinaryConditionalOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryConditionalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *NOT_IDENTITY();
    antlr4::tree::TerminalNode *MEMBERSHIP();
    antlr4::tree::TerminalNode *NOT_MEMBERSHIP();
    antlr4::tree::TerminalNode *BETWEEN_RANGE();
    antlr4::tree::TerminalNode *NOT_BETWEEN_RANGE();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *NOT_MATCHING();
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
    antlr4::tree::TerminalNode *LOGICAL_AND();
    antlr4::tree::TerminalNode *LOGICAL_NAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryConjunctionOperatorContext* binaryConjunctionOperator();

  class  BinaryExclusiveDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryExclusiveDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_XOR();
    antlr4::tree::TerminalNode *LOGICAL_NXOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryExclusiveDisjunctionOperatorContext* binaryExclusiveDisjunctionOperator();

  class  BinaryDisjunctionOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryDisjunctionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_OR();
    antlr4::tree::TerminalNode *LOGICAL_NOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryDisjunctionOperatorContext* binaryDisjunctionOperator();

  class  BinaryCoalescingOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryCoalescingOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR_PROPAGATION();
    antlr4::tree::TerminalNode *ERROR_COALESCING();
    antlr4::tree::TerminalNode *ERROR_PROPAGATION_NONE_COALESCING();
    antlr4::tree::TerminalNode *ERROR_TO_NONE_CONVERTION();
    antlr4::tree::TerminalNode *EXCEPTION_COALESCING();
    antlr4::tree::TerminalNode *EXCEPTION_STATEMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryCoalescingOperatorContext* binaryCoalescingOperator();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleAssignmentOperatorContext *singleAssignmentOperator();
    CompoundAssignmentOperatorContext *compoundAssignmentOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  SingleAssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    SingleAssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_ASSIGNMENT();
    antlr4::tree::TerminalNode *DESTRUCTURING_ASSIGNMENT();
    antlr4::tree::TerminalNode *MACRO_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleAssignmentOperatorContext* singleAssignmentOperator();

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
    antlr4::tree::TerminalNode *BIT_NOT_ASSIGNMENT();
    antlr4::tree::TerminalNode *LEFT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *SIGNED_RIGHT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *UNSIGNED_RIGHT_SHIFT_ASSIGNMENT();
    antlr4::tree::TerminalNode *NONE_COALESCING_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundAssignmentOperatorContext* compoundAssignmentOperator();

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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharacterTypeContext* characterType();

  class  SequenceTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *STRING8();
    antlr4::tree::TerminalNode *STRING16();
    antlr4::tree::TerminalNode *STRING32();
    antlr4::tree::TerminalNode *STRING();
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

  class  JuxtapositionExpressionContext : public antlr4::ParserRuleContext {
  public:
    JuxtapositionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JuxtapositionExpressionContext* juxtapositionExpression();

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
    antlr4::tree::TerminalNode *INTERVAL();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SlicingRangeContext* slicingRange();

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
    antlr4::tree::TerminalNode *IMPLICIT_RETURN();

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

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EscalarLiteralContext *escalarLiteral();
    CompositeLiteralContext *compositeLiteral();
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
    antlr4::tree::TerminalNode *NUMBER_LIT();
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
    antlr4::tree::TerminalNode *TIME_LIT();
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
    antlr4::tree::TerminalNode *SEQUENCE_LIT();
    antlr4::tree::TerminalNode *NONBLANK();
    ValueConstructContext *valueConstruct();
    antlr4::tree::TerminalNode *BLANK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceLiteralContext* sequenceLiteral();

  class  CompositeLiteralContext : public antlr4::ParserRuleContext {
  public:
    CompositeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE_LIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompositeLiteralContext* compositeLiteral();

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


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace parser
