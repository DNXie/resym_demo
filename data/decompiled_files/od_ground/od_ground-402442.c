#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402442(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 v3; // al
  unsigned __int8 v6; // [rsp+16h] [rbp-Ah]

  fwrite_unlocked("  >", 1uLL, 3uLL, stdout);
  while ( a1 )
  {
    v2 = a2++;
    v6 = *v2;
    if ( ((*__ctype_b_loc())[v6] & 0x4000) != 0 )
      v3 = v6;
    else
      v3 = 46;
    putchar_unlocked(v3);
    --a1;
  }
  return putchar_unlocked(60);
}
