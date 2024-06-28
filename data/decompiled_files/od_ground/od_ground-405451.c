#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405451(char *a1, size_t a2, char a3, unsigned int a4, double a5)
{
  double v5; // rax
  _BYTE *v6; // rax
  char *v7; // rax
  char v8; // dl
  int v9; // eax
  int i; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+3Ch] [rbp-44h]
  double v15; // [rsp+40h] [rbp-40h]
  _BYTE *v16; // [rsp+48h] [rbp-38h]
  _BYTE *v17; // [rsp+48h] [rbp-38h]
  _BYTE *v18; // [rsp+48h] [rbp-38h]
  char format; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v20[23]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-18h]

  v21 = __readfsqword(0x28u);
  if ( a5 >= 0.0 )
    v5 = a5;
  else
    v5 = -a5;
  v15 = v5;
  format = 37;
  v20[0] = 45;
  v16 = &v20[(a3 & 1) != 0];
  *v16 = 43;
  v17 = &v16[(a3 & 2) != 0];
  *v17 = 32;
  v18 = &v17[(a3 & 4) != 0];
  *v18 = 48;
  v6 = &v18[(a3 & 8) != 0];
  *v6++ = 42;
  *v6++ = 46;
  *v6 = 42;
  v6[1] = 76;
  v7 = v6 + 1;
  if ( (a3 & 0x10) != 0 )
    v8 = 71;
  else
    v8 = 103;
  *v7 = v8;
  v7[1] = 0;
  if ( v15 >= 2.225073858507201e-308 )
    v9 = 15;
  else
    v9 = 1;
  for ( i = v9; ; ++i )
  {
    v14 = snprintf(a1, a2, &format, a4, (unsigned int)i, a5);
    if ( v14 < 0 || i > 16 || v14 < a2 && strtod(a1, 0LL) == a5 )
      break;
  }
  return (unsigned int)v14;
}
