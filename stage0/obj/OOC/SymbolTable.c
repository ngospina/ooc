#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(34775); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = OOC_FALSE;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36677)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(36807); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = OOC_FALSE;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37731)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)position;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 37993)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 38019))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 38047))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 38252));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38232)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 38285))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38265)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 38319))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38299)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38487)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 38506)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38519)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 38538))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38552)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 38571))+8));
  return;
  ;
}

void OOC_SymbolTable__InitName(OOC_SymbolTable__Name name, OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = pos;
  i1 = line;
  i2 = column;
  i3 = (OOC_INT32)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i3, i0, i1, i2);
  i0 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i3, 38784))+12) = i0;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39008))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39008))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 39013)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 39013)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39022)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39063))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39045)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 39068)), -1, 0, i1);
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Load(OOC_SymbolTable__Name name, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray str;

  i0 = (OOC_INT32)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, -2, -1, -1);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39336)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 39382);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 39382))) = (OOC_CHAR8)'\000';
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39400)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 39416)), -1, 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 39436))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l);
    
    void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39565));
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l7;
l2_loop:
      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39600));
      l = (OOC_SymbolTable__Item)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39565));
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l2_loop;
l7:
      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)item;
      *(OOC_INT32*)(_check_pointer(i0, 39630)) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)item;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 39711)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 39740))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 39770))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 39798))+12) = (OOC_INT32)0;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39867)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39904)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39943)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=OOC_TRUE;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39980)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l14;
l13:
  i2=OOC_TRUE;
l14:
  _assert(i2, 127, 39850);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40013))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40105))+8);
  OOC_SymbolTable__InitItem_Append((OOC_SymbolTable__Item)i0);
  goto l19;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 40051))+8) = i0;
l19:
  return;
  ;
}

static void OOC_SymbolTable__WriteItemList(ADT_Storable__Writer w, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i0 = i0!=(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  if (!i0) goto l8;
l3_loop:
  i0 = (OOC_INT32)item;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40267)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40306));
  item = (OOC_SymbolTable__Item)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40333)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)(OOC_INT32)0);
  return;
  ;
}

static OOC_SymbolTable__Item OOC_SymbolTable__ReadItemList(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Item list;
  OOC_SymbolTable__Item last;
  ADT_Storable__Object obj;

  list = (OOC_SymbolTable__Item)(OOC_INT32)0;
  last = (OOC_SymbolTable__Item)(OOC_INT32)0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40541)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=(OOC_INT32)0;
  goto l17;
l3:
  i1=(OOC_INT32)0;i2=(OOC_INT32)0;
l4_loop:
  i3 = (OOC_INT32)obj;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40598)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i4) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40589)))), 40589);
  
  goto l12;
l7:
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l10;
  list = (OOC_SymbolTable__Item)i3;
  i1=i3;
  goto l11;
l10:
  *(OOC_INT32*)(_check_pointer(i1, 40649)) = i3;
  i1=i2;
l11:
  last = (OOC_SymbolTable__Item)i3;
  i2=i1;i1=i3;
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40754)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i3 = (OOC_INT32)obj;
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l4_loop;
l16:
  i0=i2;
l17:
  return (OOC_SymbolTable__Item)i0;
  ;
}

void OOC_SymbolTable__ItemDesc_Store(OOC_SymbolTable__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40918))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40957))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 40938)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 41134)) = (OOC_INT32)0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 41163))+8) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41202)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 41291))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41307)))), &_td_OOC_SymbolTable__ItemDesc, 41307));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 41256))+4) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 41330))+12) = (OOC_INT32)0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41621))+4);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l7;
l2_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41658))+4);
  item = (OOC_SymbolTable__Item)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41621))+4);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l2_loop;
l7:
  i0 = (OOC_INT32)item;
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41692)))), &_td_OOC_SymbolTable__ModuleDesc, 41692));
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41942))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41983)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=OOC_TRUE;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42066)))), &_td_OOC_SymbolTable__ProcDeclDesc, 42066));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(41738); return 0;
  ;
}

