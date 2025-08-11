
// Generated from NeoBasicParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NeoBasicParserListener.h"


namespace parser {

/**
 * This class provides an empty implementation of NeoBasicParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NeoBasicParserBaseListener : public NeoBasicParserListener {
public:

  virtual void enterNeoProgram(NeoBasicParser::NeoProgramContext * /*ctx*/) override { }
  virtual void exitNeoProgram(NeoBasicParser::NeoProgramContext * /*ctx*/) override { }

  virtual void enterOneLinerProgram(NeoBasicParser::OneLinerProgramContext * /*ctx*/) override { }
  virtual void exitOneLinerProgram(NeoBasicParser::OneLinerProgramContext * /*ctx*/) override { }

  virtual void enterScriptFileProgram(NeoBasicParser::ScriptFileProgramContext * /*ctx*/) override { }
  virtual void exitScriptFileProgram(NeoBasicParser::ScriptFileProgramContext * /*ctx*/) override { }

  virtual void enterInstructionSentence(NeoBasicParser::InstructionSentenceContext * /*ctx*/) override { }
  virtual void exitInstructionSentence(NeoBasicParser::InstructionSentenceContext * /*ctx*/) override { }

  virtual void enterDirective(NeoBasicParser::DirectiveContext * /*ctx*/) override { }
  virtual void exitDirective(NeoBasicParser::DirectiveContext * /*ctx*/) override { }

  virtual void enterInterpreterDirective(NeoBasicParser::InterpreterDirectiveContext * /*ctx*/) override { }
  virtual void exitInterpreterDirective(NeoBasicParser::InterpreterDirectiveContext * /*ctx*/) override { }

  virtual void enterPragmaDirective(NeoBasicParser::PragmaDirectiveContext * /*ctx*/) override { }
  virtual void exitPragmaDirective(NeoBasicParser::PragmaDirectiveContext * /*ctx*/) override { }

  virtual void enterCanaryTestDirective(NeoBasicParser::CanaryTestDirectiveContext * /*ctx*/) override { }
  virtual void exitCanaryTestDirective(NeoBasicParser::CanaryTestDirectiveContext * /*ctx*/) override { }

  virtual void enterDeclaration(NeoBasicParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(NeoBasicParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(NeoBasicParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(NeoBasicParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterConstClause(NeoBasicParser::ConstClauseContext * /*ctx*/) override { }
  virtual void exitConstClause(NeoBasicParser::ConstClauseContext * /*ctx*/) override { }

  virtual void enterConstants(NeoBasicParser::ConstantsContext * /*ctx*/) override { }
  virtual void exitConstants(NeoBasicParser::ConstantsContext * /*ctx*/) override { }

  virtual void enterConstant(NeoBasicParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(NeoBasicParser::ConstantContext * /*ctx*/) override { }

  virtual void enterValDeclaration(NeoBasicParser::ValDeclarationContext * /*ctx*/) override { }
  virtual void exitValDeclaration(NeoBasicParser::ValDeclarationContext * /*ctx*/) override { }

  virtual void enterValClause(NeoBasicParser::ValClauseContext * /*ctx*/) override { }
  virtual void exitValClause(NeoBasicParser::ValClauseContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(NeoBasicParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(NeoBasicParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterVarClause(NeoBasicParser::VarClauseContext * /*ctx*/) override { }
  virtual void exitVarClause(NeoBasicParser::VarClauseContext * /*ctx*/) override { }

  virtual void enterVariables(NeoBasicParser::VariablesContext * /*ctx*/) override { }
  virtual void exitVariables(NeoBasicParser::VariablesContext * /*ctx*/) override { }

  virtual void enterVariable(NeoBasicParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(NeoBasicParser::VariableContext * /*ctx*/) override { }

  virtual void enterStatement(NeoBasicParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NeoBasicParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(NeoBasicParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(NeoBasicParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterDebugingStatement(NeoBasicParser::DebugingStatementContext * /*ctx*/) override { }
  virtual void exitDebugingStatement(NeoBasicParser::DebugingStatementContext * /*ctx*/) override { }

  virtual void enterLoggingStatement(NeoBasicParser::LoggingStatementContext * /*ctx*/) override { }
  virtual void exitLoggingStatement(NeoBasicParser::LoggingStatementContext * /*ctx*/) override { }

  virtual void enterSExpressionStatement(NeoBasicParser::SExpressionStatementContext * /*ctx*/) override { }
  virtual void exitSExpressionStatement(NeoBasicParser::SExpressionStatementContext * /*ctx*/) override { }

  virtual void enterSimpleStatement(NeoBasicParser::SimpleStatementContext * /*ctx*/) override { }
  virtual void exitSimpleStatement(NeoBasicParser::SimpleStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(NeoBasicParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(NeoBasicParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(NeoBasicParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NeoBasicParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(NeoBasicParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(NeoBasicParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(NeoBasicParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(NeoBasicParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterConditionalStatement(NeoBasicParser::ConditionalStatementContext * /*ctx*/) override { }
  virtual void exitConditionalStatement(NeoBasicParser::ConditionalStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(NeoBasicParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NeoBasicParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIfThenClause(NeoBasicParser::IfThenClauseContext * /*ctx*/) override { }
  virtual void exitIfThenClause(NeoBasicParser::IfThenClauseContext * /*ctx*/) override { }

  virtual void enterUnlessStatement(NeoBasicParser::UnlessStatementContext * /*ctx*/) override { }
  virtual void exitUnlessStatement(NeoBasicParser::UnlessStatementContext * /*ctx*/) override { }

  virtual void enterUnlessClause(NeoBasicParser::UnlessClauseContext * /*ctx*/) override { }
  virtual void exitUnlessClause(NeoBasicParser::UnlessClauseContext * /*ctx*/) override { }

  virtual void enterPrefixUnaryOperator(NeoBasicParser::PrefixUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPrefixUnaryOperator(NeoBasicParser::PrefixUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterPosfixUnaryOperator(NeoBasicParser::PosfixUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPosfixUnaryOperator(NeoBasicParser::PosfixUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryArithmeticOperator(NeoBasicParser::UnaryArithmeticOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryArithmeticOperator(NeoBasicParser::UnaryArithmeticOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryBitwiseOperator(NeoBasicParser::UnaryBitwiseOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryBitwiseOperator(NeoBasicParser::UnaryBitwiseOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryLogicalOperator(NeoBasicParser::UnaryLogicalOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryLogicalOperator(NeoBasicParser::UnaryLogicalOperatorContext * /*ctx*/) override { }

  virtual void enterUnarySpreadOperator(NeoBasicParser::UnarySpreadOperatorContext * /*ctx*/) override { }
  virtual void exitUnarySpreadOperator(NeoBasicParser::UnarySpreadOperatorContext * /*ctx*/) override { }

  virtual void enterUnarySortOperator(NeoBasicParser::UnarySortOperatorContext * /*ctx*/) override { }
  virtual void exitUnarySortOperator(NeoBasicParser::UnarySortOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryCloneOperator(NeoBasicParser::UnaryCloneOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryCloneOperator(NeoBasicParser::UnaryCloneOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryMetaOperator(NeoBasicParser::UnaryMetaOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryMetaOperator(NeoBasicParser::UnaryMetaOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryExponentialOperator(NeoBasicParser::BinaryExponentialOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryExponentialOperator(NeoBasicParser::BinaryExponentialOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryMultiplicativeOperator(NeoBasicParser::BinaryMultiplicativeOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryMultiplicativeOperator(NeoBasicParser::BinaryMultiplicativeOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryAdditiveOperator(NeoBasicParser::BinaryAdditiveOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryAdditiveOperator(NeoBasicParser::BinaryAdditiveOperatorContext * /*ctx*/) override { }

  virtual void enterBitShiftOperator(NeoBasicParser::BitShiftOperatorContext * /*ctx*/) override { }
  virtual void exitBitShiftOperator(NeoBasicParser::BitShiftOperatorContext * /*ctx*/) override { }

  virtual void enterBitConjunctionOperator(NeoBasicParser::BitConjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBitConjunctionOperator(NeoBasicParser::BitConjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBitExclusiveDisjunctionOperator(NeoBasicParser::BitExclusiveDisjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBitExclusiveDisjunctionOperator(NeoBasicParser::BitExclusiveDisjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBitDisjunctionOperator(NeoBasicParser::BitDisjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBitDisjunctionOperator(NeoBasicParser::BitDisjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryComparisonOperator(NeoBasicParser::BinaryComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryComparisonOperator(NeoBasicParser::BinaryComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryRelationalOperator(NeoBasicParser::BinaryRelationalOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryRelationalOperator(NeoBasicParser::BinaryRelationalOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryConditionalOperator(NeoBasicParser::BinaryConditionalOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryConditionalOperator(NeoBasicParser::BinaryConditionalOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryConjunctionOperator(NeoBasicParser::BinaryConjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryConjunctionOperator(NeoBasicParser::BinaryConjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryExclusiveDisjunctionOperator(NeoBasicParser::BinaryExclusiveDisjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryExclusiveDisjunctionOperator(NeoBasicParser::BinaryExclusiveDisjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryDisjunctionOperator(NeoBasicParser::BinaryDisjunctionOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryDisjunctionOperator(NeoBasicParser::BinaryDisjunctionOperatorContext * /*ctx*/) override { }

  virtual void enterBinaryCoalescingOperator(NeoBasicParser::BinaryCoalescingOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryCoalescingOperator(NeoBasicParser::BinaryCoalescingOperatorContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(NeoBasicParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(NeoBasicParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterSingleAssignmentOperator(NeoBasicParser::SingleAssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitSingleAssignmentOperator(NeoBasicParser::SingleAssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterCompoundAssignmentOperator(NeoBasicParser::CompoundAssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitCompoundAssignmentOperator(NeoBasicParser::CompoundAssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterSymbolIdentifier(NeoBasicParser::SymbolIdentifierContext * /*ctx*/) override { }
  virtual void exitSymbolIdentifier(NeoBasicParser::SymbolIdentifierContext * /*ctx*/) override { }

  virtual void enterQualifiedIdentifier(NeoBasicParser::QualifiedIdentifierContext * /*ctx*/) override { }
  virtual void exitQualifiedIdentifier(NeoBasicParser::QualifiedIdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifiers(NeoBasicParser::IdentifiersContext * /*ctx*/) override { }
  virtual void exitIdentifiers(NeoBasicParser::IdentifiersContext * /*ctx*/) override { }

  virtual void enterSymbolIdentifiers(NeoBasicParser::SymbolIdentifiersContext * /*ctx*/) override { }
  virtual void exitSymbolIdentifiers(NeoBasicParser::SymbolIdentifiersContext * /*ctx*/) override { }

  virtual void enterQualifiedIdentifiers(NeoBasicParser::QualifiedIdentifiersContext * /*ctx*/) override { }
  virtual void exitQualifiedIdentifiers(NeoBasicParser::QualifiedIdentifiersContext * /*ctx*/) override { }

  virtual void enterType(NeoBasicParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(NeoBasicParser::TypeContext * /*ctx*/) override { }

  virtual void enterNativeType(NeoBasicParser::NativeTypeContext * /*ctx*/) override { }
  virtual void exitNativeType(NeoBasicParser::NativeTypeContext * /*ctx*/) override { }

  virtual void enterPosfixTypeWrapper(NeoBasicParser::PosfixTypeWrapperContext * /*ctx*/) override { }
  virtual void exitPosfixTypeWrapper(NeoBasicParser::PosfixTypeWrapperContext * /*ctx*/) override { }

  virtual void enterEscalarType(NeoBasicParser::EscalarTypeContext * /*ctx*/) override { }
  virtual void exitEscalarType(NeoBasicParser::EscalarTypeContext * /*ctx*/) override { }

  virtual void enterBooleanType(NeoBasicParser::BooleanTypeContext * /*ctx*/) override { }
  virtual void exitBooleanType(NeoBasicParser::BooleanTypeContext * /*ctx*/) override { }

  virtual void enterNumericType(NeoBasicParser::NumericTypeContext * /*ctx*/) override { }
  virtual void exitNumericType(NeoBasicParser::NumericTypeContext * /*ctx*/) override { }

  virtual void enterNumericDigit(NeoBasicParser::NumericDigitContext * /*ctx*/) override { }
  virtual void exitNumericDigit(NeoBasicParser::NumericDigitContext * /*ctx*/) override { }

  virtual void enterNumericNatural(NeoBasicParser::NumericNaturalContext * /*ctx*/) override { }
  virtual void exitNumericNatural(NeoBasicParser::NumericNaturalContext * /*ctx*/) override { }

  virtual void enterNumericInteger(NeoBasicParser::NumericIntegerContext * /*ctx*/) override { }
  virtual void exitNumericInteger(NeoBasicParser::NumericIntegerContext * /*ctx*/) override { }

  virtual void enterNumericReal(NeoBasicParser::NumericRealContext * /*ctx*/) override { }
  virtual void exitNumericReal(NeoBasicParser::NumericRealContext * /*ctx*/) override { }

  virtual void enterNumericDecimal(NeoBasicParser::NumericDecimalContext * /*ctx*/) override { }
  virtual void exitNumericDecimal(NeoBasicParser::NumericDecimalContext * /*ctx*/) override { }

  virtual void enterNumericRatio(NeoBasicParser::NumericRatioContext * /*ctx*/) override { }
  virtual void exitNumericRatio(NeoBasicParser::NumericRatioContext * /*ctx*/) override { }

  virtual void enterNumericComplex(NeoBasicParser::NumericComplexContext * /*ctx*/) override { }
  virtual void exitNumericComplex(NeoBasicParser::NumericComplexContext * /*ctx*/) override { }

  virtual void enterNumericQuaternion(NeoBasicParser::NumericQuaternionContext * /*ctx*/) override { }
  virtual void exitNumericQuaternion(NeoBasicParser::NumericQuaternionContext * /*ctx*/) override { }

  virtual void enterTemporalType(NeoBasicParser::TemporalTypeContext * /*ctx*/) override { }
  virtual void exitTemporalType(NeoBasicParser::TemporalTypeContext * /*ctx*/) override { }

  virtual void enterCharacterType(NeoBasicParser::CharacterTypeContext * /*ctx*/) override { }
  virtual void exitCharacterType(NeoBasicParser::CharacterTypeContext * /*ctx*/) override { }

  virtual void enterSequenceType(NeoBasicParser::SequenceTypeContext * /*ctx*/) override { }
  virtual void exitSequenceType(NeoBasicParser::SequenceTypeContext * /*ctx*/) override { }

  virtual void enterCompositeType(NeoBasicParser::CompositeTypeContext * /*ctx*/) override { }
  virtual void exitCompositeType(NeoBasicParser::CompositeTypeContext * /*ctx*/) override { }

  virtual void enterMetaType(NeoBasicParser::MetaTypeContext * /*ctx*/) override { }
  virtual void exitMetaType(NeoBasicParser::MetaTypeContext * /*ctx*/) override { }

  virtual void enterExpressions(NeoBasicParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(NeoBasicParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterJuxtapositionExpression(NeoBasicParser::JuxtapositionExpressionContext * /*ctx*/) override { }
  virtual void exitJuxtapositionExpression(NeoBasicParser::JuxtapositionExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpressions(NeoBasicParser::PrimaryExpressionsContext * /*ctx*/) override { }
  virtual void exitPrimaryExpressions(NeoBasicParser::PrimaryExpressionsContext * /*ctx*/) override { }

  virtual void enterExpression(NeoBasicParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NeoBasicParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(NeoBasicParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(NeoBasicParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterOperand(NeoBasicParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(NeoBasicParser::OperandContext * /*ctx*/) override { }

  virtual void enterFactScope(NeoBasicParser::FactScopeContext * /*ctx*/) override { }
  virtual void exitFactScope(NeoBasicParser::FactScopeContext * /*ctx*/) override { }

  virtual void enterConverter(NeoBasicParser::ConverterContext * /*ctx*/) override { }
  virtual void exitConverter(NeoBasicParser::ConverterContext * /*ctx*/) override { }

  virtual void enterSelector(NeoBasicParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(NeoBasicParser::SelectorContext * /*ctx*/) override { }

  virtual void enterIndexing(NeoBasicParser::IndexingContext * /*ctx*/) override { }
  virtual void exitIndexing(NeoBasicParser::IndexingContext * /*ctx*/) override { }

  virtual void enterSlicing(NeoBasicParser::SlicingContext * /*ctx*/) override { }
  virtual void exitSlicing(NeoBasicParser::SlicingContext * /*ctx*/) override { }

  virtual void enterSlicingRange(NeoBasicParser::SlicingRangeContext * /*ctx*/) override { }
  virtual void exitSlicingRange(NeoBasicParser::SlicingRangeContext * /*ctx*/) override { }

  virtual void enterArguments(NeoBasicParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(NeoBasicParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(NeoBasicParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(NeoBasicParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterCondicionalExpression(NeoBasicParser::CondicionalExpressionContext * /*ctx*/) override { }
  virtual void exitCondicionalExpression(NeoBasicParser::CondicionalExpressionContext * /*ctx*/) override { }

  virtual void enterGuardsExpression(NeoBasicParser::GuardsExpressionContext * /*ctx*/) override { }
  virtual void exitGuardsExpression(NeoBasicParser::GuardsExpressionContext * /*ctx*/) override { }

  virtual void enterGuardClause(NeoBasicParser::GuardClauseContext * /*ctx*/) override { }
  virtual void exitGuardClause(NeoBasicParser::GuardClauseContext * /*ctx*/) override { }

  virtual void enterGuardDefault(NeoBasicParser::GuardDefaultContext * /*ctx*/) override { }
  virtual void exitGuardDefault(NeoBasicParser::GuardDefaultContext * /*ctx*/) override { }

  virtual void enterLiteral(NeoBasicParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(NeoBasicParser::LiteralContext * /*ctx*/) override { }

  virtual void enterPredeclaredValue(NeoBasicParser::PredeclaredValueContext * /*ctx*/) override { }
  virtual void exitPredeclaredValue(NeoBasicParser::PredeclaredValueContext * /*ctx*/) override { }

  virtual void enterValueConstruct(NeoBasicParser::ValueConstructContext * /*ctx*/) override { }
  virtual void exitValueConstruct(NeoBasicParser::ValueConstructContext * /*ctx*/) override { }

  virtual void enterEscalarLiteral(NeoBasicParser::EscalarLiteralContext * /*ctx*/) override { }
  virtual void exitEscalarLiteral(NeoBasicParser::EscalarLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(NeoBasicParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(NeoBasicParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(NeoBasicParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(NeoBasicParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterTemporalLiteral(NeoBasicParser::TemporalLiteralContext * /*ctx*/) override { }
  virtual void exitTemporalLiteral(NeoBasicParser::TemporalLiteralContext * /*ctx*/) override { }

  virtual void enterCharacterLiteral(NeoBasicParser::CharacterLiteralContext * /*ctx*/) override { }
  virtual void exitCharacterLiteral(NeoBasicParser::CharacterLiteralContext * /*ctx*/) override { }

  virtual void enterSequenceLiteral(NeoBasicParser::SequenceLiteralContext * /*ctx*/) override { }
  virtual void exitSequenceLiteral(NeoBasicParser::SequenceLiteralContext * /*ctx*/) override { }

  virtual void enterCompositeLiteral(NeoBasicParser::CompositeLiteralContext * /*ctx*/) override { }
  virtual void exitCompositeLiteral(NeoBasicParser::CompositeLiteralContext * /*ctx*/) override { }

  virtual void enterOptionLiteral(NeoBasicParser::OptionLiteralContext * /*ctx*/) override { }
  virtual void exitOptionLiteral(NeoBasicParser::OptionLiteralContext * /*ctx*/) override { }

  virtual void enterResultLiteral(NeoBasicParser::ResultLiteralContext * /*ctx*/) override { }
  virtual void exitResultLiteral(NeoBasicParser::ResultLiteralContext * /*ctx*/) override { }

  virtual void enterMaybeLiteral(NeoBasicParser::MaybeLiteralContext * /*ctx*/) override { }
  virtual void exitMaybeLiteral(NeoBasicParser::MaybeLiteralContext * /*ctx*/) override { }

  virtual void enterEitherLiteral(NeoBasicParser::EitherLiteralContext * /*ctx*/) override { }
  virtual void exitEitherLiteral(NeoBasicParser::EitherLiteralContext * /*ctx*/) override { }

  virtual void enterStreamLiteral(NeoBasicParser::StreamLiteralContext * /*ctx*/) override { }
  virtual void exitStreamLiteral(NeoBasicParser::StreamLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parser
