#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408615(int a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  int *v4; // rax
  int v5; // eax
  int *v6; // rax
  unsigned int v8; // [rsp+28h] [rbp-1008h]
  int v9; // [rsp+2Ch] [rbp-1004h]
  int v10; // [rsp+30h] [rbp-1000h]
  int v11; // [rsp+30h] [rbp-1000h]
  unsigned int v12; // [rsp+34h] [rbp-FFCh]
  char *ptr; // [rsp+38h] [rbp-FF8h]
  int v14[4]; // [rsp+40h] [rbp-FF0h] BYREF
  char v15[4040]; // [rsp+50h] [rbp-FE0h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  if ( a1 == -100 || *a2 == 47 )
    return sub_4080BD(a2, a3);
  ptr = (char *)sub_40BC6C(v15, (unsigned int)a1, a2);
  if ( !ptr )
    goto LABEL_33;
  v8 = sub_4080BD(ptr, a3);
  v9 = *__errno_location();
  if ( ptr != v15 )
    free(ptr);
  if ( v8 != -1 )
    return v8;
  if ( v9 == 20 || v9 == 2 || v9 == 1 || v9 == 13 || v9 == 38 || v9 == 95 )
  {
LABEL_33:
    if ( (unsigned int)sub_40AAD2(v14) )
    {
      v4 = __errno_location();
      sub_40A956((unsigned int)*v4);
    }
    if ( a1 >= 0 && v14[0] == a1 )
    {
      sub_40AB90(v14);
      *__errno_location() = 9;
      result = 0xFFFFFFFFLL;
    }
    else if ( fchdir(a1) )
    {
      v10 = *__errno_location();
      sub_40AB90(v14);
      *__errno_location() = v10;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = sub_4080BD(a2, a3);
      if ( v12 == -1 )
        v5 = *__errno_location();
      else
        v5 = 0;
      v11 = v5;
      if ( (unsigned int)sub_40AB59(v14) )
      {
        v6 = __errno_location();
        sub_40A98A((unsigned int)*v6);
      }
      sub_40AB90(v14);
      if ( v11 )
        *__errno_location() = v11;
      result = v12;
    }
  }
  else
  {
    *__errno_location() = v9;
    result = 0xFFFFFFFFLL;
  }
  return result;
}
