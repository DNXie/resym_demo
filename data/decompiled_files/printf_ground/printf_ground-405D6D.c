#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405D6D(FILE *a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  int *v4; // rax
  int v6; // [rsp+2Ch] [rbp-14h]

  v6 = sub_405DE7(a1, a2, a3);
  if ( v6 < 0 && !ferror(a1) )
  {
    v3 = gettext("cannot perform formatted output");
    v4 = __errno_location();
    error(dword_60F218, *v4, v3);
  }
  return (unsigned int)v6;
}