void OOC_SymbolTable__ItemDesc_AddFlag(OOC_SymbolTable__Item item, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT16 id;
  OOC_SymbolTable__Flag fl;
  auto void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list);
    
    void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 42505)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 42437)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42567))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42571)),(const void*)"NO_COPY"))==(OOC_INT32)0;
  if (i1) goto l39;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42630))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42634)),(const void*)"ABSTRACT"))==(OOC_INT32)0;
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42696))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42700)),(const void*)"NO_LENGTH_INFO"))==(OOC_INT32)0;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42772))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42776)),(const void*)"NO_DESCRIPTOR"))==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42847))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42851)),(const void*)"NOT_EXTENSIBLE"))==(OOC_INT32)0;
  if (i1) goto l31;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42924))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42928)),(const void*)"CSTRING"))==(OOC_INT32)0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42988))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42992)),(const void*)"NIL_COMPAT"))==(OOC_INT32)0;
  if (i1) goto l27;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43057))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43061)),(const void*)"UNION"))==(OOC_INT32)0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43117))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43121)),(const void*)"READ_ONLY"))==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43184))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43188)),(const void*)"NO_RETURN"))==(OOC_INT32)0;
  if (i1) goto l21;
  id = -1;
  i1=-1;
  goto l40;
l21:
  id = 9;
  i1=9;
  goto l40;
l23:
  id = 8;
  i1=8;
  goto l40;
l25:
  id = 7;
  i1=7;
  goto l40;
l27:
  id = 6;
  i1=6;
  goto l40;
l29:
  id = 5;
  i1=5;
  goto l40;
l31:
  id = 4;
  i1=4;
  goto l40;
l33:
  id = 3;
  i1=3;
  goto l40;
l35:
  id = 2;
  i1=2;
  goto l40;
l37:
  id = 1;
  i1=1;
  goto l40;
l39:
  id = (OOC_INT32)0;
  i1=(OOC_INT32)0;
l40:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 43303))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 43320))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 43349))+12));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 43625))+16) = i0;
  i0 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i1, 43649))+20) = i0;
  i0 = exportMark;
  *(OOC_INT8*)((_check_pointer(i1, 43687))+24) = i0;
  i0 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i1, 43723))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 43757))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 43784))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43956))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43937)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 44027))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44011)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 44054))+24);
  i2 = i2!=0;
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44151)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44117))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44098)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
l4:
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Load(OOC_SymbolTable__Declaration decl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44353)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 44381))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44395)))), &_td_OOC_SymbolTable__NameDesc, 44395));
  *(OOC_INT32*)((_check_pointer(i1, 44564))+20) = -3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44778)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i1, 44797))+24) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44837)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 44935))+28) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44958)))), &_td_OOC_Doc__DocumentDesc, 44958));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 44893))+28) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 44987))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 45014))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCount(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 45113))+36);
  *(OOC_INT32*)((_check_pointer(i0, 45113))+36) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45531)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45550))+20);
  i0 = i0==(OOC_INT32)0;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__InitType(OOC_SymbolTable__Type type, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)position;
  *(OOC_INT32*)((_check_pointer(i1, 45711))+16) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 45743))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 45772))+24) = -2;
  *(OOC_INT16*)((_check_pointer(i1, 45803))+28) = 1;
  *(OOC_UINT8*)((_check_pointer(i1, 45825))+30) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45989))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45970)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (!i2) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46068))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46049)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
