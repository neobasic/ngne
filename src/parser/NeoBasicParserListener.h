
// Generated from NeoBasicParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NeoBasicParser.h"


namespace parser {

/**
 * This interface defines an abstract listener for a parse tree produced by NeoBasicParser.
 */
class  NeoBasicParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterNeoProgram(NeoBasicParser::NeoProgramContext *ctx) = 0;
  virtual void exitNeoProgram(NeoBasicParser::NeoProgramContext *ctx) = 0;

  virtual void enterOneLinerProgram(NeoBasicParser::OneLinerProgramContext *ctx) = 0;
  virtual void exitOneLinerProgram(NeoBasicParser::OneLinerProgramContext *ctx) = 0;

  virtual void enterScriptFileProgram(NeoBasicParser::ScriptFileProgramContext *ctx) = 0;
  virtual void exitScriptFileProgram(NeoBasicParser::ScriptFileProgramContext *ctx) = 0;

  virtual void enterInstructionSentence(NeoBasicParser::InstructionSentenceContext *ctx) = 0;
  virtual void exitInstructionSentence(NeoBasicParser::InstructionSentenceContext *ctx) = 0;

  virtual void enterDirective(NeoBasicParser::DirectiveContext *ctx) = 0;
  virtual void exitDirective(NeoBasicParser::DirectiveContext *ctx) = 0;

  virtual void enterInterpreterDirective(NeoBasicParser::InterpreterDirectiveContext *ctx) = 0;
  virtual void exitInterpreterDirective(NeoBasicParser::InterpreterDirectiveContext *ctx) = 0;

  virtual void enterPragmaDirective(NeoBasicParser::PragmaDirectiveContext *ctx) = 0;
  virtual void exitPragmaDirective(NeoBasicParser::PragmaDirectiveContext *ctx) = 0;

  virtual void enterCanaryTestDirective(NeoBasicParser::CanaryTestDirectiveContext *ctx) = 0;
  virtual void exitCanaryTestDirective(NeoBasicParser::CanaryTestDirectiveContext *ctx) = 0;

