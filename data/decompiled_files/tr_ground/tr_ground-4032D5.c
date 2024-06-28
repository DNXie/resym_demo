#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4032D5(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // eax
  char *v3; // rax
  __int64 result; // rax
  int j; // [rsp+1Ch] [rbp-24h]
  int k; // [rsp+1Ch] [rbp-24h]
  __int64 i; // [rsp+20h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]

  v8 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 50) = 0;
  *(_BYTE *)(a1 + 49) = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL); i; i = *(_QWORD *)(i + 8) )
  {
    v9 = 0LL;
    v1 = *(_DWORD *)i;
    if ( *(_DWORD *)i == 2 )
    {
      *(_BYTE *)(a1 + 49) = 1;
      for ( j = 0; j <= 255; ++j )
      {
        if ( sub_40188A(*(_DWORD *)(i + 16), j) )
          ++v9;
      }
      v2 = *(_DWORD *)(i + 16);
      if ( v2 != 6 && v2 != 10 )
        *(_BYTE *)(a1 + 50) = 1;
    }
    else if ( v1 > 2 )
    {
      if ( v1 == 3 )
      {
        for ( k = 0; k <= 255; ++k )
        {
          if ( sub_401870(*(_BYTE *)(i + 16), k) )
            ++v9;
        }
        *(_BYTE *)(a1 + 48) = 1;
      }
      else
      {
        if ( v1 != 4 )
LABEL_32:
          abort();
        if ( *(_QWORD *)(i + 24) )
        {
          v9 = *(_QWORD *)(i + 24);
        }
        else
        {
          *(_QWORD *)(a1 + 40) = i;
          ++*(_QWORD *)(a1 + 32);
        }
      }
    }
    else if ( v1 )
    {
      if ( v1 != 1 )
        goto LABEL_32;
      if ( *(_BYTE *)(i + 17) < *(_BYTE *)(i + 16) )
        __assert_fail("p->u.range.last_char >= p->u.range.first_char", "../../src/src/tr.c", 0x508u, "get_spec_stats");
      v9 = *(unsigned __int8 *)(i + 17) - *(unsigned __int8 *)(i + 16) + 1;
    }
    else
    {
      v9 = 1LL;
    }
    if ( v8 > v8 + v9 || v8 + v9 == -1LL )
    {
      v3 = gettext("too many characters in set");
      error(1, 0, v3);
    }
    v8 += v9;
  }
  result = a1;
  *(_QWORD *)(a1 + 24) = v8;
  return result;
}
