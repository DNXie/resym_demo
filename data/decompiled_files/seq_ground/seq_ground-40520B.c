#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40520B()
{
  __int64 result; // rax
  char *v1; // [rsp+8h] [rbp-8h]

  v1 = nl_langinfo(0x10000);
  if ( *v1 )
    result = (unsigned __int8)*v1;
  else
    result = 46LL;
  return result;
}
