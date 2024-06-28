#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40187E(unsigned __int8 *a1)
{
  const unsigned __int16 *v1; // rbx
  char v2; // al
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 result; // rax
  char v9; // [rsp+1Eh] [rbp-32h]
  unsigned __int8 v10; // [rsp+1Fh] [rbp-31h]
  unsigned __int64 v11; // [rsp+20h] [rbp-30h]
  char *s; // [rsp+28h] [rbp-28h]
  size_t v13; // [rsp+30h] [rbp-20h]
  void *ptr; // [rsp+38h] [rbp-18h]

  v9 = 0;
  v10 = 1;
  while ( *a1 )
  {
    if ( *a1 == 44 || (v1 = *__ctype_b_loc(), (v1[(unsigned __int8)sub_40158D(*a1)] & 1) != 0) )
    {
      if ( v9 )
        sub_4017A7(v11);
      v9 = 0;
    }
    else
    {
      if ( (unsigned int)((char)*a1 - 48) > 9 )
      {
        v5 = sub_4026F0(a1);
        v6 = gettext("tab size contains invalid character(s): %s");
        error(0, 0, v6, v5);
        v10 = 0;
        break;
      }
      if ( v9 != 1 )
      {
        v11 = 0LL;
        v9 = 1;
        s = (char *)a1;
      }
      if ( v11 > 0x1999999999999999LL || (char)*a1 - 48 + 10 * v11 < v11 )
      {
        v2 = 1;
      }
      else
      {
        v11 = 10 * v11 + (char)*a1 - 48;
        v2 = 0;
      }
      if ( v2 )
      {
        v13 = strspn(s, "0123456789");
        ptr = (void *)sub_4049D9(s, v13);
        v3 = sub_4026F0(ptr);
        v4 = gettext("tab stop is too large %s");
        error(0, 0, v4, v3);
        free(ptr);
        v10 = 0;
        a1 = (unsigned __int8 *)&s[v13 - 1];
      }
    }
    ++a1;
  }
  result = v10 ^ 1u;
  if ( v10 != 1 )
    exit(1);
  if ( v9 )
    result = sub_4017A7(v11);
  return result;
}
