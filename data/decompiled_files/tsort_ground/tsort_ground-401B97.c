#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401B97(__int64 a1, __int64 a2)
{
  int result; // eax
  _QWORD *v3; // [rsp+18h] [rbp-8h]

  result = strcmp(*(const char **)a1, *(const char **)a2);
  if ( result )
  {
    ++*(_QWORD *)(a2 + 32);
    v3 = (_QWORD *)sub_404F2C(16LL);
    *v3 = a2;
    v3[1] = *(_QWORD *)(a1 + 48);
    result = a1;
    *(_QWORD *)(a1 + 48) = v3;
  }
  return result;
}
