#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40249B(unsigned __int8 *a1, unsigned __int64 a2, char **a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 size; // [rsp+28h] [rbp-8h]

  size = 4 * ((a2 + 2) / 3) + 1;
  if ( a2 <= size )
  {
    *a3 = (char *)malloc(size);
    if ( *a3 )
    {
      sub_4022AD(a1, a2, *a3, size);
      result = 4 * ((a2 + 2) / 3);
    }
    else
    {
      result = 4 * ((a2 + 2) / 3) + 1;
    }
  }
  else
  {
    *a3 = 0LL;
    result = 0LL;
  }
  return result;
}
