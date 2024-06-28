#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_404C62(_BYTE *a1)
{
  unsigned __int64 n; // [rsp+20h] [rbp-10h]
  _BYTE *dest; // [rsp+28h] [rbp-8h]

  n = sub_404BD9(a1);
  dest = malloc((n == 0) + n + 1);
  if ( !dest )
    return 0LL;
  memcpy(dest, a1, n);
  if ( !n )
  {
    n = 1LL;
    *dest = 46;
  }
  dest[n] = 0;
  return dest;
}
