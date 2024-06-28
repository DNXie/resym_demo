#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4031BC(int a1)
{
  __int64 v2; // [rsp+18h] [rbp-18h]
  char v3[8]; // [rsp+20h] [rbp-10h] BYREF
  int v4; // [rsp+28h] [rbp-8h]

  v4 = a1;
  v2 = sub_41046A(qword_61DAA8, v3);
  if ( !v2 )
    return 0LL;
  *(_BYTE *)(v2 + 12) = 2;
  return 1LL;
}