l4:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 46111))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46095)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i1, 46141))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46125)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 46173))+30);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46156)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Load(OOC_SymbolTable__Type type, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46354)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 46447))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46467)))), &_td_OOC_SymbolTable__TypeDeclDesc, 46467));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 46408))+20) = (OOC_INT32)0;
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i1, 46609))+16) = i2;
  goto l8;
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46531)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 46561))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46579)))), &_td_OOC_SymbolTable__PositionDesc, 46579));
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46653)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 46668))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46682)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i1, 46705))+28) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46732)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 46748))+30));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 46945))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 47075))+24) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 47099))+28) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47363)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47412)))), &_td_OOC_SymbolTable__ArrayDesc, 47412)), 47418))+36);
  type = (OOC_SymbolTable__Type)i1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47363)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 47565)) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 47709));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47693)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47849)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 47930)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47944)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 47944));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 47900)) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Store(OOC_SymbolTable__LinkFile l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri);
    
    void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri) {
      register OOC_INT32 i0;
      OOC_CHAR8 b[1024];

      i0 = (OOC_INT32)uri;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48192)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48216)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)b, 1024);
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48300))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i0, (URI__HierarchicalURI)i1);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48327))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48314)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48362))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48349)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48496)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(48403); return 0;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Load(OOC_SymbolTable__LinkFile l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(ADT_Storable__Reader r, URI__HierarchicalURI *uri);
    
    void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(ADT_Storable__Reader r, URI__HierarchicalURI *uri) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 b[1024];
      URI__URI u;
      Msg__Msg res;

      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48859)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)b, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
      i1 = (OOC_INT32)res;
      u = (URI__URI)i0;
      _assert((i1==(OOC_INT32)0), 127, 49042);
      i1 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49157)))), &_td_URI__HierarchicalURIDesc, 49157)), 49173)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49157)))), &_td_URI__HierarchicalURIDesc, 49157)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49223)))), &_td_URI__HierarchicalURIDesc, 49223));
      return;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 49304))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49318))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49356))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49538))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49525)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49572))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49559)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49607))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49594)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49647))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49661)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49629)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49690))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49704)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49732))+8);
  i4 = _check_pointer(i4, 49746);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 49746))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49719)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Load(OOC_SymbolTable__LinkLib l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49898))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49935))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49973))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50011)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 50038))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50094))+8);
  i4 = _check_pointer(i4, 50108);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 50108))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__InitModule(OOC_SymbolTable__Module mod, OOC_SymbolTable__Name name, OOC_Doc__Document docString, OOC_INT8 _class, OOC_INT8 callConv, OOC_AST__Node moduleAST, OOC_SymbolTable__ProcDecl bodyDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)docString;
  i2 = (OOC_INT32)mod;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)i1);
  *(OOC_INT32*)((_check_pointer(i2, 50436))+40) = (OOC_INT32)0;
  i0 = _class;
  *(OOC_INT8*)((_check_pointer(i2, 50456))+44) = i0;
  i0 = callConv;
  *(OOC_INT8*)((_check_pointer(i2, 50481))+52) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 50512))+56) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 50544))+60) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 50571))+64) = (OOC_INT32)0;
  i0 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i2, 50602))+68) = i0;
  i0 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i2, 50635))+72) = i0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 50825))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50809)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50855))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50840)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 50891))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50875)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50927))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50909)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 51094))+40) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51112)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 51127))+44));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 51144))+48) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51181)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 51196))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51214)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 51309))+56) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51333)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 51333));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 51267))+56) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 51364))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 51395))+68) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 51571))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 51675))+48) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 51790))+44);
  switch (i0) {
  case 0:
    return (Object__String)((OOC_INT32)_c0);
    goto l7;
  case 1:
    return (Object__String)((OOC_INT32)_c1);
    goto l7;
  case 2:
    return (Object__String)((OOC_INT32)_c2);
    goto l7;
  case 3:
    return (Object__String)((OOC_INT32)_c3);
    goto l7;
  default:
    _failed_case(i0, 51782);
    goto l7;
  }
l7:
  _failed_function(51744); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 52052))+52);
  switch (i0) {
  case -1:
    return (Object__String)((OOC_INT32)_c4);
    goto l8;
  case 0:
    return (Object__String)((OOC_INT32)_c5);
    goto l8;
  case 1:
    return (Object__String)((OOC_INT32)_c6);
    goto l8;
  case 2:
    return (Object__String)((OOC_INT32)_c7);
    goto l8;
  case 3:
    return (Object__String)((OOC_INT32)_c8);
    goto l8;
  default:
    _failed_case(i0, 52044);
    goto l8;
  }
l8:
  _failed_function(52003); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 52498))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52519))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52556))+12) = i1;
  return (OOC_SymbolTable__LinkFile)i0;
  ;
}

static OOC_SymbolTable__LinkLib OOC_SymbolTable__NewLinkLib(Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkLib l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkLib.baseTypes[0]);
  l = (OOC_SymbolTable__LinkLib)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)libraryName;
  *(OOC_INT32*)((_check_pointer(i0, 52866))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 52901))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52938))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52975))+16) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 53219)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 53151)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 53413);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 53459))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 53785);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 53838))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54491))+44);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54520))+44);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54559))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54604)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54634));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54604)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(54023); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55164))+44);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55192))+44);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  _assert(i1, 127, 55152);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55229))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55273)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55301));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55273)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55382)))), &_td_OOC_SymbolTable__LinkFileDesc, 55382)), 55391))+4);
  _assert((i1!=(OOC_INT32)0), 127, 55372);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55414)))), &_td_OOC_SymbolTable__LinkFileDesc, 55414)), 55423))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55414)))), &_td_OOC_SymbolTable__LinkFileDesc, 55414)), 55423))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55429)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55473)))), &_td_OOC_SymbolTable__LinkFileDesc, 55473)), 55482))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(54758); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55595)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55649)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return -1;
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(55535); return 0;
  ;
}

