#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4042A7(int a1)
{
  int i; // [rsp+10h] [rbp-4h]

  for ( i = 0; (&off_4107E0)[3 * i]; ++i )
  {
    if ( dword_4107E8[6 * i] == a1 )
      return *(_QWORD *)&dword_4107E8[6 * i + 2];
  }
  return 0LL;
}
