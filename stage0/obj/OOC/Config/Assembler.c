#include <OOC/Config/Assembler.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Config_Assembler__AssembleFileCmd(URI__URI in, URI__URI out, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0;
  OOC_CHAR8 str[2048];

  _copy_8((const void*)"as ",(void*)(OOC_INT32)cmd,cmd_0d);
  i0 = (OOC_INT32)in;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1106)))), &_td_URI_Scheme_File__URIDesc, 1106)), (void*)(OOC_INT32)str, 2048);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" -o ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)out;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1205)))), &_td_URI_Scheme_File__URIDesc, 1205)), (void*)(OOC_INT32)str, 2048);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_OOC_Config_Assembler_init(void) {

  return;
  ;
}

/* --- */
