#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4030CF(const char *a1, unsigned int a2, size_t a3, char a4, char a5)
{
  __int64 result; // rax

  if ( byte_60927A )
    sub_4018EE(a1);
  if ( a5 )
  {
    if ( a4 )
      result = sub_402C5F((__int64)a1, a2, a3);
    else
      result = sub_402101((__int64)a1, a2, a3);
  }
  else if ( a4 )
  {
    result = sub_402E7B((__int64)a1, a2, a3);
  }
  else
  {
    result = sub_402D06((__int64)a1, a2, a3);
  }
  return result;
}
