#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403717(int a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  char v17[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  while ( a2 < a1 )
  {
    if ( **(_BYTE **)(8LL * a2 + a3) == 47 || **(_BYTE **)(8LL * a2 + a3) == 37 )
    {
      v16 = sub_403595(a2, **(_BYTE **)(8LL * a2 + a3) == 37, *(char **)(8LL * a2 + a3));
    }
    else
    {
      v16 = sub_403378();
      *(_DWORD *)(v16 + 24) = a2;
      if ( (unsigned int)sub_407663(*(_QWORD *)(8LL * a2 + a3), 0LL, 10LL, &v15, locale) )
      {
        v3 = *(_QWORD *)(8LL * a2 + a3);
        v4 = gettext("%s: invalid pattern");
        error(1, 0, v4, v3);
      }
      if ( !v15 )
      {
        v5 = *(_QWORD *)(8LL * a2 + a3);
        v6 = gettext("%s: line number must be greater than zero");
        error(1, 0, v6, v5);
      }
      if ( v15 < qword_60B450 )
      {
        v7 = sub_4046E3(qword_60B450, v17);
        v8 = sub_404873(*(_QWORD *)(8LL * a2 + a3));
        v9 = gettext("line number %s is smaller than preceding line number, %s");
        error(1, 0, v9, v8, v7);
      }
      if ( v15 == qword_60B450 )
      {
        v10 = sub_404873(*(_QWORD *)(8LL * a2 + a3));
        v11 = gettext("warning: line number %s is the same as preceding line number");
        error(0, 0, v11, v10);
      }
      qword_60B450 = v15;
      *(_QWORD *)(v16 + 8) = v15;
    }
    if ( a2 + 1 < a1 && **(_BYTE **)(8 * (a2 + 1LL) + a3) == 123 )
    {
      ++a2;
      sub_403481(a2, v16, *(_QWORD *)(8LL * a2 + a3));
    }
    ++a2;
  }
  return __readfsqword(0x28u) ^ v18;
}
