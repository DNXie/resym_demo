#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40A056(const char *a1, int a2, __mode_t a3)
{
  int result; // eax

  if ( a2 == -1 )
    result = chmod(a1, a3);
  else
    result = fchmod(a2, a3);
  return result;
}