void OOC_SymbolTable__InitImport(OOC_SymbolTable__Import import, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_Doc__Document docString, OOC_SymbolTable__Name moduleName) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = (OOC_INT32)docString;
  i4 = (OOC_INT32)import;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, 0, (OOC_Doc__Document)i3);
  i0 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i4, 56056))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i4, 56094))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 56220))+44) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 56281))+60);
  *(OOC_INT32*)((_check_pointer(i0, 56258))+48) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56546))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56558))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 56563)),(const void*)"SYSTEM"))==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56734))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56713)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 56773))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56754)))), IO_BinaryRider__WriterDesc_WriteLInt)),IO_BinaryRider__WriterDesc_WriteLInt)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56942)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 56972))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56992)))), &_td_OOC_SymbolTable__NameDesc, 56992));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57004)))), IO_BinaryRider__ReaderDesc_ReadLInt)),IO_BinaryRider__ReaderDesc_ReadLInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 57022))+48));
  return;
  ;
}

void OOC_SymbolTable__InitConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, Object_Boxed__Object value, OOC_SymbolTable__PredefType type, OOC_AST__Node constExpr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)constDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i5, 57489))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 57520))+44) = i0;
  i0 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i5, 57549))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 57708))+40) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 57738))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)constDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57916))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57892)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57943))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58175))+44);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 58181))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58154)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58122)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, -1);
l4:
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Load(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 id;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)constDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58374)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 58472))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58493)))), &_td_Object_Boxed__ObjectDesc, 58493));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 58433))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58515)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&id);
  i0 = id;
  i2 = i0==-1;
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 58685);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 58685))*4);
  *(OOC_INT32*)((_check_pointer(i1, 58661))+44) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58714))+44);
  _assert((i0!=(OOC_INT32)0), 127, 58697);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 58622))+44) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i1, 58750))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i1, 58963))+20) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 59003))+16) = i0;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59249))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59221)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59439)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 59476))+20) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59497)))), &_td_OOC_SymbolTable__TypeDesc, 59497));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59544))+20);
  *(OOC_INT32*)((_check_pointer(i1, 59521))+16) = i0;
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59706)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59725)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=OOC_TRUE;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 59784))+40) = i1;
  i2 = _check_pointer(i0, 59811);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 59850))+48);
  if (i3) goto l3;
  i0=OOC_FALSE;
  goto l8;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 59882))+50);
  if (i0) goto l6;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i0=OOC_TRUE;
l8:
  *(OOC_UINT8*)(i2+51) = i0;
  i0 = (OOC_INT32)varDecl;
  i1 = _check_pointer(i0, 59935);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 59968))+48);
  if (i2) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 60000))+50);
  i0 = !i0;
  
l13:
  if (i0) goto l15;
  i0=OOC_FALSE;
  goto l16;
l15:
  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i0);
  
l16:
  *(OOC_UINT8*)(i1+52) = i0;
  i0 = (OOC_INT32)varDecl;
  i1 = _check_pointer(i0, 60059);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 60090))+51);
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 60129))+50);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=OOC_FALSE;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 60160))+52);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+53) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitVarDecl(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isParameter, OOC_CHAR8 isReceiver, OOC_CHAR8 isVarParam, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)varDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 60588))+44) = i1;
  i2 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i5, 60622))+48) = i2;
  i2 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i5, 60663))+49) = i2;
  i3 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i5, 60702))+50) = i3;
  *(OOC_UINT8*)((_check_pointer(i5, 60741))+54) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i5, 60782))+55) = OOC_TRUE;
  if (!i2) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60844)))), &_td_OOC_SymbolTable__FormalParsDesc, 60844)), 60855))+32) = i5;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 60897)))), OOC_SymbolTable__VarDeclDesc_SetType)),OOC_SymbolTable__VarDeclDesc_SetType)((OOC_SymbolTable__VarDecl)i5, (OOC_SymbolTable__Type)i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61109))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61087)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61150))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61130)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61191))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61171)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61231))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61211)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61271))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61251)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61319))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61299)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61361))+53);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61341)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 61401))+54);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61381)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 61448))+55);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61428)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61623)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 61654))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 61675)))), &_td_OOC_SymbolTable__TypeDesc, 61675));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61710))+44);
  *(OOC_INT32*)((_check_pointer(i1, 61693))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61730)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61749))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61770)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61789))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61809)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61828))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61848)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61867))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61895)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61914))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61936)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61955))+53));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61975)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61994))+54));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62021)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 62040))+55));
  i0 = *(OOC_UINT8*)((_check_pointer(i1, 62078))+48);
  if (!i0) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 62190))+20) = -1;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitTypeDecl(OOC_SymbolTable__TypeDecl typeDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 62568))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 62596))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62818))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62795)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62992)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 63024))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63045)))), &_td_OOC_SymbolTable__TypeDesc, 63045));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63082))+44);
  *(OOC_INT32*)((_check_pointer(i1, 63064))+40) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)redir;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i2, 63308))+40) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 63337))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63505))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63485)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63541))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63521)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63704)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 63733))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 63749)))), &_td_OOC_SymbolTable__NameDesc, 63749));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63761)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 63790))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63805)))), &_td_OOC_SymbolTable__NameDesc, 63805));
  return;
  ;
}

