#include <XML/Writer.d>
#include <__oo2c.h>
#include <setjmp.h>

void XML_Writer__Init(XML_Writer__Writer w, IO__ByteChannel writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 writeBOM, OOC_INT32 indentLevel) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)writer;
  i2 = (OOC_INT32)codecFactory;
  i3 = writeBOM;
  XML_UnicodeBuffer__InitOutput((XML_UnicodeBuffer__Output)i0, 1u, (IO__ByteChannel)i1, (XML_UnicodeCodec__Factory)i2, i3);
  *(OOC_INT32*)((_check_pointer(i0, 2402))+60) = ((OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], 8));
  i1 = indentLevel;
  *(OOC_INT32*)((_check_pointer(i0, 2432))+36) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2467))+40) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 2487))+52) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 2521))+56) = (OOC_INT32)0;
  _copy_8((const void*)"\012",(void*)((_check_pointer(i0, 2544))+44),3);
  *(OOC_INT32*)((_check_pointer(i0, 2572))+48) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 2601))+64) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 2630))+68) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 2706))+69) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 2736))+70) = 0u;
  return;
  ;
}

XML_Writer__Writer XML_Writer__New(IO__ByteChannel writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 writeBOM, OOC_INT32 indentLevel) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__Writer.baseTypes[0]);
  i1 = (OOC_INT32)writer;
  i2 = (OOC_INT32)codecFactory;
  i3 = writeBOM;
  i4 = indentLevel;
  XML_Writer__Init((XML_Writer__Writer)i0, (IO__ByteChannel)i1, (XML_UnicodeCodec__Factory)i2, i3, i4);
  return (XML_Writer__Writer)i0;
  ;
}

void XML_Writer__WriterDesc_SetBaseURI(XML_Writer__Writer w, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 3421))+56) = i1;
  return;
  ;
}

void XML_Writer__WriterDesc_SetEmptyElementHTML(XML_Writer__Writer w, OOC_CHAR8 html) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = html;
  *(OOC_UINT8*)((_check_pointer(i0, 3534))+52) = i1;
  return;
  ;
}

void XML_Writer__WriterDesc_WriteTextDecl(XML_Writer__Writer w, const OOC_CHAR8 version__ref[], OOC_LEN version_0d, const OOC_CHAR8 standalone__ref[], OOC_LEN standalone_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(version,OOC_CHAR8 ,version_0d)
  OOC_ALLOCATE_VPAR(standalone,OOC_CHAR8 ,standalone_0d)
  OOC_CHAR8 encoding[256];

  OOC_INITIALIZE_VPAR(version__ref,version,OOC_CHAR8 ,version_0d)
  OOC_INITIALIZE_VPAR(standalone__ref,standalone,OOC_CHAR8 ,standalone_0d)
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3716)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<?xml", 6);
  i1 = (
  _cmp8((const void*)(OOC_INT32)version,(const void*)""))!=0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3770)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " version=\047", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3802)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)version, version_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3829)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3858)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " encoding=\047", 12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3889));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3889));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3903)))), XML_UnicodeCodec__FactoryDesc_GetEncodingName)),XML_UnicodeCodec__FactoryDesc_GetEncodingName)((XML_UnicodeCodec__Factory)i2, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3938)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3964)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  i1 = (
  _cmp8((const void*)(OOC_INT32)standalone,(const void*)""))!=0;
  if (!i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4017)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " standalone=\047", 14);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4052)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)standalone, standalone_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4082)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4111)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "?>", 3);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4149))+36);
  *(OOC_UINT8*)((_check_pointer(i0, 4133))+68) = (i1>=0);
  return;
  ;
}

void XML_Writer__WriterDesc_NewLine(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4261))+68);
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4311))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4284)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)((_check_pointer(i0, 4296))+44), 3, 0, i1);
  i = 1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4347))+40);
  i2 = 1<=i1;
  if (!i2) goto l11;
  i2=1;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4368)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  i2 = i2+1;
  i = i2;
  i3 = i2<=i1;
  if (i3) goto l5_loop;
l11:
  return;
  ;
}

void XML_Writer__WriterDesc_CloseStartTag(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4477))+69);
  _assert(i1, 127, 4468);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4502))+70);
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4676)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l8;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4532))+52);
  if (i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4602)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l7;
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4565)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l7:
  *(OOC_UINT8*)((_check_pointer(i0, 4636))+70) = 0u;
l8:
  *(OOC_UINT8*)((_check_pointer(i0, 4705))+69) = 0u;
  return;
  ;
}

