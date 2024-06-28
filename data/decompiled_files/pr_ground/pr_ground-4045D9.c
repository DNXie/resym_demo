#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4045D9(unsigned __int64 a1)
{
  char *v1; // rax
  int j; // [rsp+18h] [rbp-18h]
  int v4; // [rsp+1Ch] [rbp-14h]
  int v5; // [rsp+1Ch] [rbp-14h]
  int v6; // [rsp+1Ch] [rbp-14h]
  unsigned __int64 i; // [rsp+20h] [rbp-10h]
  _DWORD *v8; // [rsp+28h] [rbp-8h]
  _DWORD *v9; // [rsp+28h] [rbp-8h]
  _DWORD *v10; // [rsp+28h] [rbp-8h]

  for ( i = 1LL; i < a1; ++i )
  {
    for ( j = 1; j < dword_61037C; ++j )
    {
      v4 = 1;
      v8 = qword_610340;
      while ( v4 <= dword_61025C )
      {
        if ( !v8[4] )
          sub_4041F9((__int64)v8, v4);
        ++v4;
        v8 += 16;
      }
    }
    byte_610420 = 1;
    v5 = 1;
    v9 = qword_610340;
    while ( v5 <= dword_61025C )
    {
      if ( !v9[4] )
        sub_4041F9((__int64)v9, v5);
      ++v5;
      v9 += 16;
    }
    if ( byte_610241 )
    {
      v6 = 1;
      v10 = qword_610340;
      while ( v6 <= dword_61025C )
      {
        if ( v10[4] != 3 )
          v10[4] = 2;
        ++v6;
        v10 += 16;
      }
    }
    sub_40340C();
    byte_610420 = 0;
    if ( dword_6103A8 <= 0 )
    {
      v1 = gettext("starting page number %lu exceeds page count %lu");
      error(0, 0, v1, a1, i);
      return dword_6103A8 > 0;
    }
  }
  return dword_6103A8 > 0;
}
