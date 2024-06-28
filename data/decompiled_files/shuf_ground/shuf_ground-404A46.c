#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404A46(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v7; // [rsp+28h] [rbp-38h]
  _QWORD *v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int64 v10[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11[2]; // [rsp+50h] [rbp-10h] BYREF

  v10[0] = a3;
  v10[1] = 0LL;
  v7 = (_QWORD *)sub_408ED3(a1, v10);
  v11[0] = a4;
  v11[1] = 0LL;
  v8 = (_QWORD *)sub_408ED3(a1, v11);
  if ( !v7 )
  {
    v7 = (_QWORD *)sub_406EC3(16LL);
    v7[1] = a3;
    *v7 = v7[1];
  }
  if ( !v8 )
  {
    v8 = (_QWORD *)sub_406EC3(16LL);
    v8[1] = a4;
    *v8 = v8[1];
  }
  v9 = v7[1];
  v7[1] = v8[1];
  v8[1] = v9;
  if ( !sub_408E8A(a1, v7) )
    sub_407045();
  if ( !sub_408E8A(a1, v8) )
    sub_407045();
  result = v7[1];
  *(_QWORD *)(a2 + 8 * a3) = result;
  return result;
}
