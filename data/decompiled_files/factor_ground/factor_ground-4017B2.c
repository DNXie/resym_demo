#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4017B2(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  char *v3; // rax
  __int64 result; // rax
  unsigned __int64 v5[3]; // [rsp+18h] [rbp-18h] BYREF

  v1 = sub_404651(a1, 0LL, 10LL, v5, shortopts);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v2 = sub_401EAD(a1);
      v3 = gettext("%s is too large");
    }
    else
    {
      v2 = sub_401EAD(a1);
      v3 = gettext("%s is not a valid positive integer");
    }
    error(0, 0, v3, v2);
    result = 0LL;
  }
  else
  {
    gettext("using single-precision arithmetic");
    sub_401527();
    sub_4016D2(v5[0]);
    result = 1LL;
  }
  return result;
}
