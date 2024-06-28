#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_403B87(unsigned __int8 *a1, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // rax
  int result; // eax
  int i; // [rsp+18h] [rbp-18h]
  int j; // [rsp+18h] [rbp-18h]
  int v7; // [rsp+1Ch] [rbp-14h]
  _DWORD *v8; // [rsp+20h] [rbp-10h]

  v7 = 0;
  sub_403E6E(a1, 1LL);
  sub_4035F0(1, a2);
  sub_4019C6((__int64)"line = %d;", a1[16]);
  putchar_unlocked(10);
  dword_6132C8 = 0;
  for ( i = 0; strcmp((&off_40E3A0)[3 * i], "min"); ++i )
  {
    v2 = (const char *)sub_4044C2(a1[*(_QWORD *)&byte_40E3A8[24 * i + 8] + 17]);
    sub_4019C6((__int64)"%s = %s;", (&off_40E3A0)[3 * i], v2);
  }
  sub_4019C6((__int64)"min = %lu; time = %lu;", a1[23], a1[22]);
  if ( dword_6132C8 )
    putchar_unlocked(10);
  dword_6132C8 = 0;
  for ( j = 0; (&off_40D860)[4 * j]; ++j )
  {
    if ( (dword_40D868[8 * j + 1] & 8) == 0 )
    {
      if ( dword_40D868[8 * j] != v7 )
      {
        putchar_unlocked(10);
        dword_6132C8 = 0;
        v7 = dword_40D868[8 * j];
      }
      v8 = (_DWORD *)sub_40374F(dword_40D868[8 * j], (__int64)a1);
      if ( *(_QWORD *)&dword_40D868[8 * j + 4] )
        v3 = *(_QWORD *)&dword_40D868[8 * j + 4];
      else
        v3 = *(_QWORD *)&dword_40D868[8 * j + 2];
      if ( ((unsigned int)v3 & *v8) == *(_QWORD *)&dword_40D868[8 * j + 2] )
      {
        sub_4019C6((__int64)"%s", (&off_40D860)[4 * j]);
      }
      else if ( (dword_40D868[8 * j + 1] & 4) != 0 )
      {
        sub_4019C6((__int64)"-%s", (&off_40D860)[4 * j]);
      }
    }
  }
  result = putchar_unlocked(10);
  dword_6132C8 = 0;
  return result;
}
