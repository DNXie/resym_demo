#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408CD1(unsigned __int64 *a1)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  if ( !a1[4] )
    return 0LL;
  for ( i = *a1; ; i += 16LL )
  {
    if ( a1[1] <= i )
      abort();
    if ( *(_QWORD *)i )
      break;
  }
  return *(_QWORD *)i;
}
