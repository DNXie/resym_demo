#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405DAE(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = *a2;
  if ( a1 )
  {
    if ( 0xAAAAAAAAAAAAAAAALL / a3 <= v4 )
      sub_405FEF();
    v4 += (v4 + 1) >> 1;
  }
  else if ( !v4 )
  {
    v4 = (0x80 / a3 == 0) + 0x80 / a3;
  }
  *a2 = v4;
  return sub_405EA2((void *)a1, a3 * v4);
}
