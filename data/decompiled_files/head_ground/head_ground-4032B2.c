#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4032B2(char a1, const char *a2)
{
  char *v2; // rbx
  char *v3; // rax
  char *v4; // rax
  int v6; // [rsp+14h] [rbp-1Ch]
  __int64 v7[3]; // [rsp+18h] [rbp-18h] BYREF

  v6 = sub_4061C6(a2, 0LL, 10LL, v7, "bkKmMGTPEZY0");
  if ( v6 == 1 )
  {
    if ( a1 )
      v2 = gettext("number of lines");
    else
      v2 = gettext("number of bytes");
    v3 = gettext("%s: %s is so large that it is not representable");
    error(1, 0, v3, a2, v2);
  }
  if ( v6 )
  {
    if ( a1 )
      v4 = gettext("invalid number of lines");
    else
      v4 = gettext("invalid number of bytes");
    error(1, 0, "%s: %s", a2, v4);
  }
  return v7[0];
}
