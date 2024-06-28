#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403BCF(unsigned __int8 *a1)
{
  char *v1; // rax
  __int64 v2; // rax
  char *v3; // rax
  __int64 v4; // rdx
  char v6; // [rsp+1Fh] [rbp-11h]
  int v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+24h] [rbp-Ch]
  unsigned __int8 *i; // [rsp+28h] [rbp-8h]

  v6 = 0;
  for ( i = a1; *i; ++i )
  {
    if ( *i == 37 && *++i != 37 )
    {
      if ( v6 )
      {
        v1 = gettext("too many %% conversion specifications in suffix");
        error(1, 0, v1);
      }
      v6 = 1;
      v2 = sub_403A01((__int64)i, &v7);
      for ( i += v2; (unsigned int)((char)*i - 48) <= 9; ++i )
        ;
      if ( *i == 46 )
      {
        do
          ++i;
        while ( (unsigned int)((char)*i - 48) <= 9 );
      }
      sub_403A6F(i, v7);
    }
  }
  if ( v6 != 1 )
  {
    v3 = gettext("missing %% conversion specification in suffix");
    error(1, 0, v3);
  }
  v8 = snprintf(0LL, 0LL, (const char *)a1, 0xFFFFFFFFLL);
  if ( v8 < 0 )
    sub_401CAF(0LL, 0LL, v4);
  return v8;
}
