#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40253B(FILE *a1)
{
  int result; // eax
  int v2; // ebx
  char v3; // [rsp+12h] [rbp-2Eh]
  char v4; // [rsp+13h] [rbp-2Dh]
  int c; // [rsp+14h] [rbp-2Ch]
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]
  signed __int64 v7; // [rsp+20h] [rbp-20h]

  v6 = 1LL;
  v3 = 0;
  result = getc_unlocked(a1);
  c = result;
  if ( result == -1 )
    return result;
  ungetc(result, a1);
  v2 = (unsigned __int8)byte_60B2CC;
  v4 = v2 ^ !sub_401BCF(1uLL, 0LL);
  while ( 1 )
  {
    while ( v6 != 1 || !v4 )
    {
LABEL_19:
      if ( c != -1 )
      {
        if ( sub_401BCF(v6, 0LL) )
        {
          if ( v3 )
            fwrite_unlocked(ptr, 1uLL, n, stdout);
          v3 = 1;
          while ( 1 )
          {
            c = getc_unlocked(a1);
            if ( c == (unsigned __int8)byte_60B2CE || c == 10 || c == -1 )
              break;
            putchar_unlocked(c);
          }
        }
        else
        {
          do
            c = getc_unlocked(a1);
          while ( c != (unsigned __int8)byte_60B2CE && c != 10 && c != -1 );
        }
      }
      if ( c == 10 )
      {
        c = getc_unlocked(a1);
        if ( c != -1 )
        {
          ungetc(c, a1);
          c = 10;
        }
      }
      if ( (unsigned __int8)byte_60B2CE == c )
      {
        ++v6;
      }
      else if ( c == 10 || c == -1 )
      {
        if ( v3 || (result = (unsigned __int8)byte_60B2CC ^ 1) != 0 || v6 != 1 )
          result = putchar_unlocked(10);
        if ( c == -1 )
          return result;
        v6 = 1LL;
        v3 = 0;
      }
    }
    v7 = sub_40319B((int)&qword_60B2A0, (int)&unk_60B2A8, 0, -1, (unsigned __int8)byte_60B2CE, 10, a1);
    if ( v7 < 0 )
      break;
    if ( !v7 )
      __assert_fail("n_bytes != 0", "../../src/src/cut.c", 0x274u, "cut_fields");
    if ( (unsigned __int8)sub_4017DD(*((_BYTE *)qword_60B2A0 + v7 - 1)) == byte_60B2CE )
    {
      if ( sub_401BCF(1uLL, 0LL) )
      {
        fwrite_unlocked(qword_60B2A0, 1uLL, v7 - 1, stdout);
        v3 = 1;
      }
      v6 = 2LL;
      goto LABEL_19;
    }
    if ( !byte_60B2CC )
    {
      fwrite_unlocked(qword_60B2A0, 1uLL, v7, stdout);
      if ( *((_BYTE *)qword_60B2A0 + v7 - 1) != 10 )
        putchar_unlocked(10);
    }
  }
  free(qword_60B2A0);
  qword_60B2A0 = 0LL;
  result = ferror_unlocked(a1);
  if ( !result )
  {
    result = feof_unlocked(a1);
    if ( !result )
      sub_40739E();
  }
  return result;
}
