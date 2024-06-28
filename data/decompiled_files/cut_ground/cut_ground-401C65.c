#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall compar(const void *a1, const void *a2)
{
  __int64 result; // rax
  int v3; // [rsp+18h] [rbp-8h]
  int v4; // [rsp+1Ch] [rbp-4h]

  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a2;
  if ( v3 < v4 )
    result = 0xFFFFFFFFLL;
  else
    result = v3 > v4;
  return result;
}
