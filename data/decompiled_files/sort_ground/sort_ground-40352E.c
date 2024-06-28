#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_40352E(const char *a1, _BYTE *a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h]

  if ( !a1 )
    return stdout;
  if ( *a2 != 114 )
    return (FILE *)sub_40ED36(a1, a2);
  if ( !strcmp(a1, "-") )
  {
    byte_61DA03 = 1;
    v3 = stdin;
    sub_40E777(stdin, 2LL);
  }
  else
  {
    v3 = sub_40ED36(a1, a2);
    sub_40E777(v3, 2LL);
  }
  return (FILE *)v3;
}
