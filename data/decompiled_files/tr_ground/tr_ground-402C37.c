#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C37(_QWORD *a1, _DWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // [rsp+10h] [rbp-10h]
  int i; // [rsp+14h] [rbp-Ch]
  int j; // [rsp+14h] [rbp-Ch]
  __int64 v9; // [rsp+18h] [rbp-8h]

  if ( a2 )
    *a2 = 2;
  if ( a1[2] == -2LL )
  {
    a1[1] = *(_QWORD *)(*a1 + 8LL);
    a1[2] = -1LL;
  }
  v9 = a1[1];
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 2 )
  {
    if ( a2 )
    {
      v5 = *(_DWORD *)(v9 + 16);
      if ( v5 == 6 )
      {
        *a2 = 0;
      }
      else if ( v5 == 10 )
      {
        *a2 = 1;
      }
    }
    if ( a1[2] == -1LL )
    {
      for ( i = 0; i <= 255 && !sub_40188A(*(_DWORD *)(v9 + 16), i); ++i )
        ;
      if ( i > 255 )
        __assert_fail("i < N_CHARS", "../../src/src/tr.c", 0x44Bu, "get_next");
      a1[2] = i;
    }
    if ( !sub_40188A(*(_DWORD *)(v9 + 16), a1[2]) )
      __assert_fail("is_char_class_member (p->u.char_class, s->state)", "../../src/src/tr.c", 0x44Eu, "get_next");
    v6 = a1[2];
    for ( j = v6 + 1; j <= 255 && !sub_40188A(*(_DWORD *)(v9 + 16), j); ++j )
      ;
    if ( j > 255 )
    {
      a1[1] = *(_QWORD *)(v9 + 8);
      a1[2] = -1LL;
    }
    else
    {
      a1[2] = j;
    }
  }
  else if ( v3 > 2 )
  {
    if ( v3 == 3 )
    {
      v6 = *(unsigned __int8 *)(v9 + 16);
      a1[2] = -1LL;
      a1[1] = *(_QWORD *)(v9 + 8);
    }
    else
    {
      if ( v3 != 4 )
LABEL_53:
        abort();
      if ( *(_QWORD *)(v9 + 24) )
      {
        if ( a1[2] == -1LL )
          a1[2] = 0LL;
        ++a1[2];
        v6 = *(unsigned __int8 *)(v9 + 16);
        if ( a1[2] == *(_QWORD *)(v9 + 24) )
        {
          a1[1] = *(_QWORD *)(v9 + 8);
          a1[2] = -1LL;
        }
      }
      else
      {
        a1[1] = *(_QWORD *)(v9 + 8);
        a1[2] = -1LL;
        v6 = sub_402C37(a1, a2);
      }
    }
  }
  else if ( v3 )
  {
    if ( v3 != 1 )
      goto LABEL_53;
    if ( a1[2] == -1LL )
      v4 = *(unsigned __int8 *)(v9 + 16);
    else
      v4 = a1[2] + 1LL;
    a1[2] = v4;
    v6 = a1[2];
    if ( a1[2] == *(unsigned __int8 *)(v9 + 17) )
    {
      a1[1] = *(_QWORD *)(v9 + 8);
      a1[2] = -1LL;
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(v9 + 16);
    a1[2] = -1LL;
    a1[1] = *(_QWORD *)(v9 + 8);
  }
  return v6;
}