void XML_Writer__WriterDesc_WriteI(XML_Writer__Writer w, const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4869))+69);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4890)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  i1 = s;
  i2 = e;
  i1 = i1!=i2;
  if (!i1) goto l51;
l6_loop:
  i1 = s;
  last = i1;
  i3 = i1!=i2;
  if (i3) goto l9;
  i3=0u;
  goto l11;
l9:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 4987))*2);
  i3 = i3!=38u;
  
l11:
  if (i3) goto l13;
  i3=0u;
  goto l15;
l13:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5004))*2);
  i3 = i3!=60u;
  
l15:
  if (i3) goto l17;
  i3=0u;
  goto l19;
l17:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5021))*2);
  i3 = i3!=62u;
  
l19:
  if (!i3) goto l37;
l20_loop:
  i3 = s;
  i3 = i3+1;
  s = i3;
  i4 = i3!=i2;
  if (i4) goto l23;
  i4=0u;
  goto l25;
l23:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4987))*2);
  i4 = i4!=38u;
  
l25:
  if (i4) goto l27;
  i4=0u;
  goto l29;
l27:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5004))*2);
  i4 = i4!=60u;
  
l29:
  if (i4) goto l31;
  i3=0u;
  goto l33;
l31:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5021))*2);
  i3 = i3!=62u;
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5069)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5134))*2);
  switch (i1) {
  case 38u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5157)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case 60u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5192)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case 62u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5226)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5126);
    goto l45;
  }
l45:
  s = (i3+1);
l46:
  i1 = s;
  i1 = i1!=i2;
  if (i1) goto l6_loop;
l51:
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLatin1I(XML_Writer__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5466))+69);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5487)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  i1 = s;
  i2 = e;
  i1 = i1!=i2;
  if (!i1) goto l51;
l6_loop:
  i1 = s;
  last = i1;
  i3 = i1!=i2;
  if (i3) goto l9;
  i3=0u;
  goto l11;
l9:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5584)));
  i3 = i3!=38u;
  
l11:
  if (i3) goto l13;
  i3=0u;
  goto l15;
l13:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5601)));
  i3 = i3!=60u;
  
l15:
  if (i3) goto l17;
  i3=0u;
  goto l19;
l17:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5618)));
  i3 = i3!=62u;
  
l19:
  if (!i3) goto l37;
l20_loop:
  i3 = s;
  i3 = i3+1;
  s = i3;
  i4 = i3!=i2;
  if (i4) goto l23;
  i4=0u;
  goto l25;
l23:
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5584)));
  i4 = i4!=38u;
  
l25:
  if (i4) goto l27;
  i4=0u;
  goto l29;
l27:
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5601)));
  i4 = i4!=60u;
  
l29:
  if (i4) goto l31;
  i3=0u;
  goto l33;
l31:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5618)));
  i3 = i3!=62u;
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5666)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5730)));
  switch (i1) {
  case 38u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5753)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case 60u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5788)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case 62u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5822)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5722);
    goto l45;
  }
l45:
  s = (i3+1);
l46:
  i1 = s;
  i1 = i1!=i2;
  if (i1) goto l6_loop;
l51:
  return;
  ;
}

void XML_Writer__WriterDesc_Write(XML_Writer__Writer w, const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5981)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLatin1(XML_Writer__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6118)))), XML_Writer__WriterDesc_WriteLatin1I)),XML_Writer__WriterDesc_WriteLatin1I)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteURI(XML_Writer__Writer w, URI__URI uri, OOC_CHAR8 absolute) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[1024];

  i0 = absolute;
  i0 = !i0;
  if (!i0) goto l4;
  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6349))+56);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6332)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i0, (URI__HierarchicalURI)i1);
  uri = (URI__URI)i0;
l4:
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6376)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6400)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLInt(XML_Writer__Writer w, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6568)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 32);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteRealFix(XML_Writer__Writer w, OOC_REAL32 real, OOC_INT32 k) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFixed(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6761)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

static XML_Writer__String XML_Writer__GetString(const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  XML_Writer__String s;

  i0 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__String.baseTypes[0], (i0+1));
  s = (XML_Writer__String)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6947)), 0);
  _copy_16((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 6947)),i1);
  return (XML_Writer__String)i0;
  ;
}

