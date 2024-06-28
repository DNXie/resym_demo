#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40FB20(__int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h]

  if ( !*(_QWORD *)(a1 + 72) )
    return malloc(0x10uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v2 + 8);
  return (void *)v2;
}
