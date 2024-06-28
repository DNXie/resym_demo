#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402CAE(const char *a1, _BYTE *a2, const char *a3)
{
  char *i; // rax
  bool j; // al
  size_t v5; // rax
  const char *v6; // rbx
  char *v7; // rax
  char *s; // [rsp+18h] [rbp-38h]
  unsigned int v11; // [rsp+24h] [rbp-2Ch]
  _BYTE *v12; // [rsp+28h] [rbp-28h]
  char *v13; // [rsp+30h] [rbp-20h]

  s = (char *)a1;
  v11 = 0;
  for ( i = strchr(a1, 44); ; i = strchr(v13 + 1, 44) )
  {
    v13 = i;
    v12 = a2;
    for ( j = sub_402C3F(s, a2, 44); !j || !*((_DWORD *)v12 + 3); j = sub_402C3F(s, v12, 44) )
    {
      if ( !*v12 )
      {
        if ( v13 )
          v5 = v13 - s;
        else
          v5 = strlen(s);
        v6 = (const char *)sub_407D27(0LL, 6LL, s, v5);
        v7 = gettext(a3);
        error(0, 0, "%s: %s", v7, v6);
        sub_401D9F(1);
      }
      v12 += 16;
    }
    v11 |= *((_DWORD *)v12 + 3);
    if ( !v13 )
      break;
    s = v13 + 1;
  }
  return v11;
}
