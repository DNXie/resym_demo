#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40FFA8(DIR *a1)
{
  int v2; // [rsp+14h] [rbp-Ch]
  _BYTE *ptr; // [rsp+18h] [rbp-8h]

  ptr = sub_40FE05(a1);
  if ( !a1 || !closedir(a1) )
    return ptr;
  v2 = *__errno_location();
  free(ptr);
  *__errno_location() = v2;
  return 0LL;
}
