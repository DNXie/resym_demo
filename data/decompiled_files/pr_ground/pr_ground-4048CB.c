#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4048CB(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // eax
  int c; // [rsp+14h] [rbp-1Ch]
  int ca; // [rsp+14h] [rbp-1Ch]
  int cb; // [rsp+14h] [rbp-1Ch]
  unsigned int v7; // [rsp+18h] [rbp-18h]
  int v8; // [rsp+1Ch] [rbp-14h]
  int v9; // [rsp+20h] [rbp-10h]
  int v10; // [rsp+20h] [rbp-10h]
  int v11; // [rsp+24h] [rbp-Ch]
  char *v12; // [rsp+28h] [rbp-8h]

  c = getc_unlocked(*(FILE **)a1);
  v9 = dword_610398;
  if ( c == 12 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      c = getc_unlocked(*(FILE **)a1);
      if ( c == 10 )
        c = getc_unlocked(*(FILE **)a1);
    }
  }
  *(_BYTE *)(a1 + 57) = 0;
  if ( c != 10 )
  {
    if ( c == 12 )
    {
      ca = getc_unlocked(*(FILE **)a1);
      if ( ca != 10 )
        ungetc(ca, *(FILE **)a1);
      byte_610373 = 1;
      if ( byte_610377 && byte_610241 != 1 )
      {
        byte_6103E8 = 1;
        sub_40474A();
      }
      else if ( byte_610375 )
      {
        byte_610376 = 1;
      }
      goto LABEL_51;
    }
    if ( c == -1 )
    {
LABEL_17:
      sub_40325C((_QWORD *)a1);
      return 1LL;
    }
    v7 = sub_404E56((unsigned int)(char)c);
  }
  if ( byte_610380 && dword_610398 > dword_610384 )
  {
    dword_610398 = v9;
    return 0LL;
  }
  if ( *(__int64 (__fastcall **)(unsigned __int8))(a1 + 32) != sub_403ED4 )
  {
    byte_6103E8 = 1;
    if ( byte_610377 && byte_610241 != 1 )
      sub_40474A();
    if ( byte_610370 && byte_610371 )
    {
      v11 = dword_6103E0;
      dword_6103E0 = 0;
      v8 = 1;
      v12 = (char *)qword_610340;
      while ( v8 <= v11 )
      {
        sub_403849((__int64)v12);
        ++dword_6103E0;
        ++v8;
        v12 += 64;
      }
      dword_6103E4 = *(_DWORD *)(a1 + 52);
      if ( byte_610380 )
        dword_61038C = dword_610384;
      else
        dword_61038C = 0;
      byte_610371 = 0;
    }
    if ( dword_6103E4 - dword_6103DC > 0 )
    {
      sub_4040D2(dword_6103E4 - dword_6103DC);
      dword_6103E4 = 0;
    }
    if ( byte_6103D9 )
      sub_40441D();
  }
  if ( *(_BYTE *)(a1 + 56) )
    sub_403F34(a1);
  byte_610372 = 0;
  if ( c == 10 )
    return 1LL;
  while ( 1 )
  {
    sub_4044F5(a1, v7, (char *)qword_610418);
    v2 = getc_unlocked(*(FILE **)a1);
    if ( v2 == 10 )
      return 1LL;
    if ( v2 == 12 )
      break;
    if ( v2 == -1 )
      goto LABEL_17;
    v10 = dword_610398;
    v3 = sub_404E56((unsigned int)(char)v2);
    v7 = v3;
    if ( byte_610380 && dword_610398 > dword_610384 )
    {
      dword_610398 = v10;
      return 0LL;
    }
  }
  cb = getc_unlocked(*(FILE **)a1);
  if ( cb != 10 )
    ungetc(cb, *(FILE **)a1);
  if ( byte_610375 )
    byte_610376 = 1;
LABEL_51:
  sub_403385(a1);
  return 1LL;
}
