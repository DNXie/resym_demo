#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4018A2(char *a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v5; // [rsp+1Fh] [rbp-91h]
  struct stat stat_buf; // [rsp+20h] [rbp-90h] BYREF

  v2 = sub_406010(a1, &stat_buf);
  v5 = v2 == 0;
  if ( !v2 )
  {
    *a2 = sub_401649((__int64)&stat_buf);
    a2[1] = v3;
  }
  return v5;
}
