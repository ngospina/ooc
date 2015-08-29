#include <IO.d>
#include <__oo2c.h>
#include <setjmp.h>

void IO__ErrorDesc_INIT(IO__Error e, Object__String msg) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)msg;
  Exception__ExceptionDesc_INIT((Exception__Exception)i0, (Object__String)i1);
  return;
  ;
}

IO__FormatError IO__NewFormatError(Object__String msg) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO__FormatError.baseTypes[0]);
  i1 = (OOC_INT32)msg;
  IO__ErrorDesc_INIT((IO__Error)i0, (Object__String)i1);
  return (IO__FormatError)i0;
  ;
}

void IO__RaiseFormatError(Object__String msg) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)msg;
  i0 = (OOC_INT32)IO__NewFormatError((Object__String)i0);
  Exception__Raise((void*)i0);
  
  ;
}

void IO__RaiseNotImplemented(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO__NotImplemented.baseTypes[0]);
  IO__ErrorDesc_INIT((IO__Error)i0, (Object__String)(OOC_INT32)0);
  Exception__Raise((void*)i0);
  
  ;
}

void IO__InitSelectionKey(IO__SelectionKey k, OOC_INT32 fd, IO__Selector selector, IO__Channel channel, OOC_UINT32 ops, Object__Object attachment) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = fd;
  *(OOC_INT32*)(_check_pointer(i0, 8309)) = i1;
  i1 = ops;
  *(OOC_UINT32*)((_check_pointer(i0, 8325))+4) = i1;
  i1 = (OOC_INT32)attachment;
  *(OOC_INT32*)((_check_pointer(i0, 8351))+8) = i1;
  i1 = (OOC_INT32)selector;
  *(OOC_INT32*)((_check_pointer(i0, 8383))+12) = i1;
  i1 = (OOC_INT32)channel;
  *(OOC_INT32*)((_check_pointer(i0, 8411))+16) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 8437))+24) = 0u;
  return;
  ;
}

void IO__SelectionKeyDesc_Attach(IO__SelectionKey k, Object__Object obj) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 8600))+8) = i1;
  return;
  ;
}

void IO__SelectionKeyDesc_Cancel(IO__SelectionKey k) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8949))+24);
  i1 = !i1;
  if (!i1) goto l4;
  *(OOC_UINT8*)((_check_pointer(i0, 8969))+24) = 1u;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8993))+12);
  *(OOC_UINT8*)((_check_pointer(i0, 9002))+4) = 1u;
l4:
  return;
  ;
}

void IO__SelectionKeyDesc_SetInterestOps(IO__SelectionKey k, OOC_UINT32 ops) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = ops;
  *(OOC_UINT32*)((_check_pointer(i0, 9162))+4) = i1;
  return;
  ;
}

void IO__InitSelector(IO__Selector s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  *(OOC_INT32*)(_check_pointer(i0, 9258)) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 9277))+4) = 0u;
  return;
  ;
}

void IO__SelectorDesc_Close(IO__Selector s) {
  register OOC_INT32 i0,i1,i2;
  IO__SelectionKey k;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9494));
  k = (IO__SelectionKey)i1;
  i2 = i1!=0;
  if (!i2) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9531)))), IO__SelectionKeyDesc_Cancel)),IO__SelectionKeyDesc_Cancel)((IO__SelectionKey)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9554))+20);
  k = (IO__SelectionKey)i1;
  i2 = i1!=0;
  if (i2) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 9578)) = 0;
  return;
  ;
}

OOC_INT32 IO__SelectorDesc_Select(IO__Selector s, OOC_INT32 sec, OOC_INT32 usec) {

  _failed_function(9641); return 0;
  ;
}

IO__SelectionKey IO__SelectorDesc_NextKey(IO__Selector s) {

  _failed_function(10249); return 0;
  ;
}

IO__SelectionKey IO__SelectorDesc_AddSelectionKey(IO__Selector s, OOC_INT32 fd, IO__Channel channel, OOC_UINT32 ops, Object__Object attachment) {

  _failed_function(10539); return 0;
  ;
}

