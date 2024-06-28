#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4035D2(__int64 a1)
{
  _QWORD *v2; // [rsp+18h] [rbp-8h]

  v2 = malloc(0x30uLL);
  if ( !v2 )
    return 0LL;
  *v2 = a1;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[1] = 0LL;
  v2[4] = 0LL;
  return v2;
}
