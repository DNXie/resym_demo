#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_405631(__int64 a1, const char *a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  _QWORD *v7; // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 *v9; // [rsp+30h] [rbp-20h]
  _BYTE *ptr; // [rsp+40h] [rbp-10h]

  if ( (a3 & 0x10000000) != 0 && (unsigned __int8)sub_404CF7(a2, a3) )
  {
    if ( *(_QWORD *)(a1 + 8)
      && *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 1
      && ((a3 ^ *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL)) & 0x20000000) == 0 )
    {
      v7 = *(_QWORD **)(a1 + 8);
    }
    else
    {
      v7 = (_QWORD *)sub_40503C(a1, 1, a3);
    }
    v9 = v7 + 2;
    if ( v7[4] == v7[3] )
      *v9 = sub_40EA8D(v7[2], v7 + 3, 16LL);
    v3 = *v9;
    v4 = v7[4];
    v7[4] = v4 + 1;
    v4 *= 16LL;
    *(_QWORD *)(v3 + v4) = a2;
    *(_DWORD *)(v3 + v4 + 8) = a3;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8)
      || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL)
      || ((a3 ^ *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL)) & 0x60000018) != 0 )
    {
      v8 = sub_40503C(a1, 0, a3);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
    }
    ptr = (_BYTE *)sub_40ECA1(a2);
    if ( (a3 & 0x10000000) != 0 )
      sub_404D95(ptr);
    if ( (_BYTE *)sub_409DE7(*(_QWORD *)(v8 + 16), ptr) != ptr )
      free(ptr);
  }
}
