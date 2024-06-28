#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_409D4C(__int64 a1, __int64 a2)
{
  void **v2; // [rsp+18h] [rbp-28h]
  __int64 v3[4]; // [rsp+20h] [rbp-20h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  v3[2] = 0LL;
  v2 = (void **)sub_40D1FC(qword_6228E0, v3);
  if ( v2 )
    sub_409D1A(v2);
}
