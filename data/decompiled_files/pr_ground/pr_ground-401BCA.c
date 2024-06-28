#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_401BCA()
{
  int i; // [rsp+0h] [rbp-10h]
  unsigned int v2; // [rsp+4h] [rbp-Ch]
  _DWORD *v3; // [rsp+8h] [rbp-8h]

  v2 = 0;
  v3 = qword_610340;
  for ( i = 0; i < dword_61025C; ++i )
  {
    if ( !v3[4] || v3[4] == 1 || byte_610241 && (int)v3[11] > 0 && (int)v3[12] > 0 )
      ++v2;
    v3 += 16;
  }
  return v2;
}
