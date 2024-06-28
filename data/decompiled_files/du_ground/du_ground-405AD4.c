#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405AD4(FILE *a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax

  while ( 1 )
  {
    result = a3--;
    if ( !result )
      break;
    v3 = toupper(*a2);
    fputc(v3, a1);
    ++a2;
  }
  return result;
}
