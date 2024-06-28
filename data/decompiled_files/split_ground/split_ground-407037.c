#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407037(__int64 a1, size_t a2, _QWORD *a3, __int64 *a4)
{
  __int64 *v4; // rax
  int v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+44h] [rbp-1Ch]
  __int64 *v9; // [rsp+48h] [rbp-18h]
  unsigned __int64 v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+58h] [rbp-8h]

  if ( a4 )
    v4 = a4;
  else
    v4 = &qword_6106E0;
  v9 = v4;
  v7 = *__errno_location();
  v8 = *((_DWORD *)v9 + 1) | (a3 == 0LL);
  v10 = sub_40631A(0LL, 0LL, a1, a2, *(_DWORD *)v9, v8, (__int64)(v9 + 1), (char *)v9[5], (char *)v9[6]) + 1;
  v11 = sub_4088AE(v10);
  sub_40631A(v11, v10, a1, a2, *(_DWORD *)v9, v8, (__int64)(v9 + 1), (char *)v9[5], (char *)v9[6]);
  *__errno_location() = v7;
  if ( a3 )
    *a3 = v10 - 1;
  return v11;
}
