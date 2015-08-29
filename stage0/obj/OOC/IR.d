static void* _c0;
static void* _c1;
static void* _c2;
#include <OOC/IR.oh>
#include <Log.oh>
#include <Msg.oh>
#include <Strings.oh>
#include <ADT/ArrayList.oh>
#include <ADT/StringBuffer.oh>
#include <Config.oh>
#include <OOC/Scanner/Symbol.oh>
#include <OOC/Config/StdPragmas.oh>
#include <OOC/SymbolTable/TypeRules.oh>
#include <OOC/SymbolTable/Namespace.oh>
#include <OOC/SymbolTable/CreateNamespace.oh>
#define OOC_IR__undeclaredIdent 1
#define OOC_IR__expectedIdent 2
#define OOC_IR__numberOutOfRange 3
#define OOC_IR__characterOutOfRange 4
#define OOC_IR__invalidOpType 5
#define OOC_IR__exprNotConstant 9
#define OOC_IR__exprByRef 11
#define OOC_IR__incompatibleActualParam 12
#define OOC_IR__wrongNumberOfArguments 13
#define OOC_IR__invalidIntegerConst 14
#define OOC_IR__notArray 15
#define OOC_IR__notTypeExpression 16
#define OOC_IR__notExtensionOfLHS 17
#define OOC_IR__noMinMax 18
#define OOC_IR__notInteger 19
#define OOC_IR__notRecord 20
#define OOC_IR__notPointer 21
#define OOC_IR__notBoolean 22
#define OOC_IR__illegalFunctionOp 23
#define OOC_IR__incompatibleAssignment 24
#define OOC_IR__exitOutsideLoop 25
#define OOC_IR__invalidCaseSelector 26
#define OOC_IR__labelNotInSelect 27
#define OOC_IR__duplicateLabel 28
#define OOC_IR__notVariable 29
#define OOC_IR__invalidStepType 30
#define OOC_IR__stepIsZero 31
#define OOC_IR__returnWithResult 32
#define OOC_IR__returnWithoutResult 33
#define OOC_IR__importedReadOnly 34
#define OOC_IR__notProcedure 35
#define OOC_IR__isFunctionProcedure 36
#define OOC_IR__notFunctionProcedure 37
#define OOC_IR__tooFewArguments 38
#define OOC_IR__tooManyArguments 39
#define OOC_IR__notVarParCompatible 40
#define OOC_IR__redirectFailed 41
#define OOC_IR__readOnlyParameter 42
#define OOC_IR__noDynamicType 43
#define OOC_IR__notNumeric 44
#define OOC_IR__notCharacter 45
#define OOC_IR__notReal 46
#define OOC_IR__dynamicSize 47
#define OOC_IR__notCharacterArray 48
#define OOC_IR__notSet 49
#define OOC_IR__notPointerVar 50
#define OOC_IR__notAddressable 51
#define OOC_IR__objectSizeMismatch 52
#define OOC_IR__unusedDeclaration 53
#define OOC_IR__noLengthInfo 54
#define OOC_IR__noTypeTag 55
#define OOC_IR__cannotCreateInstance 56
#define OOC_IR__abstractWithBegin 57
#define OOC_IR__abstractSuperCall 58
#define OOC_IR__notDefinedInBaseType 59
#define OOC_IR__duplicateSuperCall 60
#define OOC_IR__redundantTypeTest 61
#define OOC_IR__notException 62
#define OOC_IR__unhandledException 63
#define OOC_IR__moduleUnhandledException 64
#define OOC_IR__unreachableGuard 65
#define OOC_IR__untriggeredCatch 66
#define OOC_IR__notTypeInstance 67
#define OOC_IR__notParametricType 69
#define OOC_IR__tooFewTypeArgs 70
#define OOC_IR__tooManyTypeArgs 71
#define OOC_IR__notExtensionOfBound 72
#define OOC_IR__notRecordPointerType 73
#define OOC_IR__initWithoutSuperCall 74
#define OOC_IR__forwardReferenceToInit 75
#define OOC_IR__notArrayIteratorRange 76
#define OOC_IR__notIteratorObject 77
#define OOC_IR__noNextMethod 78
#define OOC_IR__notSetType 79
static OOC_IR__ErrorContext OOC_IR__irContext;
static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item);
static void OOC_IR__LogTypeName(const OOC_CHAR8 message__ref[], OOC_LEN message_0d, OOC_SymbolTable__Type type);
static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Name name, OOC_SymbolTable__Type type);
static OOC_IR__GuardedVar OOC_IR__NewGuardedVar(OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Name name, OOC_SymbolTable__Type type);
static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos);
static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id);
static void OOC_IR__InitConst(OOC_IR__Const _const, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value);
static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value);
static void OOC_IR__InitAbs(OOC_IR__Abs abs, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression operand);
static void OOC_IR__InitAdr(OOC_IR__Adr adr, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design);
static void OOC_IR__InitAsh(OOC_IR__Ash ash, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp);
static void OOC_IR__InitBinaryArith(OOC_IR__BinaryArith op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type);
static void OOC_IR__InitBooleanOp(OOC_IR__BooleanOp op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type);
static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr);
static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element);
static void OOC_IR__InitCompare(OOC_IR__Compare op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right);
static void OOC_IR__InitConcat(OOC_IR__Concat op, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList strings);
static void OOC_IR__InitConstructor(OOC_IR__Constructor cons, OOC_Scanner_SymList__Symbol sym, OOC_IR__NewObject alloc, OOC_IR__Call init);
static void OOC_IR__InitCurrentException(OOC_IR__CurrentException ce, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type);
static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer);
static void OOC_IR__InitEntier(OOC_IR__Entier entier, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr);
static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex);
static void OOC_IR__InitLen(OOC_IR__Len len, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression array, OOC_IR__Expression arrayVariable, OOC_INT32 dim);
static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr);
static void OOC_IR__InitNewBlock(OOC_IR__NewBlock _new, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size);
static void OOC_IR__InitNewObject(OOC_IR__NewObject _new, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList length);
static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr);
static void OOC_IR__InitOdd(OOC_IR__Odd odd, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr);
static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_SymList__Symbol fieldSym);
static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Type recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_SymList__Symbol tbProcSym, OOC_CHAR8 isStaticCall);
static void OOC_IR__InitSetMember(OOC_IR__SetMember op, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set);
static void OOC_IR__InitSetOp(OOC_IR__SetOp op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type);
static void OOC_IR__InitSetRange(OOC_IR__SetRange range, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to);
static void OOC_IR__InitShift(OOC_IR__Shift shift, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate);
static void OOC_IR__InitTypeCast(OOC_IR__TypeCast cast, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr);
static void OOC_IR__InitTypeConv(OOC_IR__TypeConv conv, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr);
static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type);
static void OOC_IR__InitTypeTag(OOC_IR__TypeTag tag, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design);
static void OOC_IR__InitTypeTest(OOC_IR__TypeTest test, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr, OOC_SymbolTable__Type referenceType, OOC_CHAR8 checkPointer, OOC_IR__Expression origExpr, OOC_IR__TypeRef origType);
static void OOC_IR__InitTypeGuard(OOC_IR__TypeGuard guard, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__TypeTest test, OOC_CHAR8 checkPointer, OOC_CHAR8 checkType);
static void OOC_IR__InitReference(OOC_IR__Reference ref, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Declaration decl);
static void OOC_IR__InitModuleRef(OOC_IR__ModuleRef modRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Module decl);
static void OOC_IR__InitPredefProc(OOC_IR__PredefProc pproc, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__PredefProc decl);
static OOC_IR__PredefProc OOC_IR__NewPredefProc(OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__PredefProc decl);
static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__ProcDecl decl);
static OOC_IR__ProcedureRef OOC_IR__NewProcedureRef(OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__ProcDecl decl);
static void OOC_IR__InitTypeRef(OOC_IR__TypeRef typeRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl decl, OOC_SymbolTable__Type qualType);
static void OOC_IR__InitVar(OOC_IR__Var var, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__VarDecl decl);
static void OOC_IR__InitAssert(OOC_IR__Assert assert, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression predicate, OOC_INT32 code, OOC_CHAR8 disabled);
static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression op);
static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars);
static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType);
static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Var param);
static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength);
static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body);
static void OOC_IR__InitIterateArrayStatm(OOC_IR__IterateArrayStatm iterStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression range, OOC_IR__StatementSeq body);
static void OOC_IR__InitIterateObjectStatm(OOC_IR__IterateObjectStatm iterStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression iteratorFactory, OOC_IR__Call stepperCall, OOC_IR__StatementSeq body);
static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse);
static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_SymList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq);
static void OOC_IR__InitCaseStatm(OOC_IR__CaseStatm caseStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default, OOC_CHAR8 checkMatch);
static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body);
static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size);
static void OOC_IR__InitRaise(OOC_IR__Raise raise, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression exception);
static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition);
static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression result);
static void OOC_IR__InitCatchClause(OOC_IR__CatchClause _catch, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type exceptionType, OOC_IR__StatementSeq statmSeq);
static void OOC_IR__InitTryStatm(OOC_IR__TryStatm tryStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList);
static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body);
static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_IR__Node = { (RT0__Struct[]){&_td_OOC_IR__NodeDesc}, NULL, NULL, &_mid, "Node", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__NodeDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NodeDesc_Accept}, NULL, &_mid, "NodeDesc", 4, 2, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__GuardedVar = { (RT0__Struct[]){&_td_OOC_IR__GuardedVarDesc}, NULL, NULL, &_mid, "GuardedVar", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__GuardedVarDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_SymbolTable__ItemDesc,&_td_OOC_SymbolTable__DeclarationDesc,&_td_OOC_IR__GuardedVarDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SymbolTable__DeclarationDesc_Store,(void*)OOC_SymbolTable__DeclarationDesc_Load,(void*)OOC_IR__GuardedVarDesc_Module,(void*)OOC_SymbolTable__ItemDesc_InStandardModule,(void*)OOC_SymbolTable__ItemDesc_Procedure,(void*)OOC_SymbolTable__ItemDesc_AddFlag,(void*)OOC_SymbolTable__ItemDesc_Namespace,(void*)OOC_SymbolTable__DeclarationDesc_Name,(void*)OOC_SymbolTable__DeclarationDesc_IncrUsageCounter,(void*)OOC_SymbolTable__DeclarationDesc_GetId,(void*)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace}, NULL, &_mid, "GuardedVarDesc", 56, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Expression = { (RT0__Struct[]){&_td_OOC_IR__ExpressionDesc}, NULL, NULL, &_mid, "Expression", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__9073 = { (RT0__Struct[]){&_td_OOC_IR__Expression}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__ExpressionList = { (RT0__Struct[]){&_td_OOC_IR__9073}, NULL, NULL, &_mid, "ExpressionList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ExpressionDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NodeDesc_Accept}, NULL, &_mid, "ExpressionDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Const = { (RT0__Struct[]){&_td_OOC_IR__ConstDesc}, NULL, NULL, &_mid, "Const", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ConstDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ConstDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)OOC_IR__ConstDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ConstDesc_Accept}, NULL, &_mid, "ConstDesc", 12, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Operator = { (RT0__Struct[]){&_td_OOC_IR__OperatorDesc}, NULL, NULL, &_mid, "Operator", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__OperatorDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NodeDesc_Accept}, NULL, &_mid, "OperatorDesc", 8, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Abs = { (RT0__Struct[]){&_td_OOC_IR__AbsDesc}, NULL, NULL, &_mid, "Abs", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AbsDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__AbsDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AbsDesc_Accept}, NULL, &_mid, "AbsDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Adr = { (RT0__Struct[]){&_td_OOC_IR__AdrDesc}, NULL, NULL, &_mid, "Adr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AdrDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__AdrDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AdrDesc_Accept}, NULL, &_mid, "AdrDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Ash = { (RT0__Struct[]){&_td_OOC_IR__AshDesc}, NULL, NULL, &_mid, "Ash", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AshDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__AshDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AshDesc_Accept}, NULL, &_mid, "AshDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__BinaryArith = { (RT0__Struct[]){&_td_OOC_IR__BinaryArithDesc}, NULL, NULL, &_mid, "BinaryArith", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__BinaryArithDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__BinaryArithDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__BinaryArithDesc_Accept}, NULL, &_mid, "BinaryArithDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__BooleanOp = { (RT0__Struct[]){&_td_OOC_IR__BooleanOpDesc}, NULL, NULL, &_mid, "BooleanOp", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__BooleanOpDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__BooleanOpDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__BooleanOpDesc_Accept}, NULL, &_mid, "BooleanOpDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Cap = { (RT0__Struct[]){&_td_OOC_IR__CapDesc}, NULL, NULL, &_mid, "Cap", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CapDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__CapDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CapDesc_Accept}, NULL, &_mid, "CapDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Compare = { (RT0__Struct[]){&_td_OOC_IR__CompareDesc}, NULL, NULL, &_mid, "Compare", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CompareDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__CompareDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CompareDesc_Accept}, NULL, &_mid, "CompareDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Concat = { (RT0__Struct[]){&_td_OOC_IR__ConcatDesc}, NULL, NULL, &_mid, "Concat", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ConcatDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__ConcatDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ConcatDesc_Accept}, NULL, &_mid, "ConcatDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ChangeElement = { (RT0__Struct[]){&_td_OOC_IR__ChangeElementDesc}, NULL, NULL, &_mid, "ChangeElement", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ChangeElementDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__ChangeElementDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ChangeElementDesc_Accept}, NULL, &_mid, "ChangeElementDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Constructor = { (RT0__Struct[]){&_td_OOC_IR__ConstructorDesc}, NULL, NULL, &_mid, "Constructor", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__NewObject = { (RT0__Struct[]){&_td_OOC_IR__NewObjectDesc}, NULL, NULL, &_mid, "NewObject", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__Call = { (RT0__Struct[]){&_td_OOC_IR__CallDesc}, NULL, NULL, &_mid, "Call", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ConstructorDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__ConstructorDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ConstructorDesc_Accept}, NULL, &_mid, "ConstructorDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CurrentException = { (RT0__Struct[]){&_td_OOC_IR__CurrentExceptionDesc}, NULL, NULL, &_mid, "CurrentException", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TryStatm = { (RT0__Struct[]){&_td_OOC_IR__TryStatmDesc}, NULL, NULL, &_mid, "TryStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CurrentExceptionDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__CurrentExceptionDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CurrentExceptionDesc_Accept}, NULL, &_mid, "CurrentExceptionDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Deref = { (RT0__Struct[]){&_td_OOC_IR__DerefDesc}, NULL, NULL, &_mid, "Deref", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__DerefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__DerefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__DerefDesc_Accept}, NULL, &_mid, "DerefDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Entier = { (RT0__Struct[]){&_td_OOC_IR__EntierDesc}, NULL, NULL, &_mid, "Entier", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__EntierDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__EntierDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__EntierDesc_Accept}, NULL, &_mid, "EntierDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Index = { (RT0__Struct[]){&_td_OOC_IR__IndexDesc}, NULL, NULL, &_mid, "Index", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__IndexDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__IndexDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__IndexDesc_Accept}, NULL, &_mid, "IndexDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Len = { (RT0__Struct[]){&_td_OOC_IR__LenDesc}, NULL, NULL, &_mid, "Len", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__LenDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__LenDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__LenDesc_Accept}, NULL, &_mid, "LenDesc", 24, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Negate = { (RT0__Struct[]){&_td_OOC_IR__NegateDesc}, NULL, NULL, &_mid, "Negate", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__NegateDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__NegateDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NegateDesc_Accept}, NULL, &_mid, "NegateDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__NewBlock = { (RT0__Struct[]){&_td_OOC_IR__NewBlockDesc}, NULL, NULL, &_mid, "NewBlock", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__NewBlockDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__NewBlockDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NewBlockDesc_Accept}, NULL, &_mid, "NewBlockDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__NewObjectDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__NewObjectDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NewObjectDesc_Accept}, NULL, &_mid, "NewObjectDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Not = { (RT0__Struct[]){&_td_OOC_IR__NotDesc}, NULL, NULL, &_mid, "Not", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__NotDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__NotDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NotDesc_Accept}, NULL, &_mid, "NotDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Odd = { (RT0__Struct[]){&_td_OOC_IR__OddDesc}, NULL, NULL, &_mid, "Odd", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__OddDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__OddDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__OddDesc_Accept}, NULL, &_mid, "OddDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__SelectField = { (RT0__Struct[]){&_td_OOC_IR__SelectFieldDesc}, NULL, NULL, &_mid, "SelectField", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__SelectFieldDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__SelectFieldDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__SelectFieldDesc_Accept}, NULL, &_mid, "SelectFieldDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__SelectProc = { (RT0__Struct[]){&_td_OOC_IR__SelectProcDesc}, NULL, NULL, &_mid, "SelectProc", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__SelectProcDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__SelectProcDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__SelectProcDesc_Accept}, NULL, &_mid, "SelectProcDesc", 32, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__SetMember = { (RT0__Struct[]){&_td_OOC_IR__SetMemberDesc}, NULL, NULL, &_mid, "SetMember", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__SetMemberDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__SetMemberDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__SetMemberDesc_Accept}, NULL, &_mid, "SetMemberDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__SetOp = { (RT0__Struct[]){&_td_OOC_IR__SetOpDesc}, NULL, NULL, &_mid, "SetOp", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__SetOpDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__SetOpDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__SetOpDesc_Accept}, NULL, &_mid, "SetOpDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__SetRange = { (RT0__Struct[]){&_td_OOC_IR__SetRangeDesc}, NULL, NULL, &_mid, "SetRange", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__SetRangeDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__SetRangeDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__SetRangeDesc_Accept,(void*)OOC_IR__SetRangeDesc_IsEmpty,(void*)OOC_IR__SetRangeDesc_IntersectsWith}, NULL, &_mid, "SetRangeDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Shift = { (RT0__Struct[]){&_td_OOC_IR__ShiftDesc}, NULL, NULL, &_mid, "Shift", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ShiftDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__ShiftDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ShiftDesc_Accept}, NULL, &_mid, "ShiftDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeCast = { (RT0__Struct[]){&_td_OOC_IR__TypeCastDesc}, NULL, NULL, &_mid, "TypeCast", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeCastDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__TypeCastDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeCastDesc_Accept}, NULL, &_mid, "TypeCastDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeConv = { (RT0__Struct[]){&_td_OOC_IR__TypeConvDesc}, NULL, NULL, &_mid, "TypeConv", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeConvDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__TypeConvDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeConvDesc_Accept}, NULL, &_mid, "TypeConvDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeTag = { (RT0__Struct[]){&_td_OOC_IR__TypeTagDesc}, NULL, NULL, &_mid, "TypeTag", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeRef = { (RT0__Struct[]){&_td_OOC_IR__TypeRefDesc}, NULL, NULL, &_mid, "TypeRef", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeTagDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__TypeTagDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeTagDesc_Accept}, NULL, &_mid, "TypeTagDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeTest = { (RT0__Struct[]){&_td_OOC_IR__TypeTestDesc}, NULL, NULL, &_mid, "TypeTest", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeTestDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__TypeTestDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeTestDesc_Accept}, NULL, &_mid, "TypeTestDesc", 28, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeGuard = { (RT0__Struct[]){&_td_OOC_IR__TypeGuardDesc}, NULL, NULL, &_mid, "TypeGuard", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeGuardDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__OperatorDesc,&_td_OOC_IR__TypeGuardDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeGuardDesc_Accept}, NULL, &_mid, "TypeGuardDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Reference = { (RT0__Struct[]){&_td_OOC_IR__ReferenceDesc}, NULL, NULL, &_mid, "Reference", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ReferenceDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NodeDesc_Accept}, NULL, &_mid, "ReferenceDesc", 12, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ModuleRef = { (RT0__Struct[]){&_td_OOC_IR__ModuleRefDesc}, NULL, NULL, &_mid, "ModuleRef", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ModuleRefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc,&_td_OOC_IR__ModuleRefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ModuleRefDesc_Accept}, NULL, &_mid, "ModuleRefDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__PredefProc = { (RT0__Struct[]){&_td_OOC_IR__PredefProcDesc}, NULL, NULL, &_mid, "PredefProc", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__PredefProcDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc,&_td_OOC_IR__PredefProcDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__PredefProcDesc_Accept}, NULL, &_mid, "PredefProcDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ProcedureRef = { (RT0__Struct[]){&_td_OOC_IR__ProcedureRefDesc}, NULL, NULL, &_mid, "ProcedureRef", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ProcedureRefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc,&_td_OOC_IR__ProcedureRefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ProcedureRefDesc_Accept}, NULL, &_mid, "ProcedureRefDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeRefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc,&_td_OOC_IR__TypeRefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TypeRefDesc_Accept}, NULL, &_mid, "TypeRefDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Var = { (RT0__Struct[]){&_td_OOC_IR__VarDesc}, NULL, NULL, &_mid, "Var", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__VarDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__ReferenceDesc,&_td_OOC_IR__VarDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__VarDesc_Accept}, NULL, &_mid, "VarDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Statement = { (RT0__Struct[]){&_td_OOC_IR__StatementDesc}, NULL, NULL, &_mid, "Statement", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__LoopStatm = { (RT0__Struct[]){&_td_OOC_IR__LoopStatmDesc}, NULL, NULL, &_mid, "LoopStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__25860 = { (RT0__Struct[]){&_td_OOC_IR__Statement}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__StatementSeq = { (RT0__Struct[]){&_td_OOC_IR__25860}, NULL, NULL, &_mid, "StatementSeq", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__StatementDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__NodeDesc_Accept}, NULL, &_mid, "StatementDesc", 8, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Assert = { (RT0__Struct[]){&_td_OOC_IR__AssertDesc}, NULL, NULL, &_mid, "Assert", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AssertDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__AssertDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AssertDesc_Accept}, NULL, &_mid, "AssertDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Assignment = { (RT0__Struct[]){&_td_OOC_IR__AssignmentDesc}, NULL, NULL, &_mid, "Assignment", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AssignmentDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__AssignmentDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AssignmentDesc_Accept}, NULL, &_mid, "AssignmentDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__AssignOp = { (RT0__Struct[]){&_td_OOC_IR__AssignOpDesc}, NULL, NULL, &_mid, "AssignOp", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__AssignOpDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__AssignmentDesc,&_td_OOC_IR__AssignOpDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__AssignOpDesc_Accept}, NULL, &_mid, "AssignOpDesc", 16, 6, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CallDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CallDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CallDesc_Accept}, NULL, &_mid, "CallDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Copy = { (RT0__Struct[]){&_td_OOC_IR__CopyDesc}, NULL, NULL, &_mid, "Copy", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CopyDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CopyDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CopyDesc_Accept}, NULL, &_mid, "CopyDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CopyParameter = { (RT0__Struct[]){&_td_OOC_IR__CopyParameterDesc}, NULL, NULL, &_mid, "CopyParameter", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CopyParameterDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CopyParameterDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CopyParameterDesc_Accept}, NULL, &_mid, "CopyParameterDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CopyString = { (RT0__Struct[]){&_td_OOC_IR__CopyStringDesc}, NULL, NULL, &_mid, "CopyString", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CopyStringDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CopyStringDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CopyStringDesc_Accept}, NULL, &_mid, "CopyStringDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Exit = { (RT0__Struct[]){&_td_OOC_IR__ExitDesc}, NULL, NULL, &_mid, "Exit", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ExitDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__ExitDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ExitDesc_Accept}, NULL, &_mid, "ExitDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ForStatm = { (RT0__Struct[]){&_td_OOC_IR__ForStatmDesc}, NULL, NULL, &_mid, "ForStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ForStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__ForStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ForStatmDesc_Accept,(void*)OOC_IR__ForStatmDesc_PositiveStep}, NULL, &_mid, "ForStatmDesc", 28, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__IterateArrayStatm = { (RT0__Struct[]){&_td_OOC_IR__IterateArrayStatmDesc}, NULL, NULL, &_mid, "IterateArrayStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__IterateArrayStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__IterateArrayStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__IterateArrayStatmDesc_Accept}, NULL, &_mid, "IterateArrayStatmDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__IterateObjectStatm = { (RT0__Struct[]){&_td_OOC_IR__IterateObjectStatmDesc}, NULL, NULL, &_mid, "IterateObjectStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__IterateObjectStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__IterateObjectStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__IterateObjectStatmDesc_Accept}, NULL, &_mid, "IterateObjectStatmDesc", 24, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__IfStatm = { (RT0__Struct[]){&_td_OOC_IR__IfStatmDesc}, NULL, NULL, &_mid, "IfStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__IfStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__IfStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__IfStatmDesc_Accept}, NULL, &_mid, "IfStatmDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Case = { (RT0__Struct[]){&_td_OOC_IR__CaseDesc}, NULL, NULL, &_mid, "Case", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__31080 = { (RT0__Struct[]){&_td_OOC_IR__Expression}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__CaseLabels = { (RT0__Struct[]){&_td_OOC_IR__31080}, NULL, NULL, &_mid, "CaseLabels", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CaseDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CaseDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CaseDesc_Accept,(void*)OOC_IR__CaseDesc_CheckLabels}, NULL, &_mid, "CaseDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CaseStatm = { (RT0__Struct[]){&_td_OOC_IR__CaseStatmDesc}, NULL, NULL, &_mid, "CaseStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__31406 = { (RT0__Struct[]){&_td_OOC_IR__Case}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__CaseList = { (RT0__Struct[]){&_td_OOC_IR__31406}, NULL, NULL, &_mid, "CaseList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CaseStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CaseStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CaseStatmDesc_Accept}, NULL, &_mid, "CaseStatmDesc", 24, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__LoopStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__LoopStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__LoopStatmDesc_Accept}, NULL, &_mid, "LoopStatmDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__MoveBlock = { (RT0__Struct[]){&_td_OOC_IR__MoveBlockDesc}, NULL, NULL, &_mid, "MoveBlock", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__MoveBlockDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__MoveBlockDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__MoveBlockDesc_Accept}, NULL, &_mid, "MoveBlockDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Raise = { (RT0__Struct[]){&_td_OOC_IR__RaiseDesc}, NULL, NULL, &_mid, "Raise", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__RaiseDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__RaiseDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__RaiseDesc_Accept}, NULL, &_mid, "RaiseDesc", 12, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__RepeatStatm = { (RT0__Struct[]){&_td_OOC_IR__RepeatStatmDesc}, NULL, NULL, &_mid, "RepeatStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__RepeatStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__RepeatStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__RepeatStatmDesc_Accept}, NULL, &_mid, "RepeatStatmDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Return = { (RT0__Struct[]){&_td_OOC_IR__ReturnDesc}, NULL, NULL, &_mid, "Return", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ReturnDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__ReturnDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ReturnDesc_Accept}, NULL, &_mid, "ReturnDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__CatchClause = { (RT0__Struct[]){&_td_OOC_IR__CatchClauseDesc}, NULL, NULL, &_mid, "CatchClause", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__32875 = { (RT0__Struct[]){&_td_OOC_IR__CatchClause}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__CatchList = { (RT0__Struct[]){&_td_OOC_IR__32875}, NULL, NULL, &_mid, "CatchList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__CatchClauseDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__CatchClauseDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__CatchClauseDesc_Accept}, NULL, &_mid, "CatchClauseDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TryStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__TryStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__TryStatmDesc_Accept}, NULL, &_mid, "TryStatmDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__WhileStatm = { (RT0__Struct[]){&_td_OOC_IR__WhileStatmDesc}, NULL, NULL, &_mid, "WhileStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__WhileStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__WhileStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__WhileStatmDesc_Accept}, NULL, &_mid, "WhileStatmDesc", 16, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__WithStatm = { (RT0__Struct[]){&_td_OOC_IR__WithStatmDesc}, NULL, NULL, &_mid, "WithStatm", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__WithStatmDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ExpressionDesc,&_td_OOC_IR__StatementDesc,&_td_OOC_IR__WithStatmDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__WithStatmDesc_Accept}, NULL, &_mid, "WithStatmDesc", 24, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Procedure = { (RT0__Struct[]){&_td_OOC_IR__ProcedureDesc}, NULL, NULL, &_mid, "Procedure", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__34376 = { (RT0__Struct[]){&_td_OOC_IR__Procedure}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__ProcedureList = { (RT0__Struct[]){&_td_OOC_IR__34376}, NULL, NULL, &_mid, "ProcedureList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ProcedureDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ProcedureDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ProcedureDesc_Accept}, NULL, &_mid, "ProcedureDesc", 20, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Module = { (RT0__Struct[]){&_td_OOC_IR__ModuleDesc}, NULL, NULL, &_mid, "Module", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ModuleDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_IR__NodeDesc,&_td_OOC_IR__ModuleDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_IR__ModuleDesc_Accept,(void*)OOC_IR__ModuleDesc_Destroy}, NULL, &_mid, "ModuleDesc", 16, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__TypeType = { (RT0__Struct[]){&_td_OOC_IR__TypeTypeDesc}, NULL, NULL, &_mid, "TypeType", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__TypeTypeDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_SymbolTable__ItemDesc,&_td_OOC_SymbolTable__TypeDesc,&_td_OOC_IR__TypeTypeDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SymbolTable__TypeDesc_Store,(void*)OOC_SymbolTable__TypeDesc_Load,(void*)OOC_SymbolTable__ItemDesc_Module,(void*)OOC_SymbolTable__ItemDesc_InStandardModule,(void*)OOC_SymbolTable__ItemDesc_Procedure,(void*)OOC_SymbolTable__ItemDesc_AddFlag,(void*)OOC_SymbolTable__ItemDesc_Namespace,(void*)OOC_SymbolTable__TypeDesc_PreciousTypePars,(void*)OOC_SymbolTable__TypeDesc_IsCheckedException,(void*)OOC_SymbolTable__TypeDesc_SetNamingDecl,(void*)OOC_SymbolTable__TypeDesc_SetTypePars,(void*)OOC_SymbolTable__TypeDesc_SetSize,(void*)OOC_SymbolTable__TypeDesc_ArrayDimensions,(void*)OOC_SymbolTable__TypeDesc_Deparam,(void*)OOC_SymbolTable__TypeDesc_Bound,(void*)OOC_SymbolTable__TypeDesc_Closure}, NULL, &_mid, "TypeTypeDesc", 40, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ModuleType = { (RT0__Struct[]){&_td_OOC_IR__ModuleTypeDesc}, NULL, NULL, &_mid, "ModuleType", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ModuleTypeDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_SymbolTable__ItemDesc,&_td_OOC_SymbolTable__TypeDesc,&_td_OOC_IR__ModuleTypeDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SymbolTable__TypeDesc_Store,(void*)OOC_SymbolTable__TypeDesc_Load,(void*)OOC_SymbolTable__ItemDesc_Module,(void*)OOC_SymbolTable__ItemDesc_InStandardModule,(void*)OOC_SymbolTable__ItemDesc_Procedure,(void*)OOC_SymbolTable__ItemDesc_AddFlag,(void*)OOC_SymbolTable__ItemDesc_Namespace,(void*)OOC_SymbolTable__TypeDesc_PreciousTypePars,(void*)OOC_SymbolTable__TypeDesc_IsCheckedException,(void*)OOC_SymbolTable__TypeDesc_SetNamingDecl,(void*)OOC_SymbolTable__TypeDesc_SetTypePars,(void*)OOC_SymbolTable__TypeDesc_SetSize,(void*)OOC_SymbolTable__TypeDesc_ArrayDimensions,(void*)OOC_SymbolTable__TypeDesc_Deparam,(void*)OOC_SymbolTable__TypeDesc_Bound,(void*)OOC_SymbolTable__TypeDesc_Closure}, NULL, &_mid, "ModuleTypeDesc", 40, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Builder = { (RT0__Struct[]){&_td_OOC_IR__BuilderDesc}, NULL, NULL, &_mid, "Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ConstFold = { (RT0__Struct[]){&_td_OOC_IR__ConstFoldDesc}, NULL, NULL, &_mid, "ConstFold", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__BuilderDesc = { (RT0__Struct[]){&_td_OOC_IR__BuilderDesc}, (void*[]){(void*)OOC_IR__BuilderDesc_ErrSym,(void*)OOC_IR__BuilderDesc_SetNameToType,(void*)OOC_IR__BuilderDesc_WarnSym,(void*)OOC_IR__BuilderDesc_WarnName,(void*)OOC_IR__BuilderDesc_ErrExpr,(void*)OOC_IR__BuilderDesc_GetName,(void*)OOC_IR__BuilderDesc_GetName2,(void*)OOC_IR__BuilderDesc_AssertType,(void*)OOC_IR__BuilderDesc_AssertBoolean,(void*)OOC_IR__BuilderDesc_Fold,(void*)OOC_IR__BuilderDesc_CheckFunctionOp,(void*)OOC_IR__BuilderDesc_NewConst,(void*)OOC_IR__BuilderDesc_NewStringConst,(void*)OOC_IR__BuilderDesc_NewIntConst10,(void*)OOC_IR__BuilderDesc_NewIntConst16,(void*)OOC_IR__BuilderDesc_AssertConst,(void*)OOC_IR__BuilderDesc_AssertIntConst,(void*)OOC_IR__BuilderDesc_AssertInteger,(void*)OOC_IR__BuilderDesc_AssertReal,(void*)OOC_IR__BuilderDesc_AssertNumeric,(void*)OOC_IR__BuilderDesc_AssertChar,(void*)OOC_IR__BuilderDesc_AssertSet,(void*)OOC_IR__BuilderDesc_NewRealConst,(void*)OOC_IR__BuilderDesc_NewCharConst16,(void*)OOC_IR__BuilderDesc_NewNil,(void*)OOC_IR__BuilderDesc_NewSize,(void*)OOC_IR__BuilderDesc_GetOne,(void*)OOC_IR__BuilderDesc_ValidSetElement,(void*)OOC_IR__BuilderDesc_NewAbs,(void*)OOC_IR__BuilderDesc_NewAdr,(void*)OOC_IR__BuilderDesc_NewAsh,(void*)OOC_IR__BuilderDesc_NewBinaryArith,(void*)OOC_IR__BuilderDesc_NewBooleanOp,(void*)OOC_IR__BuilderDesc_NewCap,(void*)OOC_IR__BuilderDesc_NewChangeElement,(void*)OOC_IR__BuilderDesc_NewCompare,(void*)OOC_IR__BuilderDesc_NewConcat,(void*)OOC_IR__BuilderDesc_NewConstructor,(void*)OOC_IR__BuilderDesc_NewCurrentException,(void*)OOC_IR__BuilderDesc_NewDeref,(void*)OOC_IR__BuilderDesc_NewEntier,(void*)OOC_IR__BuilderDesc_NewIndex,(void*)OOC_IR__BuilderDesc_NewLen,(void*)OOC_IR__BuilderDesc_NewNegate,(void*)OOC_IR__BuilderDesc_NewNewBlock,(void*)OOC_IR__BuilderDesc_NewNewObject,(void*)OOC_IR__BuilderDesc_NewNot,(void*)OOC_IR__BuilderDesc_NewOdd,(void*)OOC_IR__BuilderDesc_NewSelectField,(void*)OOC_IR__BuilderDesc_NewSelectProc,(void*)OOC_IR__BuilderDesc_NewSetMember,(void*)OOC_IR__BuilderDesc_NewSetOp,(void*)OOC_IR__BuilderDesc_NewSetRange,(void*)OOC_IR__BuilderDesc_NewShift,(void*)OOC_IR__BuilderDesc_NewTypeCast,(void*)OOC_IR__BuilderDesc_NewTypeConv,(void*)OOC_IR__BuilderDesc_Widen,(void*)OOC_IR__BuilderDesc_WidenForAssign,(void*)OOC_IR__BuilderDesc_WidenToCommon,(void*)OOC_IR__BuilderDesc_NewTypeTag,(void*)OOC_IR__BuilderDesc_NewTypeTest,(void*)OOC_IR__BuilderDesc_NewTypeGuard,(void*)OOC_IR__BuilderDesc_NewModuleRef,(void*)OOC_IR__BuilderDesc_NewTypeRef,(void*)OOC_IR__BuilderDesc_NewVar,(void*)OOC_IR__BuilderDesc_NewAssert,(void*)OOC_IR__BuilderDesc_AssertVar,(void*)OOC_IR__BuilderDesc_NewAssignment,(void*)OOC_IR__BuilderDesc_NewAssignOp,(void*)OOC_IR__BuilderDesc_NewCopy,(void*)OOC_IR__BuilderDesc_NewCopyParameter,(void*)OOC_IR__BuilderDesc_NewCopyString,(void*)OOC_IR__BuilderDesc_NewExit,(void*)OOC_IR__BuilderDesc_NewForStatm,(void*)OOC_IR__BuilderDesc_NewIterateStatm,(void*)OOC_IR__BuilderDesc_NewIfStatm,(void*)OOC_IR__BuilderDesc_NewCase,(void*)OOC_IR__BuilderDesc_NewCaseStatm,(void*)OOC_IR__BuilderDesc_NewLoopStatm,(void*)OOC_IR__BuilderDesc_NewMoveBlock,(void*)OOC_IR__BuilderDesc_NewRaise,(void*)OOC_IR__BuilderDesc_NewRepeatStatm,(void*)OOC_IR__BuilderDesc_NewReturn,(void*)OOC_IR__BuilderDesc_NewCatchClause,(void*)OOC_IR__BuilderDesc_NewTryStatm,(void*)OOC_IR__BuilderDesc_NewWhileStatm,(void*)OOC_IR__BuilderDesc_NewWithStatm,(void*)OOC_IR__BuilderDesc_CheckExit,(void*)OOC_IR__BuilderDesc_NewProcedure,(void*)OOC_IR__BuilderDesc_NewModule,(void*)OOC_IR__BuilderDesc_StartTypeGuard,(void*)OOC_IR__BuilderDesc_EndTypeGuard,(void*)OOC_IR__BuilderDesc_StartExceptionScope,(void*)OOC_IR__BuilderDesc_EndExceptionScope,(void*)OOC_IR__BuilderDesc_NewIdentRef,(void*)OOC_IR__BuilderDesc_NewQualident,(void*)OOC_IR__BuilderDesc_NewTypeVar,(void*)OOC_IR__BuilderDesc_NewQualType,(void*)OOC_IR__BuilderDesc_NewSelect,(void*)OOC_IR__BuilderDesc_NewOperator,(void*)OOC_IR__BuilderDesc_NewCall}, NULL, &_mid, "BuilderDesc", 40, 0, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__Visitor = { (RT0__Struct[]){&_td_OOC_IR__VisitorDesc}, NULL, NULL, &_mid, "Visitor", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__VisitorDesc = { (RT0__Struct[]){&_td_OOC_IR__VisitorDesc}, (void*[]){(void*)OOC_IR__VisitorDesc_VisitConst,(void*)OOC_IR__VisitorDesc_VisitAbs,(void*)OOC_IR__VisitorDesc_VisitAdr,(void*)OOC_IR__VisitorDesc_VisitAsh,(void*)OOC_IR__VisitorDesc_VisitBinaryArith,(void*)OOC_IR__VisitorDesc_VisitBooleanOp,(void*)OOC_IR__VisitorDesc_VisitCap,(void*)OOC_IR__VisitorDesc_VisitChangeElement,(void*)OOC_IR__VisitorDesc_VisitCompare,(void*)OOC_IR__VisitorDesc_VisitConcat,(void*)OOC_IR__VisitorDesc_VisitConstructor,(void*)OOC_IR__VisitorDesc_VisitCurrentException,(void*)OOC_IR__VisitorDesc_VisitDeref,(void*)OOC_IR__VisitorDesc_VisitEntier,(void*)OOC_IR__VisitorDesc_VisitIndex,(void*)OOC_IR__VisitorDesc_VisitLen,(void*)OOC_IR__VisitorDesc_VisitNegate,(void*)OOC_IR__VisitorDesc_VisitNewBlock,(void*)OOC_IR__VisitorDesc_VisitNewObject,(void*)OOC_IR__VisitorDesc_VisitNot,(void*)OOC_IR__VisitorDesc_VisitOdd,(void*)OOC_IR__VisitorDesc_VisitSelectField,(void*)OOC_IR__VisitorDesc_VisitSelectProc,(void*)OOC_IR__VisitorDesc_VisitSetMember,(void*)OOC_IR__VisitorDesc_VisitSetOp,(void*)OOC_IR__VisitorDesc_VisitSetRange,(void*)OOC_IR__VisitorDesc_VisitShift,(void*)OOC_IR__VisitorDesc_VisitTypeCast,(void*)OOC_IR__VisitorDesc_VisitTypeConv,(void*)OOC_IR__VisitorDesc_VisitTypeTag,(void*)OOC_IR__VisitorDesc_VisitTypeTest,(void*)OOC_IR__VisitorDesc_VisitTypeGuard,(void*)OOC_IR__VisitorDesc_VisitModuleRef,(void*)OOC_IR__VisitorDesc_VisitPredefProc,(void*)OOC_IR__VisitorDesc_VisitProcedureRef,(void*)OOC_IR__VisitorDesc_VisitTypeRef,(void*)OOC_IR__VisitorDesc_VisitVar,(void*)OOC_IR__VisitorDesc_VisitAssert,(void*)OOC_IR__VisitorDesc_VisitAssignment,(void*)OOC_IR__VisitorDesc_VisitAssignOp,(void*)OOC_IR__VisitorDesc_VisitCall,(void*)OOC_IR__VisitorDesc_VisitCopy,(void*)OOC_IR__VisitorDesc_VisitCopyParameter,(void*)OOC_IR__VisitorDesc_VisitCopyString,(void*)OOC_IR__VisitorDesc_VisitExit,(void*)OOC_IR__VisitorDesc_VisitForStatm,(void*)OOC_IR__VisitorDesc_VisitIterateArrayStatm,(void*)OOC_IR__VisitorDesc_VisitIterateObjectStatm,(void*)OOC_IR__VisitorDesc_VisitIfStatm,(void*)OOC_IR__VisitorDesc_VisitCase,(void*)OOC_IR__VisitorDesc_VisitCaseStatm,(void*)OOC_IR__VisitorDesc_VisitLoopStatm,(void*)OOC_IR__VisitorDesc_VisitMoveBlock,(void*)OOC_IR__VisitorDesc_VisitRaise,(void*)OOC_IR__VisitorDesc_VisitRepeatStatm,(void*)OOC_IR__VisitorDesc_VisitReturn,(void*)OOC_IR__VisitorDesc_VisitCatchClause,(void*)OOC_IR__VisitorDesc_VisitTryStatm,(void*)OOC_IR__VisitorDesc_VisitWhileStatm,(void*)OOC_IR__VisitorDesc_VisitWithStatm,(void*)OOC_IR__VisitorDesc_VisitProcedure,(void*)OOC_IR__VisitorDesc_VisitModule}, NULL, &_mid, "VisitorDesc", 0, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ConstFoldDesc = { (RT0__Struct[]){&_td_OOC_IR__VisitorDesc,&_td_OOC_IR__ConstFoldDesc}, (void*[]){(void*)OOC_IR__VisitorDesc_VisitConst,(void*)OOC_IR__VisitorDesc_VisitAbs,(void*)OOC_IR__VisitorDesc_VisitAdr,(void*)OOC_IR__VisitorDesc_VisitAsh,(void*)OOC_IR__VisitorDesc_VisitBinaryArith,(void*)OOC_IR__VisitorDesc_VisitBooleanOp,(void*)OOC_IR__VisitorDesc_VisitCap,(void*)OOC_IR__VisitorDesc_VisitChangeElement,(void*)OOC_IR__VisitorDesc_VisitCompare,(void*)OOC_IR__VisitorDesc_VisitConcat,(void*)OOC_IR__VisitorDesc_VisitConstructor,(void*)OOC_IR__VisitorDesc_VisitCurrentException,(void*)OOC_IR__VisitorDesc_VisitDeref,(void*)OOC_IR__VisitorDesc_VisitEntier,(void*)OOC_IR__VisitorDesc_VisitIndex,(void*)OOC_IR__VisitorDesc_VisitLen,(void*)OOC_IR__VisitorDesc_VisitNegate,(void*)OOC_IR__VisitorDesc_VisitNewBlock,(void*)OOC_IR__VisitorDesc_VisitNewObject,(void*)OOC_IR__VisitorDesc_VisitNot,(void*)OOC_IR__VisitorDesc_VisitOdd,(void*)OOC_IR__VisitorDesc_VisitSelectField,(void*)OOC_IR__VisitorDesc_VisitSelectProc,(void*)OOC_IR__VisitorDesc_VisitSetMember,(void*)OOC_IR__VisitorDesc_VisitSetOp,(void*)OOC_IR__VisitorDesc_VisitSetRange,(void*)OOC_IR__VisitorDesc_VisitShift,(void*)OOC_IR__VisitorDesc_VisitTypeCast,(void*)OOC_IR__VisitorDesc_VisitTypeConv,(void*)OOC_IR__VisitorDesc_VisitTypeTag,(void*)OOC_IR__VisitorDesc_VisitTypeTest,(void*)OOC_IR__VisitorDesc_VisitTypeGuard,(void*)OOC_IR__VisitorDesc_VisitModuleRef,(void*)OOC_IR__VisitorDesc_VisitPredefProc,(void*)OOC_IR__VisitorDesc_VisitProcedureRef,(void*)OOC_IR__VisitorDesc_VisitTypeRef,(void*)OOC_IR__VisitorDesc_VisitVar,(void*)OOC_IR__VisitorDesc_VisitAssert,(void*)OOC_IR__VisitorDesc_VisitAssignment,(void*)OOC_IR__VisitorDesc_VisitAssignOp,(void*)OOC_IR__VisitorDesc_VisitCall,(void*)OOC_IR__VisitorDesc_VisitCopy,(void*)OOC_IR__VisitorDesc_VisitCopyParameter,(void*)OOC_IR__VisitorDesc_VisitCopyString,(void*)OOC_IR__VisitorDesc_VisitExit,(void*)OOC_IR__VisitorDesc_VisitForStatm,(void*)OOC_IR__VisitorDesc_VisitIterateArrayStatm,(void*)OOC_IR__VisitorDesc_VisitIterateObjectStatm,(void*)OOC_IR__VisitorDesc_VisitIfStatm,(void*)OOC_IR__VisitorDesc_VisitCase,(void*)OOC_IR__VisitorDesc_VisitCaseStatm,(void*)OOC_IR__VisitorDesc_VisitLoopStatm,(void*)OOC_IR__VisitorDesc_VisitMoveBlock,(void*)OOC_IR__VisitorDesc_VisitRaise,(void*)OOC_IR__VisitorDesc_VisitRepeatStatm,(void*)OOC_IR__VisitorDesc_VisitReturn,(void*)OOC_IR__VisitorDesc_VisitCatchClause,(void*)OOC_IR__VisitorDesc_VisitTryStatm,(void*)OOC_IR__VisitorDesc_VisitWhileStatm,(void*)OOC_IR__VisitorDesc_VisitWithStatm,(void*)OOC_IR__VisitorDesc_VisitProcedure,(void*)OOC_IR__VisitorDesc_VisitModule,(void*)OOC_IR__ConstFoldDesc_TryConstFold}, NULL, &_mid, "ConstFoldDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__ErrorContext = { (RT0__Struct[]){&_td_OOC_IR__ErrorContextDesc}, NULL, NULL, &_mid, "ErrorContext", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OOC_Error__ContextDesc,&_td_OOC_IR__ErrorContextDesc}, (void*[]){(void*)OOC_IR__ErrorContextDesc_GetTemplate,(void*)OOC_Error__ContextDesc_BaseTemplate}, NULL, &_mid, "ErrorContextDesc", 4, 2, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR__41077 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__41285 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 256, 128, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_IR__49323 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 256, 256, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_IR__52287 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__62405 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_IR__62770 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:IR", (RT0__Struct[]) { &_td_OOC_IR__Node, &_td_OOC_IR__NodeDesc, &_td_OOC_IR__GuardedVar, &_td_OOC_IR__GuardedVarDesc, &_td_OOC_IR__Expression, &_td_OOC_IR__ExpressionList, &_td_OOC_IR__ExpressionDesc, &_td_OOC_IR__Const, &_td_OOC_IR__ConstDesc, &_td_OOC_IR__Operator, &_td_OOC_IR__OperatorDesc, &_td_OOC_IR__Abs, &_td_OOC_IR__AbsDesc, &_td_OOC_IR__Adr, &_td_OOC_IR__AdrDesc, &_td_OOC_IR__Ash, &_td_OOC_IR__AshDesc, &_td_OOC_IR__BinaryArith, &_td_OOC_IR__BinaryArithDesc, &_td_OOC_IR__BooleanOp, &_td_OOC_IR__BooleanOpDesc, &_td_OOC_IR__Cap, &_td_OOC_IR__CapDesc, &_td_OOC_IR__Compare, &_td_OOC_IR__CompareDesc, &_td_OOC_IR__Concat, &_td_OOC_IR__ConcatDesc, &_td_OOC_IR__ChangeElement, &_td_OOC_IR__ChangeElementDesc, &_td_OOC_IR__Constructor, &_td_OOC_IR__NewObject, &_td_OOC_IR__Call, &_td_OOC_IR__ConstructorDesc, &_td_OOC_IR__CurrentException, &_td_OOC_IR__TryStatm, &_td_OOC_IR__CurrentExceptionDesc, &_td_OOC_IR__Deref, &_td_OOC_IR__DerefDesc, &_td_OOC_IR__Entier, &_td_OOC_IR__EntierDesc, &_td_OOC_IR__Index, &_td_OOC_IR__IndexDesc, &_td_OOC_IR__Len, &_td_OOC_IR__LenDesc, &_td_OOC_IR__Negate, &_td_OOC_IR__NegateDesc, &_td_OOC_IR__NewBlock, &_td_OOC_IR__NewBlockDesc, &_td_OOC_IR__NewObjectDesc, &_td_OOC_IR__Not, &_td_OOC_IR__NotDesc, &_td_OOC_IR__Odd, &_td_OOC_IR__OddDesc, &_td_OOC_IR__SelectField, &_td_OOC_IR__SelectFieldDesc, &_td_OOC_IR__SelectProc, &_td_OOC_IR__SelectProcDesc, &_td_OOC_IR__SetMember, &_td_OOC_IR__SetMemberDesc, &_td_OOC_IR__SetOp, &_td_OOC_IR__SetOpDesc, &_td_OOC_IR__SetRange, &_td_OOC_IR__SetRangeDesc, &_td_OOC_IR__Shift, &_td_OOC_IR__ShiftDesc, &_td_OOC_IR__TypeCast, &_td_OOC_IR__TypeCastDesc, &_td_OOC_IR__TypeConv, &_td_OOC_IR__TypeConvDesc, &_td_OOC_IR__TypeTag, &_td_OOC_IR__TypeRef, &_td_OOC_IR__TypeTagDesc, &_td_OOC_IR__TypeTest, &_td_OOC_IR__TypeTestDesc, &_td_OOC_IR__TypeGuard, &_td_OOC_IR__TypeGuardDesc, &_td_OOC_IR__Reference, &_td_OOC_IR__ReferenceDesc, &_td_OOC_IR__ModuleRef, &_td_OOC_IR__ModuleRefDesc, &_td_OOC_IR__PredefProc, &_td_OOC_IR__PredefProcDesc, &_td_OOC_IR__ProcedureRef, &_td_OOC_IR__ProcedureRefDesc, &_td_OOC_IR__TypeRefDesc, &_td_OOC_IR__Var, &_td_OOC_IR__VarDesc, &_td_OOC_IR__Statement, &_td_OOC_IR__LoopStatm, &_td_OOC_IR__StatementSeq, &_td_OOC_IR__StatementDesc, &_td_OOC_IR__Assert, &_td_OOC_IR__AssertDesc, &_td_OOC_IR__Assignment, &_td_OOC_IR__AssignmentDesc, &_td_OOC_IR__AssignOp, &_td_OOC_IR__AssignOpDesc, &_td_OOC_IR__CallDesc, &_td_OOC_IR__Copy, &_td_OOC_IR__CopyDesc, &_td_OOC_IR__CopyParameter, &_td_OOC_IR__CopyParameterDesc, &_td_OOC_IR__CopyString, &_td_OOC_IR__CopyStringDesc, &_td_OOC_IR__Exit, &_td_OOC_IR__ExitDesc, &_td_OOC_IR__ForStatm, &_td_OOC_IR__ForStatmDesc, &_td_OOC_IR__IterateArrayStatm, &_td_OOC_IR__IterateArrayStatmDesc, &_td_OOC_IR__IterateObjectStatm, &_td_OOC_IR__IterateObjectStatmDesc, &_td_OOC_IR__IfStatm, &_td_OOC_IR__IfStatmDesc, &_td_OOC_IR__Case, &_td_OOC_IR__CaseLabels, &_td_OOC_IR__CaseDesc, &_td_OOC_IR__CaseStatm, &_td_OOC_IR__CaseList, &_td_OOC_IR__CaseStatmDesc, &_td_OOC_IR__LoopStatmDesc, &_td_OOC_IR__MoveBlock, &_td_OOC_IR__MoveBlockDesc, &_td_OOC_IR__Raise, &_td_OOC_IR__RaiseDesc, &_td_OOC_IR__RepeatStatm, &_td_OOC_IR__RepeatStatmDesc, &_td_OOC_IR__Return, &_td_OOC_IR__ReturnDesc, &_td_OOC_IR__CatchClause, &_td_OOC_IR__CatchList, &_td_OOC_IR__CatchClauseDesc, &_td_OOC_IR__TryStatmDesc, &_td_OOC_IR__WhileStatm, &_td_OOC_IR__WhileStatmDesc, &_td_OOC_IR__WithStatm, &_td_OOC_IR__WithStatmDesc, &_td_OOC_IR__Procedure, &_td_OOC_IR__ProcedureList, &_td_OOC_IR__ProcedureDesc, &_td_OOC_IR__Module, &_td_OOC_IR__ModuleDesc, &_td_OOC_IR__TypeType, &_td_OOC_IR__TypeTypeDesc, &_td_OOC_IR__ModuleType, &_td_OOC_IR__ModuleTypeDesc, &_td_OOC_IR__Builder, &_td_OOC_IR__ConstFold, &_td_OOC_IR__BuilderDesc, &_td_OOC_IR__Visitor, &_td_OOC_IR__VisitorDesc, &_td_OOC_IR__ConstFoldDesc, &_td_OOC_IR__ErrorContext, &_td_OOC_IR__ErrorContextDesc, NULL }, 0 };

extern void OOC_OOC_IR_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Log_open(&_mid);
    OOC_Msg_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Object_BigInt_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_ADT_ArrayList_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_Config_open(&_mid);
    OOC_OOC_Scanner_Symbol_open(&_mid);
    OOC_OOC_Scanner_SymList_open(&_mid);
    OOC_OOC_Error_open(&_mid);
    OOC_OOC_Config_Pragmas_open(&_mid);
    OOC_OOC_Config_StdPragmas_open(&_mid);
    OOC_OOC_AST_open(&_mid);
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_OOC_SymbolTable_Predef_open(&_mid);
    OOC_OOC_SymbolTable_TypeRules_open(&_mid);
    OOC_OOC_SymbolTable_Namespace_open(&_mid);
    OOC_OOC_SymbolTable_CreateNamespace_open(&_mid);
    OOC_OOC_SymbolTable_Uses_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_IR_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_IR_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_IR_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Log_close(&_mid);
    OOC_Msg_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Object_BigInt_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_ADT_ArrayList_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_Config_close(&_mid);
    OOC_OOC_Scanner_Symbol_close(&_mid);
    OOC_OOC_Scanner_SymList_close(&_mid);
    OOC_OOC_Error_close(&_mid);
    OOC_OOC_Config_Pragmas_close(&_mid);
    OOC_OOC_Config_StdPragmas_close(&_mid);
    OOC_OOC_AST_close(&_mid);
    OOC_OOC_SymbolTable_close(&_mid);
    OOC_OOC_SymbolTable_Predef_close(&_mid);
    OOC_OOC_SymbolTable_TypeRules_close(&_mid);
    OOC_OOC_SymbolTable_Namespace_close(&_mid);
    OOC_OOC_SymbolTable_CreateNamespace_close(&_mid);
    OOC_OOC_SymbolTable_Uses_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
