#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_401849(__int64 a1, FILE *a2, int a3)
{
  size_t result; // rax

  if ( a3 == 2 )
  {
    result = (unsigned __int8)byte_608262 ^ 1u;
    if ( byte_608262 != 1 )
      return result;
    if ( !byte_608261 )
      return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), a2);
    goto LABEL_13;
  }
  if ( a3 == 3 )
  {
    result = (unsigned __int8)byte_608263 ^ 1u;
    if ( byte_608263 != 1 )
      return result;
    if ( byte_608261 )
      fputs_unlocked(s1, a2);
    if ( !byte_608262 )
      return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), a2);
LABEL_13:
    fputs_unlocked(s1, a2);
    return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), a2);
  }
  if ( a3 != 1 )
    return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), a2);
  result = (unsigned __int8)byte_608261 ^ 1u;
  if ( byte_608261 == 1 )
    return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), a2);
  return result;
}
