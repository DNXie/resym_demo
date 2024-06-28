#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405C44(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  int v5; // [rsp+1Ch] [rbp-14h]

  v5 = sub_405F5B(a1, a2);
  if ( v5 < 0 && !ferror(stdout) )
  {
    v2 = gettext("cannot perform formatted output");
    v3 = __errno_location();
    error(dword_60F218, *v3, v2);
  }
  return (unsigned int)v5;
}
