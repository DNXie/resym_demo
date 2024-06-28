#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403BDC(char *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // [rsp+2Fh] [rbp-11h]
  __int64 v6; // [rsp+30h] [rbp-10h]
  char *ptr; // [rsp+38h] [rbp-8h]

  v6 = sub_40B393(a1);
  ptr = (char *)sub_40B8EC(a2, v6, 0LL);
  v5 = sub_403924(a1, ptr, a3);
  free(ptr);
  return v5;
}
