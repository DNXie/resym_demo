#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4038C1()
{
  bool v1; // [rsp+Fh] [rbp-11h]
  int v2; // [rsp+10h] [rbp-10h]
  int v3; // [rsp+10h] [rbp-10h]
  int v4; // [rsp+14h] [rbp-Ch]
  int *i; // [rsp+18h] [rbp-8h]
  char *v6; // [rsp+18h] [rbp-8h]

  sub_40376D();
  if ( !(unsigned int)sub_401BCA() )
    return 0LL;
  if ( byte_610240 )
    byte_610377 = 1;
  byte_6103E8 = 0;
  v1 = 0;
  v4 = dword_61037C;
  if ( byte_6103D2 )
    v4 = 2 * dword_61037C;
LABEL_39:
  if ( v4 > 0 && (int)sub_401BCA() > 0 )
  {
    dword_610394 = 0;
    dword_61038C = 0;
    dword_6103E0 = 0;
    byte_6103E8 = 0;
    byte_610371 = 0;
    byte_610372 = 1;
    v2 = 1;
    for ( i = (int *)qword_610340; ; i += 16 )
    {
      if ( v2 > dword_61025C )
      {
LABEL_32:
        if ( byte_6103E8 )
        {
          putchar_unlocked(10);
          --v4;
        }
        if ( (int)sub_401BCA() > 0 || byte_610240 == 1 )
        {
          if ( byte_6103D2 && v1 )
          {
            putchar_unlocked(10);
            --v4;
          }
          goto LABEL_39;
        }
        goto LABEL_41;
      }
      dword_610398 = 0;
      if ( i[12] <= 0 && i[4] != 1 )
        break;
      byte_610373 = 0;
      dword_6103E4 = i[13];
      if ( (*((unsigned __int8 (__fastcall **)(int *))i + 3))(i) != 1 )
        sub_404169(i);
      v1 = (v1 | (unsigned __int8)byte_6103E8) != 0;
      if ( --i[12] <= 0 && (int)sub_401BCA() <= 0 )
        goto LABEL_32;
      if ( byte_610370 && i[4] )
      {
        if ( byte_610372 )
        {
          byte_610371 = 1;
          goto LABEL_28;
        }
        if ( i[4] == 3 || i[4] == 2 && byte_610373 )
          goto LABEL_27;
      }
LABEL_28:
      if ( byte_6103D9 )
        ++dword_6103E0;
      ++v2;
    }
    if ( !byte_610370 )
      goto LABEL_28;
    if ( byte_610372 )
    {
      byte_610371 = 1;
      goto LABEL_28;
    }
LABEL_27:
    sub_403849((__int64)i);
    goto LABEL_28;
  }
LABEL_41:
  if ( !v4 )
  {
    v3 = 1;
    v6 = (char *)qword_610340;
    while ( v3 <= dword_61025C )
    {
      if ( !*((_DWORD *)v6 + 4) )
        v6[57] = 1;
      ++v3;
      v6 += 64;
    }
  }
  byte_6103E8 = v1;
  if ( v1 && byte_610240 )
  {
    sub_404129((unsigned int)(v4 + 5));
  }
  else if ( byte_610375 && byte_610376 )
  {
    putchar_unlocked(12);
    byte_610376 = 0;
  }
  if ( ++qword_6103B0 > (unsigned __int64)qword_610260 )
    return 0LL;
  sub_40340C();
  return 1LL;
}
