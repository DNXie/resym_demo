#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_408B70(_BYTE *a1)
{
  _BYTE *i; // [rsp+10h] [rbp-10h]
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = *a1 == 47;
  for ( i = (_BYTE *)(sub_40375A(a1) - a1); v3 < (unsigned __int64)i && a1[(_QWORD)(i - 1)] == 47; --i )
    ;
  return i;
}
