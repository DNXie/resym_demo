#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40562C(char *a1, size_t a2, char a3, unsigned int a4, float a5)
{
  float v5; // eax
  _BYTE *v6; // rax
  char *v7; // rax
  char v8; // dl
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-70h]
  int i; // [rsp+2Ch] [rbp-44h]
  float v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]
  _BYTE *v16; // [rsp+38h] [rbp-38h]
  _BYTE *v17; // [rsp+38h] [rbp-38h]
  _BYTE *v18; // [rsp+38h] [rbp-38h]
  char format; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v20[23]; // [rsp+41h] [rbp-2Fh] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-18h]

  *((float *)&v11 + 1) = a5;
  v21 = __readfsqword(0x28u);
  if ( a5 >= 0.0 )
  {
    v5 = a5;
  }
  else
  {
    *(float *)&v11 = -a5;
    v5 = -a5;
  }
  v14 = v5;
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
  if ( v14 >= 1.1754944e-38 )
    v9 = 6;
  else
    v9 = 1;
  for ( i = v9; ; ++i )
  {
    v15 = snprintf(a1, a2, &format, a4, (unsigned int)i, *((float *)&v11 + 1), v11);
    if ( v15 < 0 || i > 8 || v15 < a2 && strtof(a1, 0LL) == *((float *)&v11 + 1) )
      break;
  }
  return (unsigned int)v15;
}
