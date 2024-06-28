#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40184F(__int64 a1, unsigned __int8 *a2)
{
  char *v2; // rax
  const unsigned __int16 *v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  unsigned __int8 *s; // [rsp+0h] [rbp-60h]
  char *v8; // [rsp+10h] [rbp-50h]
  char *v9; // [rsp+18h] [rbp-48h]
  size_t v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-38h]
  long double v12; // [rsp+30h] [rbp-30h] BYREF
  size_t v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]

  s = a2;
  if ( (unsigned __int8)sub_404D1E(a2, 0LL, &v12, sub_4026F3) != 1 )
  {
    v2 = gettext("invalid floating point argument: %s");
    error(0, 0, v2, a2);
    sub_401736(1);
  }
  while ( 1 )
  {
    v3 = *__ctype_b_loc();
    if ( (v3[(unsigned __int8)sub_40161D(*s)] & 0x2000) == 0 && *s != 43 )
      break;
    ++s;
  }
  v13 = strlen((const char *)s);
  LODWORD(v14) = 0x7FFFFFFF;
  if ( !s[strcspn((const char *)s, "xX")] && 0.0 == v12 * 0.0 )
  {
    v9 = strchr((const char *)s, 46);
    if ( v9 )
    {
      v10 = strcspn(v9 + 1, "eE");
      if ( v10 <= 0x7FFFFFFF )
        LODWORD(v14) = v10;
      if ( v10 )
      {
        LODWORD(v4) = v9 == (char *)s || (unsigned int)(*(v9 - 1) - 48) > 9;
        v4 = (int)v4;
      }
      else
      {
        v4 = -1LL;
      }
      v13 += v4;
    }
    else
    {
      LODWORD(v14) = 0;
    }
    v8 = strchr((const char *)s, 101);
    if ( !v8 )
      v8 = strchr((const char *)s, 69);
    if ( v8 )
    {
      v11 = strtol(v8 + 1, 0LL, 10);
      if ( v11 >= 0 )
        v5 = 0;
      else
        v5 = -(int)v11;
      LODWORD(v14) = v14 + v5;
    }
  }
  *(long double *)a1 = v12;
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 24) = v14;
  return a1;
}
