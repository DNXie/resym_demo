#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4041F9(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+17h] [rbp-19h]
  int c; // [rsp+18h] [rbp-18h]
  int ca; // [rsp+18h] [rbp-18h]
  int i; // [rsp+1Ch] [rbp-14h]
  char *v7; // [rsp+20h] [rbp-10h]
  FILE *stream; // [rsp+28h] [rbp-8h]

  stream = *(FILE **)a1;
  v3 = 0;
  c = getc_unlocked(*(FILE **)a1);
  if ( c == 12 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      c = getc_unlocked(stream);
      if ( c == 10 )
        c = getc_unlocked(stream);
    }
  }
  *(_BYTE *)(a1 + 57) = 0;
  if ( c == 12 )
    v3 = 1;
  if ( byte_610420 )
    *(_BYTE *)(a1 + 57) = 1;
  while ( c != 10 )
  {
    if ( c == 12 )
    {
      if ( byte_610420 )
      {
        if ( byte_610370 != 1 )
        {
          v7 = (char *)qword_610340;
          for ( i = dword_61025C; i; --i )
          {
            v7[57] = 0;
            v7 += 64;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 57) = 0;
        }
      }
      ca = getc_unlocked(stream);
      if ( ca != 10 )
        ungetc(ca, stream);
      sub_403385(a1);
      break;
    }
    if ( c == -1 )
    {
      sub_40325C((_QWORD *)a1);
      break;
    }
    c = getc_unlocked(stream);
  }
  result = (unsigned __int8)byte_610270;
  if ( byte_610270 )
  {
    result = (unsigned __int8)byte_610370 ^ 1u;
    if ( byte_610370 != 1 || a2 == 1 )
    {
      result = v3 ^ 1u;
      if ( v3 != 1 )
        result = (unsigned int)++dword_61026C;
    }
  }
  return result;
}
