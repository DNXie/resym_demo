#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408911(const void *a1, size_t a2)
{
  __int64 result; // rax
  _BYTE *v3; // [rsp+18h] [rbp-8h]

  v3 = memchr(a1, 0, a2);
  if ( v3 )
    result = v3 - (_BYTE *)a1 + 1;
  else
    result = a2;
  return result;
}
