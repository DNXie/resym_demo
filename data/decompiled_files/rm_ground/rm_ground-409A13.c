#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409A13(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( (_UNKNOWN *)v2 == &unk_40C890 )
    return 1LL;
  if ( *(float *)(v2 + 8) > 0.1
    && (float)(1.0 - 0.1) > *(float *)(v2 + 8)
    && *(float *)(v2 + 12) > (float)(0.1 + 1.0)
    && *(float *)v2 >= 0.0
    && *(float *)(v2 + 4) > (float)(*(float *)v2 + 0.1)
    && *(float *)(v2 + 4) <= 1.0
    && *(float *)(v2 + 8) > (float)(*(float *)v2 + 0.1) )
  {
    return 1LL;
  }
  *(_QWORD *)(a1 + 40) = &unk_40C890;
  return 0LL;
}
