#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401DD4(const char *a1, __int64 a2, __int64 a3, long double a4, long double a5, long double a6)
{
  bool v9; // al
  int result; // eax
  bool v11; // al
  int v12; // er8
  int v13; // er9
  int v14; // er8
  int v15; // er9
  __int64 v16; // [rsp+8h] [rbp-88h]
  bool v18; // [rsp+3Ah] [rbp-56h]
  bool v19; // [rsp+3Bh] [rbp-55h]
  int v20; // [rsp+3Ch] [rbp-54h]
  char *s2; // [rsp+40h] [rbp-50h] BYREF
  char *s1; // [rsp+48h] [rbp-48h] BYREF
  long double v23; // [rsp+50h] [rbp-40h] BYREF
  long double v24; // [rsp+60h] [rbp-30h]
  long double v25; // [rsp+70h] [rbp-20h]
  long double v26; // [rsp+80h] [rbp-10h]

  if ( a5 >= 0.0 )
    v9 = a4 > a6;
  else
    v9 = a6 > a4;
  v18 = v9;
  result = !v9;
  if ( (_BYTE)result )
  {
    *(_QWORD *)&v24 = *(_QWORD *)&a4;
    DWORD2(v24) = DWORD2(a4);
    *(_QWORD *)&v25 = 0x8000000000000000LL;
    DWORD2(v25) = 0x3FFF;
    while ( 1 )
    {
      v26 = v24;
      printf(a1);
      if ( v18 )
        break;
      v24 = v25 * a5 + a4;
      v11 = a5 >= 0.0 ? v24 > a6 : a6 > v24;
      v18 = v11;
      if ( v11 )
      {
        v19 = 0;
        setlocale(1, "C");
        LODWORD(v16) = DWORD2(v24);
        v20 = sub_404DCD((unsigned int)&s2, (_DWORD)a1, DWORD2(v24), (unsigned int)&s2, v12, v13, *(_QWORD *)&v24, v16);
        setlocale(1, &byte_40B14F);
        if ( v20 < 0 )
          sub_404CE9();
        s2[v20 - a3] = 0;
        if ( (unsigned __int8)sub_404D1E(&s2[a2], 0LL, &v23, sub_4026F3) && a6 == v23 )
        {
          s1 = 0LL;
          LODWORD(v16) = DWORD2(v26);
          if ( (int)sub_404DCD(
                      (unsigned int)&s1,
                      (_DWORD)a1,
                      DWORD2(v26),
                      (unsigned int)&s1,
                      v14,
                      v15,
                      *(_QWORD *)&v26,
                      v16) < 0 )
            sub_404CE9();
          v19 = strcmp(s1, s2) != 0;
          free(s1);
        }
        free(s2);
        if ( !v19 )
          break;
      }
      fputs_unlocked(qword_60D288, stdout);
      v25 = v25 + 1.0;
    }
    result = fputc_unlocked(10, stdout);
  }
  return result;
}
