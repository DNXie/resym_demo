#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4030C1(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, int *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 result; // rax
  bool v16; // [rsp+33h] [rbp-1Dh]
  int v17; // [rsp+34h] [rbp-1Ch]
  char *v18; // [rsp+38h] [rbp-18h]

  v17 = *a5;
  if ( *a5 == 2 )
  {
    v16 = *a3 == 0;
    v18 = (char *)a2[v16];
    v7 = a3[v16];
    if ( v7 == 1 )
    {
      --*a4;
      v10 = sub_402DEB((__int64)v18);
      sub_403040(&qword_60A200, v10);
    }
    else if ( v7 > 1 )
    {
      if ( v7 == 2 )
      {
        --a4[1];
        v11 = sub_402DEB((__int64)v18);
        sub_403040(&qword_60A208, v11);
      }
      else if ( v7 == 3 )
      {
        sub_402FC8(v18);
      }
    }
    else if ( !v7 )
    {
      v8 = sub_4041AE(a1);
      v9 = gettext("extra operand %s");
      error(0, 0, v9, v8);
      sub_4018E6(1);
    }
    if ( !v16 )
    {
      *a3 = a3[1];
      *a2 = a2[1];
    }
    v17 = 1;
  }
  a3[v17] = *a6;
  a2[v17] = a1;
  *a5 = v17 + 1;
  result = (unsigned int)*a6;
  if ( (_DWORD)result == 3 )
  {
    result = (unsigned __int64)a7;
    *a7 = 3;
  }
  return result;
}
