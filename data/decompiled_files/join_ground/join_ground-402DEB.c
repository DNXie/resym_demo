#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402DEB(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  int v4; // [rsp+1Ch] [rbp-24h]
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF

  v4 = sub_406708(a1, 0LL, 10LL, &v5, &locale);
  if ( v4 == 1 )
  {
    v5 = -1LL;
  }
  else if ( v4 || !v5 )
  {
    v1 = sub_4041AE(a1);
    v2 = gettext("invalid field number: %s");
    error(1, 0, v2, v1);
  }
  return v5 - 1;
}
