#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall compar(const void *a1, const void *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+1Ch] [rbp-4h]

  v3 = sub_40260E(a1, a2);
  if ( v3 )
    result = v3;
  else
    result = *(_QWORD *)a1 - *(_QWORD *)a2;
  return result;
}
