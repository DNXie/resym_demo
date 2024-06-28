#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4021C5()
{
  unsigned __int64 i; // [rsp+8h] [rbp-8h]

  for ( i = 0LL; i <= 1; ++i )
  {
    if ( *(&ptr + i) )
    {
      sub_401CB6((__int64)*(&ptr + i));
      free(*(&ptr + i));
    }
  }
}
