#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403CB7()
{
  unsigned int v0; // eax
  __int64 result; // rax
  int v2; // [rsp+4h] [rbp-1Ch]
  int v3; // [rsp+4h] [rbp-1Ch]
  int i; // [rsp+8h] [rbp-18h]
  unsigned int v5; // [rsp+Ch] [rbp-14h]
  int v6; // [rsp+10h] [rbp-10h]
  int v7; // [rsp+14h] [rbp-Ch]
  _DWORD *v8; // [rsp+18h] [rbp-8h]
  _DWORD *v9; // [rsp+18h] [rbp-8h]

  v5 = 0;
  dword_610350 = 0;
  v6 = 0;
  if ( byte_61037B )
    v7 = dword_61025C;
  else
    v7 = dword_61025C - 1;
  v2 = 1;
  v8 = qword_610340;
  while ( v2 <= v7 )
  {
    v8[11] = 0;
    ++v2;
    v8 += 16;
  }
  v3 = 1;
  v9 = qword_610340;
  while ( v3 <= v7 && dword_6103A8 )
  {
    v9[10] = v5;
    for ( i = dword_61037C; i && dword_6103A8; --i )
    {
      if ( !v9[4] )
      {
        dword_610398 = 0;
        if ( (unsigned __int8)sub_4048CB(v9) != 1 )
          sub_404169(v9);
        if ( !v9[4] || v6 != dword_610350 )
        {
          ++v9[11];
          *((_DWORD *)qword_610360 + v5) = v6;
          v0 = v5++;
          *((_DWORD *)qword_610368 + v0) = dword_610398;
          v6 = dword_610350;
        }
      }
    }
    ++v3;
    v9 += 16;
  }
  *((_DWORD *)qword_610360 + v5) = v6;
  result = (unsigned __int8)byte_61037B;
  if ( byte_61037B )
    result = sub_403E5C(v5);
  return result;
}
