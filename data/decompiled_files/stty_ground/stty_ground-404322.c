#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_404322(__int64 a1)
{
  char *result; // rax
  int i; // [rsp+14h] [rbp-Ch]
  int j; // [rsp+14h] [rbp-Ch]
  _DWORD *v4; // [rsp+18h] [rbp-8h]
  _DWORD *v5; // [rsp+18h] [rbp-8h]

  for ( i = 0; (&off_40E3A0)[3 * i]; ++i )
    *(_BYTE *)(a1 + *(_QWORD *)&byte_40E3A8[24 * i + 8] + 17) = byte_40E3A8[24 * i];
  for ( j = 0; ; ++j )
  {
    result = (&off_40D860)[4 * j];
    if ( !result )
      break;
    if ( (dword_40D868[8 * j + 1] & 1) != 0 )
    {
      v4 = (_DWORD *)sub_40374F(dword_40D868[8 * j], a1);
      *v4 = *(_QWORD *)&dword_40D868[8 * j + 2] | *v4 & ~(unsigned int)*(_QWORD *)&dword_40D868[8 * j + 4];
    }
    else if ( (dword_40D868[8 * j + 1] & 2) != 0 )
    {
      v5 = (_DWORD *)sub_40374F(dword_40D868[8 * j], a1);
      *v5 &= ~(unsigned int)*(_QWORD *)&dword_40D868[8 * j + 2] & ~(unsigned int)*(_QWORD *)&dword_40D868[8 * j + 4];
    }
  }
  return result;
}
