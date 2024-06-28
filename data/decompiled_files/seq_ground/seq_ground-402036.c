#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_402036(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8, __int64 a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, __int64 a17, int a18)
{
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  unsigned int v21; // [rsp+0h] [rbp-20h]
  unsigned __int64 v22; // [rsp+8h] [rbp-18h]
  unsigned __int64 v23; // [rsp+10h] [rbp-10h]

  v18 = a10;
  if ( a14 >= a10 )
    v18 = a14;
  v21 = v18;
  if ( v18 != 0x7FFFFFFF && a18 != 0x7FFFFFFF )
  {
    if ( !byte_60D280 )
    {
      sprintf(byte_60D290, "%%.%dLf", v18);
      return byte_60D290;
    }
    v23 = a9 + (int)(v18 - a10);
    v22 = a17 + (int)(v18 - a18);
    if ( a18 && !v18 )
      --v22;
    if ( !a18 && v18 )
      ++v22;
    v19 = a9 + (int)(v18 - a10);
    if ( v22 >= v23 )
      v19 = v22;
    if ( v19 <= 0x7FFFFFFF )
    {
      sprintf(byte_60D290, "%%0%d.%dLf", (unsigned int)v19, v21);
      return byte_60D290;
    }
  }
  return "%Lg";
}
