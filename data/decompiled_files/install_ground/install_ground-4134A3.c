#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4134A3(unsigned int a1, char *a2, int a3, const char *a4, int a5)
{
  int v5; // eax
  int v9; // [rsp+2Ch] [rbp-4h]

  v5 = a5;
  BYTE1(v5) = BYTE1(a5) & 0xFB;
  if ( v5 )
  {
    *__errno_location() = 22;
    return -1;
  }
  if ( !a5 )
    return linkat(a1, a2, a3, a4, 0);
  if ( dword_622A80 >= 0 )
  {
    v9 = linkat(a1, a2, a3, a4, a5);
    if ( v9 != -1 || *__errno_location() != 22 )
    {
      dword_622A80 = 1;
      return v9;
    }
    dword_622A80 = -1;
  }
  return sub_4132D6(a1, a2, a3, a4);
}
