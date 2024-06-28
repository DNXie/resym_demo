#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4042E3(__int64 a1)
{
  _QWORD *v2; // [rsp+18h] [rbp-8h]

  v2 = malloc(0x30uLL);
  if ( !v2 )
    return 0LL;
  *v2 = 0LL;
  v2[4] = a1;
  v2[5] = a1;
  return v2;
}
