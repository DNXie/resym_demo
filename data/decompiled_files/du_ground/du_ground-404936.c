#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404936(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = sub_4047C2(a1, a2);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = sub_4048B6((__int64)a1, a3);
  if ( v6 == -1 )
    result = 0xFFFFFFFFLL;
  else
    result = sub_409ACD(v5, v6, 0LL);
  return result;
}