void XML_Writer__WriterDesc_StartTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  XML_Writer__Elements _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7159))+69);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7180)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7206)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7222)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7243)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7301))+60);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7275))+64);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7315)), 0);
  i1 = i2==i1;
  if (!i1) goto l14;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7341))+64);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], (i1*2));
  _new = (XML_Writer__Elements)i1;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7384))+64);
  i3 = 0<i2;
  if (!i3) goto l13;
  i3=0;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7426))+60);
  i4 = _check_pointer(i4, 7440);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 7418);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  _copy_block((i4+(_check_index(i3, i5, OOC_UINT32, 7440))*8),(i6+(_check_index(i3, i7, OOC_UINT32, 7418))*8),8);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l8_loop;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 7462))+60) = i1;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7498))+60);
  i1 = _check_pointer(i1, 7512);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7514))+64);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)XML_Writer__GetString((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7512))*8) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7565))+60);
  i1 = _check_pointer(i1, 7579);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7581))+64);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = mixedContent;
  *(OOC_UINT8*)((i1+(_check_index(i2, i3, OOC_UINT32, 7579))*8)+4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7641))+64);
  *(OOC_INT32*)((_check_pointer(i0, 7641))+64) = (i1+1);
  *(OOC_UINT8*)((_check_pointer(i0, 7666))+69) = 1u;
  i1 = _check_pointer(i0, 7700);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7716))+36);
  i2 = i2>=0;
  if (i2) goto l17;
  i2=0u;
  goto l18;
l17:
  i2 = !i4;
  
l18:
  *(OOC_UINT8*)(i1+68) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7761))+68);
  if (!i1) goto l21;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7789))+40);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7800))+36);
  *(OOC_INT32*)((_check_pointer(i0, 7789))+40) = (i1+i2);
l21:
  return;
  ;
}

void XML_Writer__WriterDesc_StartTagLatin1(XML_Writer__Writer w, const OOC_CHAR8 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 name16[1024];

  _copy_8to16((const void*)(OOC_INT32)name,(void*)(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  i1 = mixedContent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8048)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8185))+69);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8206)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8232)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8248)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8269)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  *(OOC_UINT8*)((_check_pointer(i0, 8415))+69) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 8444))+70) = 1u;
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTagLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_CHAR16 name16[1024];

  _copy_16((const void*)(OOC_INT32)name,(void*)(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8630)))), XML_Writer__WriterDesc_EmptyTag)),XML_Writer__WriterDesc_EmptyTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrString(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR16 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8808))+69);
  _assert(i1, 127, 8799);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8830)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8851)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8874)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
  s = 0;
  i1 = LongStrings__Length((void*)(OOC_INT32)value, value_0d);
  e = i1;
  i2 = 0!=i1;
  if (!i2) goto l60;
  i3=i2;i2=0;
l3_loop:
  last = i2;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9007))*2);
  i3 = i3!=39u;
  
l8:
  if (i3) goto l10;
  i3=0u;
  goto l12;
l10:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9038))*2);
  i3 = i3!=38u;
  
l12:
  if (i3) goto l14;
  i3=0u;
  goto l16;
l14:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9057))*2);
  i3 = i3!=60u;
  
l16:
  if (i3) goto l18;
  i3=0u;
  goto l20;
l18:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9076))*2);
  i3 = i3!=62u;
  
l20:
  if (i3) goto l22;
  i3=i2;
  goto l44;
l22:
  i3=i2;
l23_loop:
  i3 = i3+1;
  s = i3;
  i4 = i3!=i1;
  if (i4) goto l26;
  i4=0u;
  goto l28;
l26:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9007))*2);
  i4 = i4!=39u;
  
l28:
  if (i4) goto l30;
  i4=0u;
  goto l32;
l30:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9038))*2);
  i4 = i4!=38u;
  
l32:
  if (i4) goto l34;
  i4=0u;
  goto l36;
l34:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9057))*2);
  i4 = i4!=60u;
  
l36:
  if (i4) goto l38;
  i4=0u;
  goto l40;
l38:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9076))*2);
  i4 = i4!=62u;
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9124)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9193))*2);
  switch (i2) {
  case 38u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9216)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case 60u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9251)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case 62u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9285)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case 39u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9319)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 9183);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9397)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrStringLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR8 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9627))+69);
  _assert(i1, 127, 9618);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9649)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9670)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9693)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
  s = 0;
  i1 = Strings__Length((void*)(OOC_INT32)value, value_0d);
  e = i1;
  i2 = 0!=i1;
  if (!i2) goto l60;
  i3=i2;i2=0;
l3_loop:
  last = i2;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9822)));
  i3 = i3!=39u;
  
l8:
  if (i3) goto l10;
  i3=0u;
  goto l12;
l10:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9853)));
  i3 = i3!=38u;
  
l12:
  if (i3) goto l14;
  i3=0u;
  goto l16;
l14:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9872)));
  i3 = i3!=60u;
  
