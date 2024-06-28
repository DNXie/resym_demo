#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404169(FILE **a1)
{
  int result; // eax
  int c; // [rsp+14h] [rbp-Ch]
  FILE *stream; // [rsp+18h] [rbp-8h]

  stream = *a1;
  for ( result = getc_unlocked(*a1); result != 10; result = getc_unlocked(stream) )
  {
    if ( result == 12 )
    {
      c = getc_unlocked(stream);
      if ( c != 10 )
        ungetc(c, stream);
      if ( byte_610375 )
        byte_610376 = 1;
      return sub_403385((__int64)a1);
    }
    if ( result == -1 )
      return sub_40325C(a1);
  }
  return result;
}