  virtual void enterDeclaration(NeoBasicParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(NeoBasicParser::DeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(NeoBasicParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(NeoBasicParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterConstClause(NeoBasicParser::ConstClauseContext *ctx) = 0;
  virtual void exitConstClause(NeoBasicParser::ConstClauseContext *ctx) = 0;

  virtual void enterConstants(NeoBasicParser::ConstantsContext *ctx) = 0;
  virtual void exitConstants(NeoBasicParser::ConstantsContext *ctx) = 0;

  virtual void enterConstant(NeoBasicParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(NeoBasicParser::ConstantContext *ctx) = 0;

  virtual void enterValDeclaration(NeoBasicParser::ValDeclarationContext *ctx) = 0;
  virtual void exitValDeclaration(NeoBasicParser::ValDeclarationContext *ctx) = 0;

  virtual void enterValClause(NeoBasicParser::ValClauseContext *ctx) = 0;
  virtual void exitValClause(NeoBasicParser::ValClauseContext *ctx) = 0;

  virtual void enterVarDeclaration(NeoBasicParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(NeoBasicParser::VarDeclarationContext *ctx) = 0;

  virtual void enterVarClause(NeoBasicParser::VarClauseContext *ctx) = 0;
  virtual void exitVarClause(NeoBasicParser::VarClauseContext *ctx) = 0;

  virtual void enterVariables(NeoBasicParser::VariablesContext *ctx) = 0;
  virtual void exitVariables(NeoBasicParser::VariablesContext *ctx) = 0;

  virtual void enterVariable(NeoBasicParser::VariableContext *ctx) = 0;
  virtual void exitVariable(NeoBasicParser::VariableContext *ctx) = 0;

  virtual void enterStatement(NeoBasicParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NeoBasicParser::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(NeoBasicParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(NeoBasicParser::LabeledStatementContext *ctx) = 0;

  virtual void enterDebugingStatement(NeoBasicParser::DebugingStatementContext *ctx) = 0;
  virtual void exitDebugingStatement(NeoBasicParser::DebugingStatementContext *ctx) = 0;

  virtual void enterLoggingStatement(NeoBasicParser::LoggingStatementContext *ctx) = 0;
  virtual void exitLoggingStatement(NeoBasicParser::LoggingStatementContext *ctx) = 0;

  virtual void enterSExpressionStatement(NeoBasicParser::SExpressionStatementContext *ctx) = 0;
  virtual void exitSExpressionStatement(NeoBasicParser::SExpressionStatementContext *ctx) = 0;

  virtual void enterSimpleStatement(NeoBasicParser::SimpleStatementContext *ctx) = 0;
  virtual void exitSimpleStatement(NeoBasicParser::SimpleStatementContext *ctx) = 0;

  virtual void enterEmptyStatement(NeoBasicParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(NeoBasicParser::EmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(NeoBasicParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NeoBasicParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(NeoBasicParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(NeoBasicParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(NeoBasicParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(NeoBasicParser::CompoundStatementContext *ctx) = 0;

  virtual void enterConditionalStatement(NeoBasicParser::ConditionalStatementContext *ctx) = 0;
  virtual void exitConditionalStatement(NeoBasicParser::ConditionalStatementContext *ctx) = 0;

  virtual void enterIfStatement(NeoBasicParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NeoBasicParser::IfStatementContext *ctx) = 0;

  virtual void enterIfThenClause(NeoBasicParser::IfThenClauseContext *ctx) = 0;
  virtual void exitIfThenClause(NeoBasicParser::IfThenClauseContext *ctx) = 0;

  virtual void enterUnlessStatement(NeoBasicParser::UnlessStatementContext *ctx) = 0;
  virtual void exitUnlessStatement(NeoBasicParser::UnlessStatementContext *ctx) = 0;

  virtual void enterUnlessClause(NeoBasicParser::UnlessClauseContext *ctx) = 0;
  virtual void exitUnlessClause(NeoBasicParser::UnlessClauseContext *ctx) = 0;

  virtual void enterPrefixUnaryOperator(NeoBasicParser::PrefixUnaryOperatorContext *ctx) = 0;
  virtual void exitPrefixUnaryOperator(NeoBasicParser::PrefixUnaryOperatorContext *ctx) = 0;

  virtual void enterPosfixUnaryOperator(NeoBasicParser::PosfixUnaryOperatorContext *ctx) = 0;
  virtual void exitPosfixUnaryOperator(NeoBasicParser::PosfixUnaryOperatorContext *ctx) = 0;

  virtual void enterUnaryArithmeticOperator(NeoBasicParser::UnaryArithmeticOperatorContext *ctx) = 0;
  virtual void exitUnaryArithmeticOperator(NeoBasicParser::UnaryArithmeticOperatorContext *ctx) = 0;

  virtual void enterUnaryBitwiseOperator(NeoBasicParser::UnaryBitwiseOperatorContext *ctx) = 0;
  virtual void exitUnaryBitwiseOperator(NeoBasicParser::UnaryBitwiseOperatorContext *ctx) = 0;

  virtual void enterUnaryLogicalOperator(NeoBasicParser::UnaryLogicalOperatorContext *ctx) = 0;
  virtual void exitUnaryLogicalOperator(NeoBasicParser::UnaryLogicalOperatorContext *ctx) = 0;

  virtual void enterUnarySpreadOperator(NeoBasicParser::UnarySpreadOperatorContext *ctx) = 0;
  virtual void exitUnarySpreadOperator(NeoBasicParser::UnarySpreadOperatorContext *ctx) = 0;

  virtual void enterUnarySortOperator(NeoBasicParser::UnarySortOperatorContext *ctx) = 0;
  virtual void exitUnarySortOperator(NeoBasicParser::UnarySortOperatorContext *ctx) = 0;

  virtual void enterUnaryCloneOperator(NeoBasicParser::UnaryCloneOperatorContext *ctx) = 0;
  virtual void exitUnaryCloneOperator(NeoBasicParser::UnaryCloneOperatorContext *ctx) = 0;

  virtual void enterUnaryMetaOperator(NeoBasicParser::UnaryMetaOperatorContext *ctx) = 0;
  virtual void exitUnaryMetaOperator(NeoBasicParser::UnaryMetaOperatorContext *ctx) = 0;

  virtual void enterBinaryExponentialOperator(NeoBasicParser::BinaryExponentialOperatorContext *ctx) = 0;
  virtual void exitBinaryExponentialOperator(NeoBasicParser::BinaryExponentialOperatorContext *ctx) = 0;

  virtual void enterBinaryMultiplicativeOperator(NeoBasicParser::BinaryMultiplicativeOperatorContext *ctx) = 0;
  virtual void exitBinaryMultiplicativeOperator(NeoBasicParser::BinaryMultiplicativeOperatorContext *ctx) = 0;

  virtual void enterBinaryAdditiveOperator(NeoBasicParser::BinaryAdditiveOperatorContext *ctx) = 0;
  virtual void exitBinaryAdditiveOperator(NeoBasicParser::BinaryAdditiveOperatorContext *ctx) = 0;

  virtual void enterBitShiftOperator(NeoBasicParser::BitShiftOperatorContext *ctx) = 0;
  virtual void exitBitShiftOperator(NeoBasicParser::BitShiftOperatorContext *ctx) = 0;

  virtual void enterBitConjunctionOperator(NeoBasicParser::BitConjunctionOperatorContext *ctx) = 0;
  virtual void exitBitConjunctionOperator(NeoBasicParser::BitConjunctionOperatorContext *ctx) = 0;

  virtual void enterBitExclusiveDisjunctionOperator(NeoBasicParser::BitExclusiveDisjunctionOperatorContext *ctx) = 0;
  virtual void exitBitExclusiveDisjunctionOperator(NeoBasicParser::BitExclusiveDisjunctionOperatorContext *ctx) = 0;

  virtual void enterBitDisjunctionOperator(NeoBasicParser::BitDisjunctionOperatorContext *ctx) = 0;
  virtual void exitBitDisjunctionOperator(NeoBasicParser::BitDisjunctionOperatorContext *ctx) = 0;

  virtual void enterBinaryComparisonOperator(NeoBasicParser::BinaryComparisonOperatorContext *ctx) = 0;
  virtual void exitBinaryComparisonOperator(NeoBasicParser::BinaryComparisonOperatorContext *ctx) = 0;

  virtual void enterBinaryRelationalOperator(NeoBasicParser::BinaryRelationalOperatorContext *ctx) = 0;
  virtual void exitBinaryRelationalOperator(NeoBasicParser::BinaryRelationalOperatorContext *ctx) = 0;

  virtual void enterBinaryConditionalOperator(NeoBasicParser::BinaryConditionalOperatorContext *ctx) = 0;
  virtual void exitBinaryConditionalOperator(NeoBasicParser::BinaryConditionalOperatorContext *ctx) = 0;

  virtual void enterBinaryConjunctionOperator(NeoBasicParser::BinaryConjunctionOperatorContext *ctx) = 0;
  virtual void exitBinaryConjunctionOperator(NeoBasicParser::BinaryConjunctionOperatorContext *ctx) = 0;

  virtual void enterBinaryExclusiveDisjunctionOperator(NeoBasicParser::BinaryExclusiveDisjunctionOperatorContext *ctx) = 0;
  virtual void exitBinaryExclusiveDisjunctionOperator(NeoBasicParser::BinaryExclusiveDisjunctionOperatorContext *ctx) = 0;

  virtual void enterBinaryDisjunctionOperator(NeoBasicParser::BinaryDisjunctionOperatorContext *ctx) = 0;
  virtual void exitBinaryDisjunctionOperator(NeoBasicParser::BinaryDisjunctionOperatorContext *ctx) = 0;

  virtual void enterBinaryCoalescingOperator(NeoBasicParser::BinaryCoalescingOperatorContext *ctx) = 0;
  virtual void exitBinaryCoalescingOperator(NeoBasicParser::BinaryCoalescingOperatorContext *ctx) = 0;

  virtual void enterAssignmentOperator(NeoBasicParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(NeoBasicParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterSingleAssignmentOperator(NeoBasicParser::SingleAssignmentOperatorContext *ctx) = 0;
  virtual void exitSingleAssignmentOperator(NeoBasicParser::SingleAssignmentOperatorContext *ctx) = 0;

  virtual void enterCompoundAssignmentOperator(NeoBasicParser::CompoundAssignmentOperatorContext *ctx) = 0;
  virtual void exitCompoundAssignmentOperator(NeoBasicParser::CompoundAssignmentOperatorContext *ctx) = 0;

  virtual void enterSymbolIdentifier(NeoBasicParser::SymbolIdentifierContext *ctx) = 0;
  virtual void exitSymbolIdentifier(NeoBasicParser::SymbolIdentifierContext *ctx) = 0;

  virtual void enterQualifiedIdentifier(NeoBasicParser::QualifiedIdentifierContext *ctx) = 0;
  virtual void exitQualifiedIdentifier(NeoBasicParser::QualifiedIdentifierContext *ctx) = 0;

  virtual void enterIdentifiers(NeoBasicParser::IdentifiersContext *ctx) = 0;
  virtual void exitIdentifiers(NeoBasicParser::IdentifiersContext *ctx) = 0;

  virtual void enterSymbolIdentifiers(NeoBasicParser::SymbolIdentifiersContext *ctx) = 0;
  virtual void exitSymbolIdentifiers(NeoBasicParser::SymbolIdentifiersContext *ctx) = 0;

  virtual void enterQualifiedIdentifiers(NeoBasicParser::QualifiedIdentifiersContext *ctx) = 0;
  virtual void exitQualifiedIdentifiers(NeoBasicParser::QualifiedIdentifiersContext *ctx) = 0;

  virtual void enterType(NeoBasicParser::TypeContext *ctx) = 0;
  virtual void exitType(NeoBasicParser::TypeContext *ctx) = 0;

  virtual void enterNativeType(NeoBasicParser::NativeTypeContext *ctx) = 0;
  virtual void exitNativeType(NeoBasicParser::NativeTypeContext *ctx) = 0;

  virtual void enterPosfixTypeWrapper(NeoBasicParser::PosfixTypeWrapperContext *ctx) = 0;
  virtual void exitPosfixTypeWrapper(NeoBasicParser::PosfixTypeWrapperContext *ctx) = 0;

  virtual void enterEscalarType(NeoBasicParser::EscalarTypeContext *ctx) = 0;
  virtual void exitEscalarType(NeoBasicParser::EscalarTypeContext *ctx) = 0;

  virtual void enterBooleanType(NeoBasicParser::BooleanTypeContext *ctx) = 0;
  virtual void exitBooleanType(NeoBasicParser::BooleanTypeContext *ctx) = 0;

  virtual void enterNumericType(NeoBasicParser::NumericTypeContext *ctx) = 0;
  virtual void exitNumericType(NeoBasicParser::NumericTypeContext *ctx) = 0;

  virtual void enterNumericDigit(NeoBasicParser::NumericDigitContext *ctx) = 0;
  virtual void exitNumericDigit(NeoBasicParser::NumericDigitContext *ctx) = 0;

  virtual void enterNumericNatural(NeoBasicParser::NumericNaturalContext *ctx) = 0;
  virtual void exitNumericNatural(NeoBasicParser::NumericNaturalContext *ctx) = 0;

  virtual void enterNumericInteger(NeoBasicParser::NumericIntegerContext *ctx) = 0;
  virtual void exitNumericInteger(NeoBasicParser::NumericIntegerContext *ctx) = 0;

  virtual void enterNumericReal(NeoBasicParser::NumericRealContext *ctx) = 0;
  virtual void exitNumericReal(NeoBasicParser::NumericRealContext *ctx) = 0;

  virtual void enterNumericDecimal(NeoBasicParser::NumericDecimalContext *ctx) = 0;
  virtual void exitNumericDecimal(NeoBasicParser::NumericDecimalContext *ctx) = 0;

  virtual void enterNumericRatio(NeoBasicParser::NumericRatioContext *ctx) = 0;
  virtual void exitNumericRatio(NeoBasicParser::NumericRatioContext *ctx) = 0;

  virtual void enterNumericComplex(NeoBasicParser::NumericComplexContext *ctx) = 0;
  virtual void exitNumericComplex(NeoBasicParser::NumericComplexContext *ctx) = 0;

  virtual void enterNumericQuaternion(NeoBasicParser::NumericQuaternionContext *ctx) = 0;
  virtual void exitNumericQuaternion(NeoBasicParser::NumericQuaternionContext *ctx) = 0;

  virtual void enterTemporalType(NeoBasicParser::TemporalTypeContext *ctx) = 0;
  virtual void exitTemporalType(NeoBasicParser::TemporalTypeContext *ctx) = 0;

  virtual void enterCharacterType(NeoBasicParser::CharacterTypeContext *ctx) = 0;
  virtual void exitCharacterType(NeoBasicParser::CharacterTypeContext *ctx) = 0;

  virtual void enterSequenceType(NeoBasicParser::SequenceTypeContext *ctx) = 0;
  virtual void exitSequenceType(NeoBasicParser::SequenceTypeContext *ctx) = 0;

  virtual void enterCompositeType(NeoBasicParser::CompositeTypeContext *ctx) = 0;
  virtual void exitCompositeType(NeoBasicParser::CompositeTypeContext *ctx) = 0;

  virtual void enterMetaType(NeoBasicParser::MetaTypeContext *ctx) = 0;
  virtual void exitMetaType(NeoBasicParser::MetaTypeContext *ctx) = 0;

  virtual void enterExpressions(NeoBasicParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(NeoBasicParser::ExpressionsContext *ctx) = 0;

  virtual void enterJuxtapositionExpression(NeoBasicParser::JuxtapositionExpressionContext *ctx) = 0;
  virtual void exitJuxtapositionExpression(NeoBasicParser::JuxtapositionExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpressions(NeoBasicParser::PrimaryExpressionsContext *ctx) = 0;
  virtual void exitPrimaryExpressions(NeoBasicParser::PrimaryExpressionsContext *ctx) = 0;

  virtual void enterExpression(NeoBasicParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NeoBasicParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(NeoBasicParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(NeoBasicParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterOperand(NeoBasicParser::OperandContext *ctx) = 0;
  virtual void exitOperand(NeoBasicParser::OperandContext *ctx) = 0;

  virtual void enterFactScope(NeoBasicParser::FactScopeContext *ctx) = 0;
  virtual void exitFactScope(NeoBasicParser::FactScopeContext *ctx) = 0;

  virtual void enterConverter(NeoBasicParser::ConverterContext *ctx) = 0;
  virtual void exitConverter(NeoBasicParser::ConverterContext *ctx) = 0;

  virtual void enterSelector(NeoBasicParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(NeoBasicParser::SelectorContext *ctx) = 0;

  virtual void enterIndexing(NeoBasicParser::IndexingContext *ctx) = 0;
  virtual void exitIndexing(NeoBasicParser::IndexingContext *ctx) = 0;

  virtual void enterSlicing(NeoBasicParser::SlicingContext *ctx) = 0;
  virtual void exitSlicing(NeoBasicParser::SlicingContext *ctx) = 0;

  virtual void enterSlicingRange(NeoBasicParser::SlicingRangeContext *ctx) = 0;
  virtual void exitSlicingRange(NeoBasicParser::SlicingRangeContext *ctx) = 0;

  virtual void enterArguments(NeoBasicParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(NeoBasicParser::ArgumentsContext *ctx) = 0;

  virtual void enterAssignmentExpression(NeoBasicParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(NeoBasicParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterCondicionalExpression(NeoBasicParser::CondicionalExpressionContext *ctx) = 0;
  virtual void exitCondicionalExpression(NeoBasicParser::CondicionalExpressionContext *ctx) = 0;

  virtual void enterGuardsExpression(NeoBasicParser::GuardsExpressionContext *ctx) = 0;
  virtual void exitGuardsExpression(NeoBasicParser::GuardsExpressionContext *ctx) = 0;

  virtual void enterGuardClause(NeoBasicParser::GuardClauseContext *ctx) = 0;
  virtual void exitGuardClause(NeoBasicParser::GuardClauseContext *ctx) = 0;

  virtual void enterGuardDefault(NeoBasicParser::GuardDefaultContext *ctx) = 0;
  virtual void exitGuardDefault(NeoBasicParser::GuardDefaultContext *ctx) = 0;

  virtual void enterLiteral(NeoBasicParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(NeoBasicParser::LiteralContext *ctx) = 0;

  virtual void enterPredeclaredValue(NeoBasicParser::PredeclaredValueContext *ctx) = 0;
  virtual void exitPredeclaredValue(NeoBasicParser::PredeclaredValueContext *ctx) = 0;

  virtual void enterValueConstruct(NeoBasicParser::ValueConstructContext *ctx) = 0;
  virtual void exitValueConstruct(NeoBasicParser::ValueConstructContext *ctx) = 0;

  virtual void enterEscalarLiteral(NeoBasicParser::EscalarLiteralContext *ctx) = 0;
  virtual void exitEscalarLiteral(NeoBasicParser::EscalarLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(NeoBasicParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(NeoBasicParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterNumericLiteral(NeoBasicParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(NeoBasicParser::NumericLiteralContext *ctx) = 0;

  virtual void enterTemporalLiteral(NeoBasicParser::TemporalLiteralContext *ctx) = 0;
  virtual void exitTemporalLiteral(NeoBasicParser::TemporalLiteralContext *ctx) = 0;

  virtual void enterCharacterLiteral(NeoBasicParser::CharacterLiteralContext *ctx) = 0;
  virtual void exitCharacterLiteral(NeoBasicParser::CharacterLiteralContext *ctx) = 0;

  virtual void enterSequenceLiteral(NeoBasicParser::SequenceLiteralContext *ctx) = 0;
  virtual void exitSequenceLiteral(NeoBasicParser::SequenceLiteralContext *ctx) = 0;

  virtual void enterCompositeLiteral(NeoBasicParser::CompositeLiteralContext *ctx) = 0;
  virtual void exitCompositeLiteral(NeoBasicParser::CompositeLiteralContext *ctx) = 0;

  virtual void enterOptionLiteral(NeoBasicParser::OptionLiteralContext *ctx) = 0;
  virtual void exitOptionLiteral(NeoBasicParser::OptionLiteralContext *ctx) = 0;

  virtual void enterResultLiteral(NeoBasicParser::ResultLiteralContext *ctx) = 0;
  virtual void exitResultLiteral(NeoBasicParser::ResultLiteralContext *ctx) = 0;

  virtual void enterMaybeLiteral(NeoBasicParser::MaybeLiteralContext *ctx) = 0;
  virtual void exitMaybeLiteral(NeoBasicParser::MaybeLiteralContext *ctx) = 0;

  virtual void enterEitherLiteral(NeoBasicParser::EitherLiteralContext *ctx) = 0;
  virtual void exitEitherLiteral(NeoBasicParser::EitherLiteralContext *ctx) = 0;

  virtual void enterStreamLiteral(NeoBasicParser::StreamLiteralContext *ctx) = 0;
  virtual void exitStreamLiteral(NeoBasicParser::StreamLiteralContext *ctx) = 0;


};

}  // namespace parser
