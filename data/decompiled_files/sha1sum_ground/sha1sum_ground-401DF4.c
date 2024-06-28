#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401DF4(_BYTE *a1)
{
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i < (unsigned __int64)qword_60A290; ++i )
  {
    if ( ((*__ctype_b_loc())[(unsigned __int8)*a1] & 0x1000) == 0 )
      return 0;
    ++a1;
  }
  return *a1 == 0;
}
