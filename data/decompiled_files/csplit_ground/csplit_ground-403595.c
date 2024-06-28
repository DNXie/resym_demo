#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403595(int a1, char a2, char *a3)
{
  char *v3; // rax
  char *v4; // rax
  char v7; // [rsp+1Fh] [rbp-31h]
  char *v8; // [rsp+20h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  const char *v10; // [rsp+38h] [rbp-18h]

  v7 = *a3;
  v8 = strrchr(a3 + 1, *a3);
  if ( !v8 )
  {
    v3 = gettext("%s: closing delimiter `%c' missing");
    error(1, 0, v3, a3, (unsigned int)v7);
  }
  v9 = sub_403378();
  *(_DWORD *)(v9 + 24) = a1;
  *(_BYTE *)(v9 + 29) = a2;
  *(_BYTE *)(v9 + 30) = 1;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)(v9 + 64) = sub_406A3C(256LL);
  *(_QWORD *)(v9 + 72) = 0LL;
  re_syntax_options = 710LL;
  v10 = re_compile_pattern(a3 + 1, v8 - a3 - 1, (struct re_pattern_buffer *)(v9 + 32));
  if ( v10 )
  {
    v4 = gettext("%s: invalid regular expression: %s");
    error(0, 0, v4, a3, v10);
    sub_401C9C();
  }
  if ( v8[1] )
    sub_40341C(v9, (__int64)a3, (__int64)(v8 + 1));
  return v9;
}
