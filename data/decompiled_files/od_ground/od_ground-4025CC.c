#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4025CC(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4, int a5, int a6)
{
  unsigned __int8 *v6; // rax
  int v7; // er8
  int v8; // er9
  char v10; // [rsp+0h] [rbp-80h]
  int v11; // [rsp+8h] [rbp-78h]
  unsigned __int8 v13; // [rsp+3Fh] [rbp-41h]
  int v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+44h] [rbp-3Ch]
  unsigned __int64 i; // [rsp+50h] [rbp-30h]
  char s[8]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-18h]

  v11 = a6;
  v19 = __readfsqword(0x28u);
  v14 = a6;
  for ( i = a1; a2 < i; --i )
  {
    v15 = (i - 1) * v11 / a1;
    v6 = a3++;
    v13 = *v6;
    if ( *v6 == 9 )
    {
      sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\t", v14 - v15 + a5, a5, a6, v10);
      goto LABEL_25;
    }
    if ( v13 > 9u )
    {
      if ( v13 == 11 )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\v", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
      if ( v13 < 0xBu )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\n", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
      if ( v13 == 12 )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\f", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
      if ( v13 == 13 )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\r", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v13 == 7 )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\a", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
      if ( v13 > 7u )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\b", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
      if ( !v13 )
      {
        sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)"\\0", v14 - v15 + a5, a5, a6, v10);
        goto LABEL_25;
      }
    }
    if ( ((*__ctype_b_loc())[v13] & 0x4000) != 0 )
      sprintf(s, "%c", v13);
    else
      sprintf(s, "%03o", v13);
    sub_407DDE((unsigned int)"%*s", v14 - v15 + a5, (unsigned int)s, v14 - v15 + a5, v7, v8, v10);
LABEL_25:
    v14 = (i - 1) * v11 / a1;
  }
  return __readfsqword(0x28u) ^ v19;
}
