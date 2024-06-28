#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402177(__int64 a1)
{
  __int64 result; // rax
  _QWORD *ptr; // [rsp+10h] [rbp-10h]
  _QWORD *v3; // [rsp+18h] [rbp-8h]

  for ( ptr = *(_QWORD **)(a1 + 48); ptr; ptr = v3 )
  {
    v3 = (_QWORD *)ptr[163];
    free(ptr);
  }
  free(*(void **)(a1 + 40));
  result = a1;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
