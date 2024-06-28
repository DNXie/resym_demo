#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402857(const char *a1)
{
  unsigned __int8 *i; // [rsp+18h] [rbp-18h]
  void *ptr[2]; // [rsp+20h] [rbp-10h] BYREF

  sub_40251F(a1, (__int64 *)ptr);
  memset(byte_6107C0, 1, 0x100uLL);
  for ( i = (unsigned __int8 *)ptr[0]; ptr[1] > i; ++i )
    byte_6107C0[(unsigned __int8)sub_401E2D(*i)] = 0;
  if ( byte_6102B0 != 1 )
  {
    byte_6107E0 = 0;
    byte_6107C9 = 0;
    byte_6107CA = 0;
  }
  free(ptr[0]);
}