void OOC_SymbolTable__InitFieldDecl(OOC_SymbolTable__FieldDecl fieldDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 64138))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 64167))+44) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 64203))+48) = -1;
  *(OOC_UINT8*)((_check_pointer(i5, 64232))+52) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64469))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64445)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 64511))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64490)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 64549))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64527)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64734)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 64767))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64788)))), &_td_OOC_SymbolTable__TypeDesc, 64788));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64827))+44);
  *(OOC_INT32*)((_check_pointer(i1, 64808))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64847)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 64867))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64883)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 64904))+52));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 65024))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitPredefProc(OOC_SymbolTable__PredefProc proc, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT16 id, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)proc;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i2, 65283))+40) = i0;
  i0 = minArgs;
  *(OOC_INT16*)((_check_pointer(i2, 65303))+42) = i0;
  i0 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i2, 65333))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 65464);
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 65578);
  return;
  ;
}

void OOC_SymbolTable__InitProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isTypeBound, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)procDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = isTypeBound;
  *(OOC_UINT8*)((_check_pointer(i5, 66010))+40) = i0;
  i0 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i5, 66052))+41) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 66098))+42) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i5, 66133))+44) = -1;
  *(OOC_INT32*)((_check_pointer(i5, 66166))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 66191))+52) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 66224))+56) = (OOC_INT32)0;
  i0 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i5, 66255))+60) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 66289))+64) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)procDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 66470))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66449)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 66512))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66491)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 66556))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66535)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 66596))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66576)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66640))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66617)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66680))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66660)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66892)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66912))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66933)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66953))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66976)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66996))+42));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67016)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67035))+44));
  *(OOC_INT32*)((_check_pointer(i0, 67063))+48) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67081)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 67182))+52) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67202)))), &_td_OOC_SymbolTable__FormalParsDesc, 67202));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 67139))+52) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 67235))+56) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 67276))+60) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 67306))+64) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 67505))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 67618))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 67987))+44);
  *(OOC_INT32*)((_check_pointer(i0, 67962))+44) = i1;
  return;
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT32)procDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 68313))+40);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68355))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68367))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68377))+40);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68401)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68441)))), &_td_OOC_SymbolTable__PointerDesc, 68441)), 68449))+32);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68487)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68524)))), &_td_OOC_SymbolTable__RecordDesc, 68524));
l12:
  _failed_function(68056); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 68880))+20);
  *(OOC_INT32*)((_check_pointer(i0, 68856))+20) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69095))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i1, 69260))+32) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 69382);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 69497);
  return;
  ;
}

void OOC_SymbolTable__InitTypeName(OOC_SymbolTable__TypeName tname, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)tname;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i2, 69706))+32) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 69735))+36) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69902))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69882)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69938))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69918)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70100)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 70191))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70207)))), &_td_OOC_SymbolTable__NameDesc, 70207));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 70155))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70227)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 70256))+36) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70271)))), &_td_OOC_SymbolTable__NameDesc, 70271));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70417)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70447))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70481))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70447))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70451)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, OOC_FALSE);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70515)))), &_td_OOC_SymbolTable__ImportDesc, 70515));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)record;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 70714))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 70748))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 70789))+40) = -1;
  *(OOC_INT32*)((_check_pointer(i2, 70867))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 70890))+48) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 70920))+49) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 70953))+50) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i2, 70987))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)record;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71198))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71177)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 71241))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71223)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71281))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71262)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71317))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71298)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71356))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71337)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71399))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71378)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71594)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 71696))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71721)))), &_td_OOC_SymbolTable__TypeDesc, 71721));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 71650))+36) = (OOC_INT32)0;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71766))+36);
  *(OOC_INT32*)((_check_pointer(i0, 71746))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71790)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71807))+40));
  *(OOC_INT32*)((_check_pointer(i0, 71833))+44) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71851)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71869))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71886)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71904))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71924)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71942))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71964)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 72060))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72079)))), &_td_OOC_SymbolTable__NameDesc, 72079));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 72020))+52) = (OOC_INT32)0;
