#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405770(const char *a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int v10; // [rsp+2Ch] [rbp-14h]
  size_t v11; // [rsp+30h] [rbp-10h]
  size_t v12; // [rsp+38h] [rbp-8h]

  while ( 1 )
  {
    *__errno_location() = 0;
    v10 = strcoll(a1, a3);
    if ( v10 || *__errno_location() )
      break;
    v11 = strlen(a1) + 1;
    v12 = strlen(a3) + 1;
    a1 += v11;
    a3 += v12;
    a2 -= v11;
    a4 -= v12;
    if ( !a2 )
      return (unsigned int)-(a4 != 0);
    if ( !a4 )
      return 1LL;
  }
  return v10;
}
