#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401EA1(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r12
  unsigned int v7; // er14
  __int64 v8; // r13
  char *v9; // rbx
  char *v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  result = (unsigned int)dword_60A348;
  if ( dword_60A348 != 2 )
  {
    if ( dword_60A348 == 1 || (result = (unsigned __int8)byte_60A304, byte_60A304) )
    {
      result = (unsigned __int8)byte_60A305[a3 - 1] ^ 1u;
      if ( byte_60A305[a3 - 1] != 1 )
      {
        v4 = a3 == 1 ? qword_60A200 : qword_60A208;
        result = sub_401D05(a1, a2, v4, v4);
        if ( (int)result > 0 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          if ( v12 && *(_BYTE *)(v12 - 1 + *(_QWORD *)(a2 + 16)) == 10 )
            --v12;
          v5 = 0x7FFFFFFF;
          if ( v12 <= 0x7FFFFFFF )
            v5 = v12;
          v6 = *(_QWORD *)(a2 + 16);
          v7 = v5;
          v8 = qword_60A2D0[a3 - 1];
          v9 = (&qword_60A2E0)[a3 - 1];
          v10 = gettext("%s:%ju: is not sorted: %.*s");
          error(dword_60A348 == 1, 0, v10, v9, v8, v7, v6);
          result = a3 - 1;
          byte_60A305[result] = 1;
        }
      }
    }
  }
  return result;
}