l8:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 72259))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 72583))+40);
  *(OOC_INT32*)((_check_pointer(i0, 72560))+44) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 72613))+40);
  *(OOC_INT32*)((_check_pointer(i1, 72613))+40) = (i0+1);
  return;
  ;
}

void OOC_SymbolTable__InitPointer(OOC_SymbolTable__Pointer pointer, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)pointer;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 72833))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 72868))+36) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 72910))+40) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 72952))+41) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73171))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73149)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 73216))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73196)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 73264))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73244)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73433)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 73464))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73489)))), &_td_OOC_SymbolTable__TypeDesc, 73489));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73528))+36);
  *(OOC_INT32*)((_check_pointer(i1, 73507))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73552)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73571))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73599)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73618))+41));
  return;
  ;
}

void OOC_SymbolTable__InitArray(OOC_SymbolTable__Array array, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_CHAR8 isOpenArray, OOC_SymbolTable__Type elementType, OOC_AST__Node lengthExpr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)array;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = isOpenArray;
  *(OOC_UINT8*)((_check_pointer(i2, 73880))+32) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 73919))+33) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i2, 73953))+34) = OOC_FALSE;
  i0 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i2, 73989))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 74028))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 74074))+44) = -1;
  i0 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i2, 74099))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 74269))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74251)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 74308))+33);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74290)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 74349))+34);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74331)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74438))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74418)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 74483))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74466)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74648)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 74665))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74686)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 74703))+33));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74726)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 74743))+34));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74767)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 74796))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74824)))), &_td_OOC_SymbolTable__TypeDesc, 74824));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74862))+40);
  *(OOC_INT32*)((_check_pointer(i1, 74840))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74889)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 74905))+44));
  *(OOC_INT32*)((_check_pointer(i1, 74925))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 75031))+44) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__ArrayDesc_GetOpenDimensions(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 dim;
  OOC_SymbolTable__Type type;

  dim = 0;
  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75353)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75370)))), &_td_OOC_SymbolTable__ArrayDesc, 75370)), 75376))+32);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75429)))), &_td_OOC_SymbolTable__ArrayDesc, 75429)), 75435))+36);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75353)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75370)))), &_td_OOC_SymbolTable__ArrayDesc, 75370)), 75376))+32);
  
l13:
  if (i2) goto l8_loop;
l17:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNonOpenElementType(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75705)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75722)))), &_td_OOC_SymbolTable__ArrayDesc, 75722)), 75728))+32);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75764)))), &_td_OOC_SymbolTable__ArrayDesc, 75764)), 75770))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75705)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75722)))), &_td_OOC_SymbolTable__ArrayDesc, 75722)), 75728))+32);
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetInnermostElementType(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76042)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76074)))), &_td_OOC_SymbolTable__ArrayDesc, 76074)), 76080))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76042)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNthElementType(OOC_SymbolTable__Array array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  i1 = dim;
  i1 = i1>0;
  type = (OOC_SymbolTable__Type)i0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76443)))), &_td_OOC_SymbolTable__ArrayDesc, 76443)), 76449))+36);
  i1 = dim;
  i1 = i1-1;
  type = (OOC_SymbolTable__Type)i0;
  dim = i1;
  i1 = i1>0;
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitFormalPars(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)formalPars;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  *(OOC_INT32*)((_check_pointer(i2, 76732))+32) = (OOC_INT32)0;
  i0 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i2, 76765))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 76807))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 76856))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 76887))+48) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 76931))+49) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i2, 76966))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 77188))+48) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)formalPars;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77415))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77390)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77507))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77482)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77547))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77634))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 77642)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77607)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77682))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 77690)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77732))+44);
  i4 = _check_pointer(i4, 77740);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 77740))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77707)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77575)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, -1);
l12:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77792))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77769)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77842))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77819)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77873))+52);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77960))+52);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 77968)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77933)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78008))+52);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 78016)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l24;
  i3=0;
l17_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78058))+52);
  i4 = _check_pointer(i4, 78066);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 78066))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78033)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l17_loop;
  goto l24;
l23:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77901)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, -1);
l24:
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Load(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_Storable__Object obj;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)formalPars;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78276)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 78379))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 78397)))), &_td_OOC_SymbolTable__VarDeclDesc, 78397));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 78336))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78420)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i1, 78532))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 78559)))), &_td_OOC_SymbolTable__TypeDesc, 78559));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 78480))+40) = (OOC_INT32)0;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78614))+40);
  *(OOC_INT32*)((_check_pointer(i1, 78588))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78640)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l19;
  *(OOC_INT32*)((_check_pointer(i1, 78741))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l13_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78795)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78833))+44);
  i4 = _check_pointer(i4, 78841);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 78841))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 78852)))), &_td_OOC_SymbolTable__VarDeclDesc, 78852));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l13_loop;
  goto l20;
