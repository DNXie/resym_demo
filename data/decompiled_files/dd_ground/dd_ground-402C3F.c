#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402C3F(char *a1, _BYTE *a2, char a3)
{
  char *v3; // rax
  char v4; // cl
  _BYTE *v5; // rax

  while ( *a2 )
  {
    v3 = a1++;
    v4 = *v3;
    v5 = a2++;
    if ( v4 != *v5 )
      return 0LL;
  }
  return !*a1 || *a1 == a3;
}
