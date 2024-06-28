#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401F31(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  _DWORD *v6; // rax
  unsigned __int64 result; // rax
  char v8; // [rsp+0h] [rbp-50h]
  int v9; // [rsp+8h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  unsigned __int64 i; // [rsp+48h] [rbp-8h]

  v9 = a6;
  v12 = a6;
  for ( i = a1; ; --i )
  {
    result = a2;
    if ( a2 >= i )
      break;
    v13 = (i - 1) * v9 / a1;
    v6 = a3++;
    sub_407DDE(a4, v12 - v13 + a5, *v6, v12 - v13 + a5, a5, a6, v8);
    v12 = v13;
  }
  return result;
}
