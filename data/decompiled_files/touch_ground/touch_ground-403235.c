#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403235(int a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // [rsp+2Ch] [rbp-4h]

  v9 = 1;
  if ( a1 >= 0 )
    v9 = sub_409D30((unsigned int)a1, a4);
  if ( a3 && (a1 < 0 || v9 == -1 && *__errno_location() == 38) )
    v9 = sub_409D80(a2, a3, a4, a5);
  if ( v9 == 1 )
  {
    *__errno_location() = 9;
    v9 = -1;
  }
  return v9;
}
