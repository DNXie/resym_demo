#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407E8B(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  int v5; // [rsp+1Ch] [rbp-14h]

  v5 = sub_4089B9(a1, a2);
  if ( v5 < 0 && !ferror(stdout) )
  {
    v2 = gettext("cannot perform formatted output");
    v3 = __errno_location();
    error(status, *v3, v2);
  }
  return (unsigned int)v5;
}