l19:
  *(OOC_INT32*)((_check_pointer(i1, 78695))+44) = (OOC_INT32)0;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78885)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78907))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78934)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78956))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78979)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l31;
  *(OOC_INT32*)((_check_pointer(i1, 79080))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l32;
  i3=0;
l25_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79134)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 79172))+52);
  i4 = _check_pointer(i4, 79180);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 79180))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 79191)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 79191));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l25_loop;
  goto l32;
l31:
  *(OOC_INT32*)((_check_pointer(i1, 79034))+52) = (OOC_INT32)0;
l32:
  return;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ItemDesc_Namespace(OOC_SymbolTable__Item item) {

  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ModuleDesc_Namespace(OOC_SymbolTable__Module item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79590))+40);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79689))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79786))+44);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

void OOC_SymbolTable__Prune(OOC_SymbolTable__Module root, ADT_Dictionary__Dictionary keep) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_ArrayList__ArrayList prunedImports;
  OOC_INT32 i;
  OOC_SymbolTable__Import import;
  OOC_SymbolTable__ModuleRef mr;
  auto void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list);
    
    void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item _this;
      OOC_SymbolTable__Item last;

      i0 = (OOC_INT32)*list;
      _this = (OOC_SymbolTable__Item)i0;
      last = (OOC_SymbolTable__Item)(OOC_INT32)0;
      i1 = i0!=(OOC_INT32)0;
      *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
      if (i1) goto l3;
      i0=(OOC_INT32)0;
      goto l24;
l3:
      i1=(OOC_INT32)0;
l4_loop:
      i2 = (OOC_INT32)keep;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 80323)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
      if (i2) goto l14;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80610)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80629)))), &_td_OOC_SymbolTable__ImportDesc, 80629)), 80636)))), OOC_SymbolTable__ImportDesc_IsInternalImport)),OOC_SymbolTable__ImportDesc_IsInternalImport)((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80629)))), &_td_OOC_SymbolTable__ImportDesc, 80629)));
      i2 = !i2;
      
l11:
      if (!i2) goto l19;
      i2 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 80686)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i0);
      goto l19;
l14:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 80369))+8));
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l17;
      *(OOC_INT32*)(_check_pointer(i1, 80518)) = i0;
      goto l18;
l17:
      *list = (OOC_SymbolTable__Item)i0;
l18:
      last = (OOC_SymbolTable__Item)i0;
      i1=i0;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 80749));
      _this = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l4_loop;
l23:
      i0=i1;
l24:
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
      *(OOC_INT32*)(_check_pointer(i0, 80833)) = (OOC_INT32)0;
l27:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 80945))+8));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 81002))+4);
  *(OOC_INT32*)((_check_pointer(i0, 80973))+64) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 81041))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 81081));
  i4 = _check_pointer(i4, 81087);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 81087))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 81091)))), &_td_OOC_SymbolTable__ImportDesc, 81091);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 81138))+40);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 81149))+12);
  *(OOC_INT32*)(_check_pointer(i5, 81123)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 81185))+48);
  *(OOC_INT32*)((_check_pointer(i5, 81163))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81209))+64);
  i4 = _check_pointer(i4, 81223);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 81223))*4) = i5;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  OOC_Scanner_InputBuffer__CharArray id;
  OOC_SymbolTable__Declaration declWithType;
  auto OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type);
  auto OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b);
    
    OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;
      OOC_SymbolTable__Item ptr;
      OOC_CHAR8 found;
      auto OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type);
        
        OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)ptr;
          i1 = (OOC_INT32)type;
          i2 = i0==i1;
          if (i2) goto l11;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81950)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82035)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return OOC_FALSE;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82078))+40);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81995))+36);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return OOC_TRUE;
l12:
          _failed_function(81819); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82227)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82247)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      _assert(i1, 127, 82213);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82279)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82301))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82310)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82396))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      goto l12;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82347))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82356)))), &_td_OOC_SymbolTable__ProcDeclDesc, 82356));
l12:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82435)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82468)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l17;
l15:
      i1=OOC_TRUE;
l17:
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82503)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l21;
l19:
      i1=OOC_TRUE;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82536)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l24;
l23:
      i1=OOC_TRUE;
