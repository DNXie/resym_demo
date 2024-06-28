#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402558(int a1, char *a2, __int64 a3, struct stat *a4)
{
  if ( (unsigned __int8)sub_405DA6() )
    return 0LL;
  if ( (unsigned int)sub_4024B9(a1, a2, a4, 256) )
    return 0xFFFFFFFFLL;
  if ( (a4->st_mode & 0xF000) == 40960 )
    return 0LL;
  if ( !faccessat(a1, a2, 2, 512) )
    return 0LL;
  if ( *__errno_location() == 13 )
    return 1LL;
  return 0xFFFFFFFFLL;
}
