#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 **__fastcall sub_4090DC(unsigned __int8 **a1, unsigned __int64 a2, unsigned __int8 **a3, unsigned __int8 a4)
{
  unsigned __int8 **result; // rax
  unsigned __int8 **v5; // rax
  unsigned __int8 **v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 **v8; // rdx
  unsigned __int8 **v9; // rdx
  unsigned __int8 **v10; // rdx
  __int64 v11; // rax
  unsigned __int8 **v12; // rdx
  int v15; // [rsp+2Ch] [rbp-34h]
  unsigned __int64 v16; // [rsp+40h] [rbp-20h]

  if ( a2 == 2 )
  {
    result = (unsigned __int8 **)((int)sub_407AC9(a1 - 4, a1 - 8) > 0);
    v15 = (int)result;
    if ( a4 )
    {
      v5 = a3 - 4;
      v6 = &a1[4 * ~v15];
      *v5 = *v6;
      v5[1] = v6[1];
      v5[2] = v6[2];
      v5[3] = v6[3];
      result = a3 - 8;
      v7 = 4LL * (v15 - 2);
      *result = a1[v7];
      result[1] = a1[v7 + 1];
      result[2] = a1[v7 + 2];
      result[3] = a1[v7 + 3];
    }
    else if ( (_DWORD)result )
    {
      v8 = a3 - 4;
      *v8 = *(a1 - 4);
      v8[1] = *(a1 - 3);
      v8[2] = *(a1 - 2);
      v8[3] = *(a1 - 1);
      v9 = a1 - 4;
      *v9 = *(a1 - 8);
      v9[1] = *(a1 - 7);
      v9[2] = *(a1 - 6);
      v9[3] = *(a1 - 5);
      v10 = a1 - 8;
      *v10 = *(a3 - 4);
      v10[1] = *(a3 - 3);
      v10[2] = *(a3 - 2);
      result = (unsigned __int8 **)*(a3 - 1);
      v10[3] = (unsigned __int8 *)result;
    }
  }
  else
  {
    v16 = a2 >> 1;
    if ( a4 )
      v11 = 0x1FFFFFFFFFFFFFFCLL * v16;
    else
      v11 = 0LL;
    sub_4090DC(&a1[-4 * (a2 >> 1)], a2 - (a2 >> 1), &a3[v11], a4);
    if ( v16 <= 1 )
    {
      if ( a4 != 1 )
      {
        v12 = a3 - 4;
        *v12 = *(a1 - 4);
        v12[1] = *(a1 - 3);
        v12[2] = *(a1 - 2);
        v12[3] = *(a1 - 1);
      }
    }
    else
    {
      sub_4090DC(a1, v16, a3, a4 == 0);
    }
    if ( a4 )
      result = sub_408FB4(a3, a2, a1);
    else
      result = sub_408FB4(a1, a2, a3);
  }
  return result;
}
