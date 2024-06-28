#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall fts_set(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 || a3 == 1 || a3 == 2 || a3 == 3 || a3 == 4 )
  {
    *(_WORD *)(a2 + 116) = a3;
    result = 0LL;
  }
  else
  {
    *__errno_location() = 22;
    result = 1LL;
  }
  return result;
}
