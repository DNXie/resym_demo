#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4041B6(_QWORD *a1, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  char *v4; // rbx
  int *v5; // rax
  unsigned int v7; // [rsp+14h] [rbp-2Ch]
  unsigned int v8; // [rsp+18h] [rbp-28h]
  unsigned int v9; // [rsp+1Ch] [rbp-24h]
  __int64 v10; // [rsp+20h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-18h]

  v7 = 2;
  if ( *a1 )
  {
    v8 = 536;
    if ( *(_BYTE *)(a2 + 8) )
      v8 = 600;
    v10 = sub_41449D(a1, v8, 0LL);
    while ( 1 )
    {
      v11 = fts_read(v10);
      if ( !v11 )
        break;
      v9 = sub_403C52(v10, v11, a2);
      if ( v9 != 2 && v9 != 3 && v9 != 4 )
        __assert_fail(
          "((s) == RM_OK || (s) == RM_USER_DECLINED || (s) == RM_ERROR)",
          "../../src/src/remove.c",
          0x27Au,
          "rm");
      if ( v9 == 4 || v9 == 3 && v7 == 2 )
        v7 = v9;
    }
    if ( *__errno_location() )
    {
      v2 = gettext("fts_read failed");
      v3 = __errno_location();
      error(0, *v3, v2);
      v7 = 4;
    }
    if ( (unsigned int)fts_close(v10) )
    {
      v4 = gettext("fts_close failed");
      v5 = __errno_location();
      error(0, *v5, v4);
      v7 = 4;
    }
  }
  return v7;
}
