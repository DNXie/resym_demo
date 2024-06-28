#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402E87(char *a1, _DWORD *a2, __int64 *a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 result; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax

  v3 = *a1;
  if ( v3 == 48 )
  {
    if ( a1[1] )
    {
      v4 = sub_4041AE(a1);
      v5 = gettext("invalid field specifier: %s");
      error(1, 0, v5, v4);
    }
    *a2 = 0;
    result = (__int64)a3;
    *a3 = 0LL;
  }
  else
  {
    if ( v3 < 48 || v3 > 50 )
    {
      v9 = sub_4041AE(a1);
      v10 = gettext("invalid file number in field spec: %s");
      error(1, 0, v10, v9);
      abort();
    }
    if ( a1[1] != 46 )
    {
      v7 = sub_4041AE(a1);
      v8 = gettext("invalid field specifier: %s");
      error(1, 0, v8, v7);
    }
    *a2 = *a1 - 48;
    result = sub_402DEB((__int64)(a1 + 2));
    *a3 = result;
  }
  return result;
}
