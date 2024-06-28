#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40180B(const char *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  size_t v7; // [rsp+18h] [rbp-38h]
  char *v8; // [rsp+20h] [rbp-30h]
  size_t v9; // [rsp+28h] [rbp-28h]
  mbstate_t ps; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  v7 = strspn(a1, "/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-");
  v8 = (char *)&a1[v7];
  if ( !a1[v7] )
    return 1LL;
  ps = 0LL;
  v9 = mbrlen(v8, a2 - v7, &ps);
  v2 = sub_402214(0LL, a1);
  if ( v9 > 0x10 )
    v3 = 1LL;
  else
    v3 = v9;
  v4 = sub_403704(1LL, 6LL, v8, v3);
  v5 = gettext("nonportable character %s in file name %s");
  error(0, 0, v5, v4, v2);
  return 0LL;
}
