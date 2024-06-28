#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404C92(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax
  signed __int8 *v3; // rax
  int v4; // [rsp+10h] [rbp-20h]
  int v5; // [rsp+14h] [rbp-1Ch]
  _DWORD *v6; // [rsp+18h] [rbp-18h]
  signed __int8 *v7; // [rsp+20h] [rbp-10h]
  signed __int8 *v8; // [rsp+28h] [rbp-8h]

  v1 = a1[10];
  a1[10] = v1 + 1;
  v5 = v1;
  v7 = (char *)qword_610348 + *((int *)qword_610360 + v1);
  v8 = (char *)qword_610348 + *((int *)qword_610360 + v1 + 1);
  byte_6103E8 = 1;
  if ( byte_610377 )
    sub_40474A();
  if ( a1[4] != 1 )
    goto LABEL_11;
  v4 = 1;
  v6 = qword_610340;
  while ( v4 <= dword_61025C )
  {
    v6[4] = 2;
    ++v4;
    v6 += 16;
  }
  if ( *((int *)qword_610340 + 12) <= 0 )
  {
    if ( byte_610240 != 1 )
      byte_6103E8 = 0;
    result = 1LL;
  }
  else
  {
LABEL_11:
    if ( dword_6103E4 - dword_6103DC > 0 )
    {
      sub_4040D2(dword_6103E4 - dword_6103DC);
      dword_6103E4 = 0;
    }
    if ( byte_6103D9 )
      sub_40441D();
    while ( v7 != v8 )
    {
      v3 = v7++;
      sub_404537(*v3);
    }
    if ( !dword_61038C )
    {
      dword_610394 = a1[13] + *((_DWORD *)qword_610368 + v5);
      if ( a1[13] - dword_6103DC == dword_610390 )
        dword_610394 -= dword_6103DC;
    }
    result = 1LL;
  }
  return result;
}