l16:
  if (i3) goto l18;
  i3=0u;
  goto l20;
l18:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9891)));
  i3 = i3!=62u;
  
l20:
  if (i3) goto l22;
  i3=i2;
  goto l44;
l22:
  i3=i2;
l23_loop:
  i3 = i3+1;
  s = i3;
  i4 = i3!=i1;
  if (i4) goto l26;
  i4=0u;
  goto l28;
l26:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9822)));
  i4 = i4!=39u;
  
l28:
  if (i4) goto l30;
  i4=0u;
  goto l32;
l30:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9853)));
  i4 = i4!=38u;
  
l32:
  if (i4) goto l34;
  i4=0u;
  goto l36;
l34:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9872)));
  i4 = i4!=60u;
  
l36:
  if (i4) goto l38;
  i4=0u;
  goto l40;
l38:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9891)));
  i4 = i4!=62u;
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9939)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 10007)));
  switch (i2) {
  case 38u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10030)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case 60u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10065)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case 62u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10099)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case 39u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10133)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 9997);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10211)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrObject(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, Object__String value) {
  register OOC_INT32 i0,i1,i2;
  Object__String s;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)Object__StringDesc_ToString((Object__String)i0);
  s = (Object__String)i0;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10524)))), &_td_Object__String8Desc, 10524)));
  chars = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)w;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10582)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10553)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, name_0d, (void*)(_check_pointer(i0, 10582)), i2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrInt(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10764)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)val, 32);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrBool(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 value) {
  register OOC_INT32 i0;

  i0 = value;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10973)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "no", 3);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10924)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "yes", 4);
l4:
  return;
  ;
}

void XML_Writer__WriterDesc_AttrURI(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, URI__URI uri, OOC_CHAR8 absolute) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[1024];

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11214))+69);
  _assert(i1, 127, 11205);
  i1 = absolute;
  i1 = !i1;
  if (!i1) goto l4;
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11286))+56);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11269)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i1, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i1;
l4:
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11313)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i1, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11337)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_EndTag(volatile XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11433))+64);
  i1 = i1<=0;
  if (!i1) goto l10;
  {
    if (!setjmp(_target0)) goto l8;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l7;
    Exception__ActivateContext();
l7:
    Exception__Clear();
    goto l9;
l8:
    Exception__PushContext(&_context0, &_target0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11481)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
    Exception__PopContext(1);
l9:;
  }
  _assert(0u, 127, 11529);
l10:
  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11566))+68);
  if (!i1) goto l13;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11594))+40);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11605))+36);
  *(OOC_INT32*)((_check_pointer(i0, 11594))+40) = (i1-i2);
l13:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11639))+64);
  *(OOC_INT32*)((_check_pointer(i0, 11639))+64) = (i1-1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11672))+70);
  if (i1) goto l24;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11905))+69);
  if (i1) goto l18;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12174)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12192)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12228))+60);
  i1 = _check_pointer(i1, 12242);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12244))+64);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 12242))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12228))+60);
  i2 = _check_pointer(i2, 12242);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12244))+64);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 12242))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12268)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12216)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 12268)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12279)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l25;
l18:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11978))+52);
  if (i1) goto l21;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12048)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l22;
l21:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12011)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l22:
  *(OOC_UINT8*)((_check_pointer(i0, 12082))+69) = 0u;
  goto l25;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11750)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11774)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11792)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11828))+60);
  i1 = _check_pointer(i1, 11842);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11844))+64);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 11842))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11828))+60);
  i2 = _check_pointer(i2, 11842);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11844))+64);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 11842))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11868)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11816)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 11868)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11879)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
l25:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12329))+36);
  *(OOC_UINT8*)((_check_pointer(i0, 12313))+68) = (i1>=0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12359))+64);
  i1 = i1>0;
  if (!i1) goto l32;
  i1 = _check_pointer(i0, 12394);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 12409))+68);
  if (i2) goto l30;
  i0=0u;
  goto l31;
l30:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12446))+60);
  i2 = _check_pointer(i2, 12460);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12462))+64);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)((i2+(_check_index((i0-1), i3, OOC_UINT32, 12460))*8)+4);
  i0 = !i0;
  
l31:
  *(OOC_UINT8*)(i1+68) = i0;
l32:
  return;
  ;
}

void XML_Writer__WriterDesc_EndOfText(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 12648))+69);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12669)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12695)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12711)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12733))+64);
  _assert((i0==0), 127, 12724);
  return;
  ;
}

void OOC_XML_Writer_init(void) {

  return;
  ;
}

/* --- */
