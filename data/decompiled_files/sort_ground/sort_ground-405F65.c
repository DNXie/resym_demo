#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405F65(_BYTE *a1, unsigned __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v4; // [rsp+8h] [rbp-18h]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v4 = a1;
  v5 = (int)sub_410C28(a1, a2 - (_QWORD)a1, 0LL);
  while ( (unsigned __int64)v4 < a2 )
  {
    v2 = v4++;
    v5 += *v2 == 9;
  }
  return v5;
}
