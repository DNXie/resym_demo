#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C0E(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v4; // rax
  size_t v6; // [rsp+0h] [rbp-30h]
  unsigned int v7; // [rsp+2Ch] [rbp-4h]

  v6 = a4;
  v4 = a4;
  if ( a2 <= a4 )
    v4 = a2;
  v7 = memcmp(a1, a3, v4);
  if ( !v7 )
  {
    if ( a2 >= v6 )
    {
      if ( a2 > v6 )
        v7 = 1;
    }
    else
    {
      v7 = -1;
    }
  }
  return v7;
}