void IO__SelectorDesc_RemoveSelectionKey(IO__Selector s, IO__SelectionKey k) {

  return;
  ;
}

void IO__SelectorDesc_RemoveCanceled(IO__Selector s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  IO__SelectionKey prev;
  IO__SelectionKey k;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11518))+4);
  if (!i1) goto l19;
  prev = (IO__SelectionKey)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11562));
  k = (IO__SelectionKey)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l19;
  i2=(OOC_INT32)0;i3=1u;
l5_loop:
  i4 = *(OOC_UINT8*)((_check_pointer(i1, 11606))+24);
  if (i4) goto l8;
  prev = (IO__SelectionKey)i1;
  i2 = i1==(OOC_INT32)0;
  i3=i2;i2=i1;
  goto l13;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11630)))), IO__SelectorDesc_RemoveSelectionKey)),IO__SelectorDesc_RemoveSelectionKey)((IO__Selector)i0, (IO__SelectionKey)i1);
  if (i3) goto l11;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11762))+20);
  *(OOC_INT32*)((_check_pointer(i2, 11749))+20) = i4;
  goto l13;
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11708))+20);
  *(OOC_INT32*)(_check_pointer(i0, 11698)) = i4;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11848))+20);
  k = (IO__SelectionKey)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l5_loop;
l19:
  return;
  ;
}

void IO__InitChannel(IO__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  *(OOC_UINT32*)(_check_pointer(i0, 11953)) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 11980))+4) = ((OOC_INT32)RT0__NewObject(_td_IO__SelectionKeyList.baseTypes[0], 2));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11997))+4);
  i0 = _check_pointer(i0, 12002);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 12002))*4) = 0;
  return;
  ;
}

OOC_INT32 IO__ChannelDesc_FileDescriptor(IO__Channel ch) {

  _failed_function(12069); return 0;
  ;
}

IO__SelectionKey IO__ChannelDesc_RegisterWithSelector(IO__Channel ch, IO__Selector sel, OOC_UINT32 ops, Object__Object attachment) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 i;
  IO__SelectionKeyList n;
  OOC_INT32 j;
  IO__SelectionKey k;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12938))+4);
  i1 = _check_pointer(i1, 12943);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 12943))*4);
  i2 = (OOC_INT32)sel;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0;
  goto l12;
l3:
  i1=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12969))+4);
  i3 = _check_pointer(i3, 12974);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 12974))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12977))+12);
  i3 = i3==i2;
  if (!i3) goto l7;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13052))+4);
  i3 = _check_pointer(i3, 13057);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 13057))*4);
  return (IO__SelectionKey)i3;
l7:
  i1 = i1+1;
  i = i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12938))+4);
  i3 = _check_pointer(i3, 12943);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 12943))*4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l4_loop;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13116))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13121)), 0);
  i4 = i1+1;
  i3 = i4==i3;
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13149))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13154)), 0);
  i3 = (OOC_INT32)RT0__NewObject(_td_IO__SelectionKeyList.baseTypes[0], (i3*2));
  n = (IO__SelectionKeyList)i3;
  j = 0;
  i5 = 0<=i1;
  if (!i5) goto l22;
  i5=0;
l17_loop:
  i6 = _check_pointer(i3, 13195);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13204))+4);
  i8 = _check_pointer(i8, 13209);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i1, i9, OOC_UINT32, 13209))*4);
  *(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 13195))*4) = i8;
  i5 = i5+1;
  j = i5;
  i6 = i5<=i1;
  if (i6) goto l17_loop;
l22:
  *(OOC_INT32*)((_check_pointer(i0, 13233))+4) = i3;
l23:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13260))+4);
  i3 = _check_pointer(i3, 13265);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i4, i5, OOC_UINT32, 13265))*4) = (OOC_INT32)0;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13310)))), IO__ChannelDesc_FileDescriptor)),IO__ChannelDesc_FileDescriptor)((IO__Channel)i0);
  i4 = ops;
  i5 = (OOC_INT32)attachment;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13291)))), IO__SelectorDesc_AddSelectionKey)),IO__SelectorDesc_AddSelectionKey)((IO__Selector)i2, i3, (IO__Channel)i0, i4, (Object__Object)i5);
  k = (IO__SelectionKey)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13357))+4);
  i0 = _check_pointer(i0, 13362);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+(_check_index(i1, i3, OOC_UINT32, 13362))*4) = i2;
  return (IO__SelectionKey)i2;
  ;
}

