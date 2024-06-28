#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402338(const char *a1)
{
  int *v1; // rax
  __int64 result; // rax
  const char *v3; // rbx
  int *v4; // rax
  unsigned __int8 v5; // [rsp+1Fh] [rbp-11h]

  if ( !strcmp(a1, "-") || sub_402AF1(a1, "r", stdin) )
  {
    v5 = sub_401C89((FILE *)stdin, (__int64)a1);
    if ( (unsigned int)sub_405071(stdin) )
    {
      v3 = (const char *)sub_402D4F(a1);
      v4 = __errno_location();
      error(0, *v4, "%s", v3);
      result = 0LL;
    }
    else
    {
      result = v5;
    }
  }
  else
  {
    v1 = __errno_location();
    error(0, *v1, "%s", a1);
    result = 0LL;
  }
  return result;
}
