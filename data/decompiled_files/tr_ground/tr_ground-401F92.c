#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F92(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rax
  unsigned __int8 v4; // [rsp+1Fh] [rbp-31h]
  char *dest; // [rsp+20h] [rbp-30h]
  unsigned __int64 i; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  char s[8]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-8h]

  v9 = __readfsqword(0x28u);
  v7 = sub_406C3F(a2 + 1, 4LL);
  dest = (char *)v7;
  for ( i = 0LL; i < a2; ++i )
  {
    v4 = *(_BYTE *)(a1 + i);
    if ( v4 == 10 )
    {
      v2 = stpcpy(dest, "\\n");
      goto LABEL_24;
    }
    if ( v4 > 0xAu )
    {
      if ( v4 == 12 )
      {
        v2 = stpcpy(dest, "\\f");
        goto LABEL_24;
      }
      if ( v4 < 0xCu )
      {
        v2 = stpcpy(dest, "\\v");
        goto LABEL_24;
      }
      if ( v4 == 13 )
      {
        v2 = stpcpy(dest, "\\r");
        goto LABEL_24;
      }
      if ( v4 == 92 )
      {
        v2 = stpcpy(dest, "\\");
        goto LABEL_24;
      }
    }
    else
    {
      if ( v4 == 8 )
      {
        v2 = stpcpy(dest, "\\b");
        goto LABEL_24;
      }
      if ( v4 > 8u )
      {
        v2 = stpcpy(dest, "\\t");
        goto LABEL_24;
      }
      if ( v4 == 7 )
      {
        v2 = stpcpy(dest, "\\a");
        goto LABEL_24;
      }
    }
    if ( ((*__ctype_b_loc())[v4] & 0x4000) != 0 )
    {
      s[0] = v4;
      s[1] = 0;
    }
    else
    {
      sprintf(s, "\\%03o", v4);
    }
    v2 = stpcpy(dest, s);
LABEL_24:
    dest = v2;
  }
  return v7;
}
