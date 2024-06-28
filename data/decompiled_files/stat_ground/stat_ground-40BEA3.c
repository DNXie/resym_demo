#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40BEA3(__int64 a1, unsigned int *a2)
{
  const char **v2; // rax
  _BYTE *result; // rax
  const char **v4; // rax
  unsigned int *v5; // [rsp+0h] [rbp-60h]
  unsigned __int64 v6; // [rsp+10h] [rbp-50h]
  __int64 i; // [rsp+18h] [rbp-48h]
  __int64 j; // [rsp+18h] [rbp-48h]
  _BYTE *dest; // [rsp+20h] [rbp-40h]
  _BYTE *v10; // [rsp+30h] [rbp-30h]
  char *v11; // [rsp+38h] [rbp-28h]
  size_t n; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  const char **v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v5 = a2;
  v6 = 0LL;
  v13 = *(_QWORD *)a2;
  v14 = (const char **)*((_QWORD *)a2 + 1);
  v15 = *((_QWORD *)a2 + 2);
  for ( i = a1; i; --i )
  {
    if ( (unsigned int)v13 >= 0x30 )
    {
      v2 = v14++;
    }
    else
    {
      v2 = (const char **)(v15 + (unsigned int)v13);
      LODWORD(v13) = v13 + 8;
    }
    a2 = (unsigned int *)strlen(*v2);
    v6 = sub_40BE6F(v6, (__int64)a2);
  }
  if ( v6 == -1LL || v6 > 0x7FFFFFFF )
  {
    *__errno_location() = 75;
    result = 0LL;
  }
  else
  {
    v10 = sub_40AAA9(v6 + 1, (__int64)a2);
    dest = v10;
    for ( j = a1; j; --j )
    {
      if ( *v5 >= 0x30 )
      {
        v4 = (const char **)*((_QWORD *)v5 + 1);
        *((_QWORD *)v5 + 1) = v4 + 1;
      }
      else
      {
        v4 = (const char **)(*((_QWORD *)v5 + 2) + *v5);
        *v5 += 8;
      }
      v11 = (char *)*v4;
      n = strlen(*v4);
      memcpy(dest, v11, n);
      dest += n;
    }
    *dest = 0;
    result = v10;
  }
  return result;
}
