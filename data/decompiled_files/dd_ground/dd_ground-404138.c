#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_404138(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 result; // rax
  char v14; // [rsp+17h] [rbp-9h]
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; ; ++i )
  {
    result = i;
    if ( i >= a2 )
      break;
    v14 = *(_BYTE *)(a1 + i);
    v6 = qword_60E3F8++;
    if ( v6 >= qword_60E368 )
    {
      qword_60E5C0 = 0LL;
      qword_60E3F8 = 0LL;
      --i;
      v7 = (int)s;
      v8 = qword_60E3F0++;
      *((_BYTE *)s + v8) = byte_60E278;
      v9 = qword_60E3F0;
      if ( qword_60E3F0 < n )
        continue;
LABEL_13:
      sub_402B6D(a1, a2, v9, v7, a5, a6);
      continue;
    }
    if ( v14 == byte_60E279 )
    {
      ++qword_60E5C0;
      continue;
    }
    while ( qword_60E5C0 )
    {
      v10 = (int)s;
      v11 = qword_60E3F0++;
      *((_BYTE *)s + v11) = byte_60E279;
      if ( qword_60E3F0 >= n )
        sub_402B6D(a1, a2, qword_60E3F0, v10, a5, a6);
      --qword_60E5C0;
    }
    v7 = (int)s;
    v12 = qword_60E3F0++;
    *((_BYTE *)s + v12) = v14;
    v9 = qword_60E3F0;
    if ( qword_60E3F0 >= n )
      goto LABEL_13;
  }
  return result;
}
