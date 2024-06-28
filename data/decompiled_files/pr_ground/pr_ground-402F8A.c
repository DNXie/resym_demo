#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *sub_402F8A()
{
  bool v0; // al
  bool v1; // al
  _QWORD *result; // rax
  int i; // [rsp+0h] [rbp-14h]
  int v4; // [rsp+4h] [rbp-10h]
  int v5; // [rsp+8h] [rbp-Ch]
  _QWORD *v6; // [rsp+Ch] [rbp-8h]

  if ( byte_610380 != 1 )
  {
    v5 = 0;
  }
  else if ( byte_610370 && byte_6103C0 )
  {
    v5 = dword_610390 + dword_610384 + dword_6103C4;
  }
  else
  {
    v5 = dword_610384 + dword_610390;
  }
  v4 = dword_6103DC + dword_610390;
  v6 = qword_610340;
  for ( i = 1; i < dword_61025C; ++i )
  {
    if ( byte_610241 )
    {
      v6[4] = sub_403ED4;
      v6[3] = sub_404C92;
    }
    else
    {
      v6[4] = sub_404537;
      v6[3] = sub_4048CB;
    }
    v0 = byte_6103C0 && (byte_610370 != 1 || i == 1);
    *((_BYTE *)v6 + 56) = v0;
    *((_DWORD *)v6 + 13) = v4;
    if ( byte_610380 != 1 )
    {
      v4 = 0;
      v5 = 0;
    }
    else
    {
      v4 = dword_6103DC + v5;
      v5 += dword_610384 + dword_6103DC;
    }
    v6 += 8;
  }
  if ( byte_610241 && byte_61037B )
  {
    v6[4] = sub_403ED4;
    v6[3] = sub_404C92;
  }
  else
  {
    v6[4] = sub_404537;
    v6[3] = sub_4048CB;
  }
  v1 = byte_6103C0 && (byte_610370 != 1 || i == 1);
  *((_BYTE *)v6 + 56) = v1;
  result = v6;
  *((_DWORD *)v6 + 13) = v4;
  return result;
}
