#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40380D(__int64 a1)
{
  const char *v1; // rax
  __int64 v2; // rax
  int result; // eax
  char v4; // [rsp+17h] [rbp-19h]
  unsigned __int8 v5; // [rsp+17h] [rbp-19h]
  int i; // [rsp+18h] [rbp-18h]
  int j; // [rsp+18h] [rbp-18h]
  int v8; // [rsp+1Ch] [rbp-14h]
  _DWORD *v9; // [rsp+20h] [rbp-10h]

  v8 = 0;
  sub_403E6E(a1, 1LL);
  sub_4019C6((__int64)"line = %d;", *(unsigned __int8 *)(a1 + 16));
  putchar_unlocked(10);
  dword_6132C8 = 0;
  v4 = 1;
  for ( i = 0; strcmp((&off_40E3A0)[3 * i], "min"); ++i )
  {
    if ( *(_BYTE *)(a1 + *(_QWORD *)&byte_40E3A8[24 * i + 8] + 17) != byte_40E3A8[24 * i] )
    {
      v4 = 0;
      v1 = (const char *)sub_4044C2(*(unsigned __int8 *)(a1 + *(_QWORD *)&byte_40E3A8[24 * i + 8] + 17));
      sub_4019C6((__int64)"%s = %s;", (&off_40E3A0)[3 * i], v1);
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
  {
    if ( v4 != 1 )
      putchar_unlocked(10);
  }
  else
  {
    sub_4019C6((__int64)"min = %lu; time = %lu;\n", *(unsigned __int8 *)(a1 + 23), *(unsigned __int8 *)(a1 + 22));
  }
  dword_6132C8 = 0;
  v5 = 1;
  for ( j = 0; (&off_40D860)[4 * j]; ++j )
  {
    if ( (dword_40D868[8 * j + 1] & 8) == 0 )
    {
      if ( dword_40D868[8 * j] != v8 )
      {
        if ( v5 != 1 )
        {
          putchar_unlocked(10);
          dword_6132C8 = 0;
          v5 = 1;
        }
        v8 = dword_40D868[8 * j];
      }
      v9 = (_DWORD *)sub_40374F(dword_40D868[8 * j], a1);
      if ( *(_QWORD *)&dword_40D868[8 * j + 4] )
        v2 = *(_QWORD *)&dword_40D868[8 * j + 4];
      else
        v2 = *(_QWORD *)&dword_40D868[8 * j + 2];
      if ( ((unsigned int)v2 & *v9) == *(_QWORD *)&dword_40D868[8 * j + 2] )
      {
        if ( (dword_40D868[8 * j + 1] & 2) != 0 )
        {
          sub_4019C6((__int64)"%s", (&off_40D860)[4 * j]);
          v5 = 0;
        }
      }
      else if ( (dword_40D868[8 * j + 1] & 5) == 5 )
      {
        sub_4019C6((__int64)"-%s", (&off_40D860)[4 * j]);
        v5 = 0;
      }
    }
  }
  result = v5 ^ 1;
  if ( v5 != 1 )
    result = putchar_unlocked(10);
  dword_6132C8 = 0;
  return result;
}
