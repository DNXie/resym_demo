#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401B24(char *a1, const char *a2)
{
  const unsigned __int16 *v2; // rbx
  char *v3; // rbx
  unsigned __int8 v4; // al
  char *v5; // rax
  const char *v6; // rdx
  char *v7; // rax
  char *s; // [rsp+8h] [rbp-58h]
  size_t v10; // [rsp+18h] [rbp-48h]
  char *v11; // [rsp+20h] [rbp-40h]
  const char *v12; // [rsp+28h] [rbp-38h]
  unsigned __int64 v13; // [rsp+30h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-18h]

  s = a1;
  v10 = strlen(a1) + 1;
  v13 = sub_401AEB(a1);
  if ( v13 )
  {
    v14 = strlen(a2);
    v10 += v14 * v13 - v13;
    if ( 0xFFFFFFFFFFFFFFFFLL / v13 < v14 || v10 < v14 * v13 )
      sub_40548C(a2, a2, 0xFFFFFFFFFFFFFFFFLL % v13);
  }
  v15 = sub_40530A(v10);
  v11 = (char *)v15;
  while ( *s )
  {
    if ( *s == 38 )
    {
      v12 = a2;
      v2 = *__ctype_b_loc();
      if ( (v2[(unsigned __int8)sub_4019AD(*a2)] & 0x200) != 0 )
      {
        v3 = v11++;
        v12 = a2 + 1;
        v4 = sub_4019AD(*a2);
        *v3 = toupper(v4);
      }
      while ( *v12 )
      {
        v5 = v11++;
        v6 = v12++;
        *v5 = *v6;
      }
    }
    else
    {
      v7 = v11++;
      *v7 = *s;
    }
    ++s;
  }
  *v11 = 0;
  return v15;
}
