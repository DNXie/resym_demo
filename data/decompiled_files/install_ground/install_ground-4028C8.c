#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4028C8(unsigned int a1, unsigned int a2)
{
  __int64 n; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    n = sub_40BB0B(a1, &unk_6214C0, 4096LL);
    if ( !n )
      break;
    if ( sub_40BB0B(a2, &unk_6204C0, 4096LL) != n )
      return 0LL;
    if ( memcmp(&unk_6214C0, &unk_6204C0, n) )
      return 0LL;
  }
  return 1LL;
}
