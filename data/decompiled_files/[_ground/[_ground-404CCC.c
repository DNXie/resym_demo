#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404CCC(__int64 a1, size_t a2, _QWORD *a3, __int64 *a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  int v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+44h] [rbp-1Ch]
  __int64 *v10; // [rsp+48h] [rbp-18h]
  unsigned __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+58h] [rbp-8h]

  if ( a4 )
    v4 = a4;
  else
    v4 = &qword_609260;
  v10 = v4;
  v8 = *__errno_location();
  v9 = *((_DWORD *)v10 + 1) | (a3 == 0LL);
  v11 = sub_403FAF(0LL, 0LL, a1, a2, *(_DWORD *)v10, v9, (__int64)(v10 + 1), (char *)v10[5], (char *)v10[6]) + 1;
  v12 = sub_405E53(v11, 0LL, v5);
  sub_403FAF(v12, v11, a1, a2, *(_DWORD *)v10, v9, (__int64)(v10 + 1), (char *)v10[5], (char *)v10[6]);
  *__errno_location() = v8;
  if ( a3 )
    *a3 = v11 - 1;
  return v12;
}
