#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409FC8(int a1, _BYTE *a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // eax
  int *v7; // rax
  unsigned int v8; // eax
  int v9; // eax
  int *v10; // rax
  int v12; // [rsp+18h] [rbp-1018h]
  unsigned int v13; // [rsp+28h] [rbp-1008h]
  int v14; // [rsp+2Ch] [rbp-1004h]
  int v15; // [rsp+30h] [rbp-1000h]
  int v16; // [rsp+30h] [rbp-1000h]
  unsigned int v17; // [rsp+34h] [rbp-FFCh]
  char *ptr; // [rsp+38h] [rbp-FF8h]
  int v19[4]; // [rsp+40h] [rbp-FF0h] BYREF
  char v20[4040]; // [rsp+50h] [rbp-FE0h] BYREF
  unsigned __int64 v21; // [rsp+1018h] [rbp-18h]

  v12 = a4;
  v21 = __readfsqword(0x28u);
  v4 = a4;
  BYTE1(v4) = BYTE1(a4) & 0xFE;
  if ( v4 )
  {
    *__errno_location() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( a1 == -100 || *a2 == 47 )
  {
    if ( a4 == 256 )
      result = sub_40B14B(a2, a3);
    else
      result = sub_40B124(a2, a3);
  }
  else
  {
    ptr = (char *)sub_40C17F(v20, (unsigned int)a1, a2);
    if ( !ptr )
      goto LABEL_43;
    if ( v12 == 256 )
      v6 = sub_40B14B(ptr, a3);
    else
      v6 = sub_40B124(ptr, a3);
    v13 = v6;
    v14 = *__errno_location();
    if ( ptr != v20 )
      free(ptr);
    if ( v13 != -1 )
      return v13;
    if ( v14 == 20 || v14 == 2 || v14 == 1 || v14 == 13 || v14 == 38 || v14 == 95 )
    {
LABEL_43:
      if ( (unsigned int)sub_40A6E3(v19) )
      {
        v7 = __errno_location();
        sub_40A67B((unsigned int)*v7);
      }
      if ( a1 >= 0 && v19[0] == a1 )
      {
        sub_40A7A1(v19);
        *__errno_location() = 9;
        result = 0xFFFFFFFFLL;
      }
      else if ( fchdir(a1) )
      {
        v15 = *__errno_location();
        sub_40A7A1(v19);
        *__errno_location() = v15;
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( v12 == 256 )
          v8 = sub_40B14B(a2, a3);
        else
          v8 = sub_40B124(a2, a3);
        v17 = v8;
        if ( v8 == -1 )
          v9 = *__errno_location();
        else
          v9 = 0;
        v16 = v9;
        if ( (unsigned int)sub_40A76A(v19) )
        {
          v10 = __errno_location();
          sub_40A6AF((unsigned int)*v10);
        }
        sub_40A7A1(v19);
        if ( v16 )
          *__errno_location() = v16;
        result = v17;
      }
    }
    else
    {
      *__errno_location() = v14;
      result = 0xFFFFFFFFLL;
    }
  }
  return result;
}
