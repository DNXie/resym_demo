#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40221B(unsigned __int64 a1, unsigned __int64 a2, double *a3, __int64 a4, int a5, int a6)
{
  double *v6; // rax
  int v7; // ecx
  int v8; // er8
  int v9; // er9
  double v11; // [rsp+0h] [rbp-90h]
  int v12; // [rsp+8h] [rbp-88h]
  int v14; // [rsp+3Ch] [rbp-54h]
  unsigned __int64 i; // [rsp+50h] [rbp-40h]
  char v17[40]; // [rsp+60h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-8h]

  v12 = a6;
  v18 = __readfsqword(0x28u);
  v14 = a6;
  for ( i = a1; a2 < i; --i )
  {
    v6 = a3++;
    v11 = *v6;
    sub_405451(v17, 40LL, 0LL, 0LL, *v6);
    sub_407DDE((unsigned int)"%*s", v14 - (i - 1) * v12 / a1 + a5, (unsigned int)v17, v7, v8, v9, SLOBYTE(v11));
    v14 = (i - 1) * v12 / a1;
  }
  return __readfsqword(0x28u) ^ v18;
}
