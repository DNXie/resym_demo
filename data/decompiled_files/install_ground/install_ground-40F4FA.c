#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40F4FA(int a1, __int64 a2, size_t a3, __int64 a4)
{
  __int64 v4; // rax
  void *v5; // rdx
  bool v9; // [rsp+4Bh] [rbp-45h]
  int v10; // [rsp+4Ch] [rbp-44h]
  int v11; // [rsp+54h] [rbp-3Ch]
  _QWORD *v12; // [rsp+58h] [rbp-38h]
  void *ptr; // [rsp+60h] [rbp-30h]
  __int64 v14; // [rsp+68h] [rbp-28h]
  unsigned __int64 v15; // [rsp+70h] [rbp-20h]
  unsigned __int64 v16; // [rsp+70h] [rbp-20h]
  unsigned __int64 v17; // [rsp+78h] [rbp-18h]

  v10 = *__errno_location();
  v12 = (_QWORD *)off_620410;
  if ( a1 < 0 )
    abort();
  if ( dword_6203F0 <= (unsigned int)a1 )
  {
    v14 = (unsigned int)(a1 + 1);
    v9 = off_620410 == (_QWORD)&qword_620400;
    if ( (__int64 *)off_620410 == &qword_620400 )
      v4 = 0LL;
    else
      v4 = off_620410;
    v12 = (_QWORD *)sub_412712(v4, 16 * v14);
    off_620410 = (__int64)v12;
    if ( v9 )
    {
      v5 = off_620408;
      *v12 = qword_620400;
      v12[1] = v5;
    }
    memset(&v12[2 * (unsigned int)dword_6203F0], 0, 16 * (v14 - (unsigned int)dword_6203F0));
    dword_6203F0 = a1 + 1;
  }
  v15 = v12[2 * a1];
  ptr = (void *)v12[2 * a1 + 1];
  v11 = *(_DWORD *)(a4 + 4) | 1;
  v17 = sub_40E606((__int64)ptr, v15, a2, a3, *(_DWORD *)a4, v11, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v15 <= v17 )
  {
    v16 = v17 + 1;
    v12[2 * a1] = v17 + 1;
    if ( ptr != &unk_622960 )
      free(ptr);
    ptr = (void *)sub_4126C3(v16);
    v12[2 * a1 + 1] = ptr;
    sub_40E606((__int64)ptr, v16, a2, a3, *(_DWORD *)a4, v11, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *__errno_location() = v10;
  return ptr;
}
