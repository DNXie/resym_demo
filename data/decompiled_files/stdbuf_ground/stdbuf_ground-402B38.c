#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402B38(_BYTE *a1)
{
  unsigned __int64 i; // [rsp+10h] [rbp-10h]
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = *a1 == 47;
  for ( i = sub_402C58(a1) - (_QWORD)a1; v3 < i && a1[i - 1] == 47; --i )
    ;
  return i;
}
