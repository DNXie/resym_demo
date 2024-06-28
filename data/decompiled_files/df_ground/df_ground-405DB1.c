#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_405DB1(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  _BYTE *v3; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    v4 = a3--;
    if ( !v4 || (unsigned __int64)a1 >= a2 )
      break;
    v3 = a1++;
    *v3 = 32;
  }
  *a1 = 0;
  return a1;
}
