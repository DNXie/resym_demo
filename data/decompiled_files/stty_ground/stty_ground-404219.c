#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404219(const char *a1)
{
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; (&off_4107E0)[3 * i]; ++i )
  {
    if ( !strcmp(a1, (&off_4107E0)[3 * i]) )
      return dword_4107E8[6 * i];
  }
  return 0xFFFFFFFFLL;
}
