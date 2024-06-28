#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_406760(_DWORD *a1)
{
  int result; // eax

  result = *a1 & 0x100;
  if ( result )
    result = sub_4067DE((FILE *)a1, 0LL, 1);
  return result;
}