l24:
      _assert(i1, 127, 82422);
      found = OOC_FALSE;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82591))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l51;
l27_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82649)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82728)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82808)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82887)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l36;
      found = OOC_FALSE;
      i0=OOC_FALSE;
      goto l43;
l36:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82934))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82854))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82774))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82694))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l43:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l46;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83049)))), &_td_OOC_SymbolTable__DeclarationDesc, 83049));
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 83093));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l27_loop;
l51:
      _assert(OOC_FALSE, 127, 83123);
      _failed_function(81713); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 83264)),(const void*)""))==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 83338)), (OOC_INT32)0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 83338)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 83358)), (OOC_INT32)0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 83358)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 83384)), (OOC_INT32)0);
      _copy_8((const void*)(_check_pointer(i0, 83380)),(void*)(_check_pointer(i1, 83384)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 83418)), (OOC_INT32)0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 83418)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 83451)), (OOC_INT32)0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 83447)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i2, 83447)), i3, (void*)(_check_pointer(i1, 83451)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(83175); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83521))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83596)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83717)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83737)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83737)), 83746))+40);
  
l9:
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84035)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84311)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84330)))), &_td_OOC_SymbolTable__VarDeclDesc, 84330)), 84338))+48);
  
l17:
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84639))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84639))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84648)))), &_td_OOC_SymbolTable__DeclarationDesc, 84648)), 84660)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84648)))), &_td_OOC_SymbolTable__DeclarationDesc, 84648)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84675))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84681))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84509)))), &_td_OOC_SymbolTable__VarDeclDesc, 84509)), 84517))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84526)))), &_td_OOC_SymbolTable__FormalParsDesc, 84526)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84574)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84589))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84595))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84202)))), &_td_OOC_SymbolTable__FieldDeclDesc, 84202)), 84212))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84221)))), &_td_OOC_SymbolTable__RecordDesc, 84221)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84265)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84280))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84286))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l23:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83934)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83934)), 83943)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83934)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83934)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83989)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84004))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84010))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l25:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 83689);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 83689))) = (OOC_CHAR8)'\000';
  
l26:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 84709))+32) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83561))+32);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l28:
  _failed_function(81287); return 0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace(OOC_SymbolTable__Declaration decl, OOC_CHAR8 followTypeNames) {
  register OOC_INT32 i0,i1;
  auto OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType);
    
    OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType) {
      register OOC_INT32 i0,i1;

      i0 = followTypeNames;
      i0 = !i0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)srcType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85158)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l31;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85346)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85397)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85491)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85591)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85701)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85805)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85799)))), 85799);
      goto l32;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85838))+44);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85750))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85769))+40);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l23:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85542))+32);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85558))+36);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l27:
      _assert(OOC_FALSE, 127, 85421);
      goto l32;
l29:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
l32:
      _failed_function(85061); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85914)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85958)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86018)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86064)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86106)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86149)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86233)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86319)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86404)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86398)))), 86398);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86367))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86379))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86282))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86294))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86196))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86208))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l27:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l29:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l31:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86049))+48);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85987))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86003))+40);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85943))+40);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(84795); return 0;
  ;
}

void OOC_OOC_SymbolTable_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region("standard", 9, (OOC_INT32)0, 8);
  _c1 = Object__NewLatin1Region("internal", 9, (OOC_INT32)0, 8);
  _c2 = Object__NewLatin1Region("foreign", 8, (OOC_INT32)0, 7);
  _c3 = Object__NewLatin1Region("interface", 10, (OOC_INT32)0, 9);
  _c4 = Object__NewLatin1Region("--invalid--", 12, (OOC_INT32)0, 11);
  _c5 = Object__NewLatin1Region("default", 8, (OOC_INT32)0, 7);
  _c6 = Object__NewLatin1Region("internal", 9, (OOC_INT32)0, 8);
  _c7 = Object__NewLatin1Char((OOC_CHAR8)'C');
  _c8 = Object__NewLatin1Region("Pascal", 7, (OOC_INT32)0, 6);
  _c9 = Object__NewLatin1Char((OOC_CHAR8)'C');
  _c10 = Object__NewLatin1Region("Pascal", 7, (OOC_INT32)0, 6);

  OOC_SymbolTable__predefIdToType = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)URI_Scheme_File__ToURI("/", 2);
  OOC_SymbolTable__emptyBaseURI = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  OOC_SymbolTable__importPosition = (OOC_SymbolTable__Position)i0;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, -2, -1, -1);
  return;
  ;
}

/* --- */
