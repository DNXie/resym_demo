#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_401537(const char *a1, const char *a2)
{
  const char *result; // rax
  const char *v3; // [rsp+10h] [rbp-10h]
  const char *v4; // [rsp+18h] [rbp-8h]

  v3 = &a1[strlen(a1)];
  v4 = &a2[strlen(a2)];
  while ( v3 > a1 && v4 > a2 )
  {
    --v3;
    result = (const char *)*(unsigned __int8 *)--v4;
    if ( *v3 != (_BYTE)result )
      return result;
  }
  result = v3;
  if ( v3 > a1 )
  {
    result = v3;
    *v3 = 0;
  }
  return result;
}
