#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40179D(__int64 a1, const char *a2)
{
  __int64 result; // rax
  int v3; // [rsp+14h] [rbp-2Ch]
  int v4; // [rsp+14h] [rbp-2Ch]
  __int64 v5; // [rsp+18h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-28h]
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v9; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+38h] [rbp-8h]

  if ( !a1 )
    __assert_fail("root", "../../src/src/tsort.c", 0x81u, "search_item");
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = a1;
    v5 = *(_QWORD *)(a1 + 16);
    v11 = v5;
    while ( 1 )
    {
      v3 = strcmp(a2, *(const char **)v5);
      if ( !v3 )
        return v5;
      v8 = v3 >= 0 ? *(_QWORD *)(v5 + 16) : *(_QWORD *)(v5 + 8);
      if ( !v8 )
        break;
      if ( *(_DWORD *)(v8 + 24) )
      {
        v12 = v5;
        v11 = v8;
      }
      v5 = v8;
    }
    v9 = sub_401711((__int64)a2);
    if ( v3 >= 0 )
      *(_QWORD *)(v5 + 16) = v9;
    else
      *(_QWORD *)(v5 + 8) = v9;
    if ( !strcmp(a2, *(const char **)v11) )
      __assert_fail("!(strcmp (str, s->str) == 0)", "../../src/src/tsort.c", 0xA5u, "search_item");
    if ( strcmp(a2, *(const char **)v11) >= 0 )
    {
      v6 = *(_QWORD *)(v11 + 16);
      v10 = v6;
      v4 = 1;
    }
    else
    {
      v6 = *(_QWORD *)(v11 + 8);
      v10 = v6;
      v4 = -1;
    }
    while ( v6 != v9 )
    {
      if ( !strcmp(a2, *(const char **)v6) )
        __assert_fail("!(strcmp (str, p->str) == 0)", "../../src/src/tsort.c", 0xB3u, "search_item");
      if ( strcmp(a2, *(const char **)v6) >= 0 )
      {
        *(_DWORD *)(v6 + 24) = 1;
        v6 = *(_QWORD *)(v6 + 16);
      }
      else
      {
        *(_DWORD *)(v6 + 24) = -1;
        v6 = *(_QWORD *)(v6 + 8);
      }
    }
    if ( *(_DWORD *)(v11 + 24) && *(_DWORD *)(v11 + 24) != -v4 )
    {
      if ( *(_DWORD *)(v10 + 24) == v4 )
      {
        v7 = v10;
        if ( v4 >= 0 )
        {
          *(_QWORD *)(v11 + 16) = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v11;
        }
        else
        {
          *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 16);
          *(_QWORD *)(v10 + 16) = v11;
        }
        *(_DWORD *)(v10 + 24) = 0;
        *(_DWORD *)(v11 + 24) = *(_DWORD *)(v10 + 24);
      }
      else
      {
        if ( v4 >= 0 )
        {
          v7 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = *(_QWORD *)(v7 + 16);
          *(_QWORD *)(v7 + 16) = v10;
          *(_QWORD *)(v11 + 16) = *(_QWORD *)(v7 + 8);
          *(_QWORD *)(v7 + 8) = v11;
        }
        else
        {
          v7 = *(_QWORD *)(v10 + 16);
          *(_QWORD *)(v10 + 16) = *(_QWORD *)(v7 + 8);
          *(_QWORD *)(v7 + 8) = v10;
          *(_QWORD *)(v11 + 8) = *(_QWORD *)(v7 + 16);
          *(_QWORD *)(v7 + 16) = v11;
        }
        *(_DWORD *)(v11 + 24) = 0;
        *(_DWORD *)(v10 + 24) = 0;
        if ( *(_DWORD *)(v7 + 24) == v4 )
        {
          *(_DWORD *)(v11 + 24) = -v4;
        }
        else if ( *(_DWORD *)(v7 + 24) == -v4 )
        {
          *(_DWORD *)(v10 + 24) = v4;
        }
        *(_DWORD *)(v7 + 24) = 0;
      }
      if ( *(_QWORD *)(v12 + 16) == v11 )
        *(_QWORD *)(v12 + 16) = v7;
      else
        *(_QWORD *)(v12 + 8) = v7;
      result = v9;
    }
    else
    {
      *(_DWORD *)(v11 + 24) += v4;
      result = v9;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = sub_401711((__int64)a2);
    result = *(_QWORD *)(a1 + 16);
  }
  return result;
}
