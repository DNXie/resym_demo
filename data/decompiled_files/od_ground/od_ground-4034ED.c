#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4034ED(unsigned __int64 a1, char a2)
{
  char *s; // [rsp+10h] [rbp-40h]
  char *v5; // [rsp+18h] [rbp-38h]
  _BYTE v6[17]; // [rsp+37h] [rbp-19h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  v6[1] = 0;
  s = v6;
  v6[0] = a2;
  v5 = &v6[-dword_6122E4];
  switch ( dword_6122E0 )
  {
    case 10:
      do
      {
        *--s = a1 % 0xA + 48;
        a1 /= 0xAuLL;
      }
      while ( a1 );
      break;
    case 16:
      do
      {
        *--s = byte_40F7EF[a1 & 0xF];
        a1 >>= 4;
      }
      while ( a1 );
      break;
    case 8:
      do
      {
        *--s = (a1 & 7) + 48;
        a1 >>= 3;
      }
      while ( a1 );
      break;
  }
  while ( v5 < s )
    *--s = 48;
  fputs_unlocked(s, stdout);
  return __readfsqword(0x28u) ^ v7;
}
