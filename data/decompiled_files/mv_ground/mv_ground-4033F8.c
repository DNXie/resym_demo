#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4033F8(int a1, char *a2, struct stat *a3, int a4)
{
  if ( a3->st_size == -1 && (unsigned int)sub_415450(a1, a2, a3, a4) )
  {
    a3->st_size = -2LL;
    a3->st_ino = *__errno_location();
  }
  if ( a3->st_size >= 0 )
    return 0LL;
  *__errno_location() = a3->st_ino;
  return 0xFFFFFFFFLL;
}
