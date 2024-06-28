#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FF03(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 nmemb; // [rsp+10h] [rbp-60h]
  void *v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h]
  unsigned __int64 v6; // [rsp+30h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+68h] [rbp-8h]

  nmemb = sub_40F6A1(a2, *(_QWORD *)(a1 + 40));
  if ( !nmemb )
    return 0LL;
  if ( *(_QWORD *)(a1 + 16) == nmemb )
    return 1LL;
  v4 = calloc(nmemb, 0x10uLL);
  if ( !v4 )
    return 0LL;
  v6 = nmemb;
  v5 = (__int64)v4 + 16 * nmemb;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int8)sub_40FD35((__int64)&v4, a1, 0) )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 72) = v13;
    result = 1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = v13;
    if ( (unsigned __int8)sub_40FD35(a1, (__int64)&v4, 1) != 1 || (unsigned __int8)sub_40FD35(a1, (__int64)&v4, 0) != 1 )
      abort();
    free(v4);
    result = 0LL;
  }
  return result;
}
