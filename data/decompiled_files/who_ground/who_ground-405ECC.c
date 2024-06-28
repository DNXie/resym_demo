#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405ECC(const char *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  __int64 v4; // rdx
  _DWORD *v5; // rax
  struct utmpx *v6; // rsi
  unsigned int v7; // er8
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int16 *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  struct utmpx *v19; // [rsp+38h] [rbp-8h]

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  utmpxname(a1);
  setutxent();
  while ( 1 )
  {
    v19 = getutxent();
    if ( !v19 )
      break;
    if ( sub_405E29((__int64)v19, a4) )
    {
      if ( v17 == v16 )
        v18 = sub_405A7A(v18, &v16, 0x180uLL);
      v4 = v17++;
      v5 = (_DWORD *)(384 * v4 + v18);
      v6 = v19;
      v7 = 384;
      if ( ((((_BYTE)v4 << 7) + (_BYTE)v18) & 4) != 0 )
      {
        *v5++ = *(_DWORD *)&v19->ut_type;
        v6 = (struct utmpx *)((char *)v6 + 4);
        v7 = 380;
      }
      v8 = v7 >> 3;
      qmemcpy(v5, v6, 8 * v8);
      v10 = &v6->ut_type + 4 * v8;
      v9 = &v5[2 * v8];
      v11 = 0LL;
      if ( (v7 & 4) != 0 )
      {
        *v9 = *(_DWORD *)v10;
        v11 = 2LL;
      }
      if ( (v7 & 2) != 0 )
      {
        *(_WORD *)((char *)v9 + v11 * 2) = v10[v11];
        ++v11;
      }
      if ( (v7 & 1) != 0 )
        *((_BYTE *)v9 + v11 * 2) = v10[v11];
    }
  }
  endutxent();
  *a2 = v17;
  *a3 = v18;
  return 0LL;
}
