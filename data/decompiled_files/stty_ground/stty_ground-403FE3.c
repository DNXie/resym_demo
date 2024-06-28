#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403FE3(const char *a1, int a2, char **a3, _DWORD *a4, char a5)
{
  unsigned __int64 v9; // [rsp+28h] [rbp-8h]

  *__errno_location() = 0;
  v9 = strtoul(a1, a3, a2);
  if ( *__errno_location() || **a3 != a5 || *a3 == a1 || (unsigned int)v9 != v9 )
    return 0xFFFFFFFFLL;
  *a4 = v9;
  return 0LL;
}