IO__SelectionKey IO__ChannelDesc_KeyForSelector(IO__Channel ch, IO__Selector sel) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13688))+4);
  i1 = _check_pointer(i1, 13693);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 13693))*4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13709))+4);
  i1 = _check_pointer(i1, 13714);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 13714))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13717))+12);
  i2 = (OOC_INT32)sel;
  i1 = i1!=i2;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1 = (OOC_INT32)sel;
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13688))+4);
  i3 = _check_pointer(i3, 13693);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 13693))*4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13709))+4);
  i3 = _check_pointer(i3, 13714);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 13714))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13717))+12);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13773))+4);
  i0 = _check_pointer(i0, 13778);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 13778))*4);
  return (IO__SelectionKey)i0;
  ;
}

void IO__ChannelDesc_SetBlocking(IO__Channel ch, OOC_CHAR8 block) {

  return;
  ;
}

void IO__ChannelDesc_Close(IO__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14429))+4);
  i1 = _check_pointer(i1, 14434);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 14434))*4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14456))+4);
  i2 = _check_pointer(i2, 14461);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14461))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14456))+4);
  i3 = _check_pointer(i3, 14461);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 14461))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14464)))), IO__SelectionKeyDesc_Cancel)),IO__SelectionKeyDesc_Cancel)((IO__SelectionKey)i3);
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14429))+4);
  i2 = _check_pointer(i2, 14434);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14434))*4);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

void IO__ChannelDesc_CloseAndRegister(IO__Channel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14873)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i0);
  return;
  ;
}

void IO__InitByteChannel(IO__ByteChannel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  IO__InitChannel((IO__Channel)i0);
  return;
  ;
}

void IO__ChannelDesc_SetPos(IO__Channel ch, OOC_INT32 pos) {

  IO__RaiseNotImplemented();
  return;
  ;
}

OOC_INT32 IO__ByteChannelDesc_Read(IO__ByteChannel ch, OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {

  _failed_function(15208); return 0;
  ;
}

OOC_INT32 IO__ByteChannelDesc_Write(IO__ByteChannel ch, const OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {

  _failed_function(16530); return 0;
  ;
}

void IO__ByteChannelDesc_Flush(IO__ByteChannel ch) {

  return;
  ;
}

OOC_INT32 IO__ByteChannelDesc_TransferTo(IO__ByteChannel ch, OOC_INT32 length, IO__ByteChannel target) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 rd;
  OOC_CHAR8 buffer[8192];
  OOC_INT32 j;
  OOC_INT32 wd;

  i = 0;
  i0 = length;
  i1 = 0!=i0;
  if (i1) goto l3;
  i0=0;
  goto l25;
l3:
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)target;
  i3=0;
l4_loop:
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18026)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i1, (void*)(OOC_INT32)buffer, 8192, 0, 8192);
  rd = i4;
  i5 = i4==(-1);
  if (i5) goto l19;
  j = 0;
  i5 = 0!=i4;
  if (!i5) goto l18;
  i5=0;
l9_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18212)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i2, (void*)(OOC_INT32)buffer, 8192, i5, (i4-i5));
  wd = i6;
  i7 = i6==(-1);
  if (i7) goto l12;
  i5 = i5+i6;
  j = i5;
  
  goto l13;
l12:
  return (i3+i5);
  
l13:
  i6 = i5!=i4;
  if (i6) goto l9_loop;
l18:
  i3 = i3+i4;
  i = i3;
  
  goto l20;
l19:
  return i3;
  
l20:
  i4 = i3!=i0;
  if (i4) goto l4_loop;
l24:
  i0=i3;
l25:
  return i0;
  ;
}

void OOC_IO_init(void) {

  return;
  ;
}

/* --- */
