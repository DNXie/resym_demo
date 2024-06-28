#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402AD6(unsigned __int64 *a1, unsigned __int8 *a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+4h] [rbp-18h]

  v5 = a3;
  if ( a4 ^ *a2 ^ 1 )
  {
    result = (unsigned __int64)a1;
    *a1 += a3;
  }
  else
  {
    if ( *a2 )
      *a1 = -(__int64)*a1;
    if ( a4 )
      v5 = -(__int64)a3;
    if ( *a1 <= v5 )
    {
      *a1 = v5 - *a1;
      *a2 = a4;
    }
    else
    {
      *a1 -= v5;
    }
    result = *a2;
    if ( (_BYTE)result )
    {
      result = (unsigned __int64)a1;
      *a1 = -(__int64)*a1;
    }
  }
  return result;
}
