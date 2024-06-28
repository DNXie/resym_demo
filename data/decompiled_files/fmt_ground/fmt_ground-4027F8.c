#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4027F8()
{
  int v0; // eax
  __int64 result; // rax
  int v2; // [rsp+8h] [rbp-28h]
  int v3; // [rsp+Ch] [rbp-24h]
  unsigned __int64 i; // [rsp+10h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]
  __int64 v6; // [rsp+20h] [rbp-10h]
  __int64 v7; // [rsp+28h] [rbp-8h]

  *(_QWORD *)(qword_613280 + 24) = 0LL;
  v3 = *(_DWORD *)(qword_613280 + 8);
  *(_DWORD *)(qword_613280 + 8) = dword_608270;
  for ( i = qword_613280 - 40; i >= (unsigned __int64)&unk_609640; i -= 40LL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (_UNKNOWN *)i == &unk_609640 )
      v0 = dword_613290;
    else
      v0 = dword_613294;
    v5 = i;
    v2 = *(_DWORD *)(i + 8) + v0;
    do
    {
      v5 += 40LL;
      v6 = *(_QWORD *)(v5 + 24) + sub_402A8A(v5, (unsigned int)v2);
      if ( (_UNKNOWN *)i == &unk_609640 && dword_6132A0 > 0 )
        v6 += 10 * (v2 - dword_6132A0) * (__int64)(10 * (v2 - dword_6132A0)) / 2;
      if ( v6 < v7 )
      {
        v7 = v6;
        *(_QWORD *)(i + 32) = v5;
        *(_DWORD *)(i + 20) = v2;
      }
      if ( v5 == qword_613280 )
        break;
      v2 += *(_DWORD *)(v5 - 40 + 12) + *(_DWORD *)(v5 + 8);
    }
    while ( v2 < dword_608270 );
    *(_QWORD *)(i + 24) = sub_402990(i) + v7;
  }
  result = qword_613280;
  *(_DWORD *)(qword_613280 + 8) = v3;
  return result;
}
