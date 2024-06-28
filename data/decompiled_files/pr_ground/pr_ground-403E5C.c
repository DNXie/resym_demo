#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403E5C(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+10h] [rbp-14h]
  int v3; // [rsp+14h] [rbp-10h]
  int v4; // [rsp+18h] [rbp-Ch]
  _DWORD *i; // [rsp+1Ch] [rbp-8h]

  v4 = 0;
  v2 = 1;
  for ( i = qword_610340; ; i += 16 )
  {
    result = (unsigned int)dword_61025C;
    if ( v2 > dword_61025C )
      break;
    v3 = a1 / dword_61025C;
    if ( a1 % dword_61025C >= v2 )
      ++v3;
    i[11] = v3;
    i[10] = v4;
    v4 += v3;
    ++v2;
  }
  return result;
}
