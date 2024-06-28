#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405942(int a1, const char *a2, __mode_t a3)
{
  int result; // eax

  if ( a1 < 0 )
    result = chmod(a2, a3);
  else
    result = fchmod(a1, a3);
  return result;
}
