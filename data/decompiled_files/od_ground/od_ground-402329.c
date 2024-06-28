#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402329(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  int v7; // ecx
  int v8; // er8
  int v9; // er9
  _TBYTE v11; // [rsp+0h] [rbp-B0h]
  char v12; // [rsp+0h] [rbp-B0h]
  int v13; // [rsp+18h] [rbp-98h]
  int v15; // [rsp+44h] [rbp-6Ch]
  unsigned __int64 i; // [rsp+58h] [rbp-58h]
  char v18; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp-8h]

  v13 = a6;
  v19 = __readfsqword(0x28u);
  v15 = a6;
  for ( i = a1; a2 < i; --i )
  {
    v6 = a3;
    a3 += 16LL;
    *(_QWORD *)&v11 = *(_QWORD *)v6;
    HIWORD(v11) = *(_DWORD *)(v6 + 8);
    sub_4057FE(v11);
    sub_407DDE((unsigned int)"%*s", v15 - (i - 1) * v13 / a1 + a5, (unsigned int)&v18, v7, v8, v9, v12);
    v15 = (i - 1) * v13 / a1;
  }
  return __readfsqword(0x28u) ^ v19;
}
