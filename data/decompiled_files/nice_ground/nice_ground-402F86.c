#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_402F86(int a1, __int64 a2, size_t a3, __int64 a4)
{
  __int64 *v4; // rax
  void *v5; // rdx
  bool v9; // [rsp+4Bh] [rbp-45h]
  int v10; // [rsp+4Ch] [rbp-44h]
  int v11; // [rsp+54h] [rbp-3Ch]
  __int64 *v12; // [rsp+58h] [rbp-38h]
  void *ptr; // [rsp+60h] [rbp-30h]
  __int64 v14; // [rsp+68h] [rbp-28h]
  unsigned __int64 v15; // [rsp+70h] [rbp-20h]
  unsigned __int64 v16; // [rsp+70h] [rbp-20h]
  unsigned __int64 v17; // [rsp+78h] [rbp-18h]

  v10 = *__errno_location();
  v12 = off_6071D0;
  if ( a1 < 0 )
    abort();
  if ( dword_6071B0 <= (unsigned int)a1 )
  {
    v14 = (unsigned int)(a1 + 1);
    v9 = off_6071D0 == &qword_6071C0;
    if ( off_6071D0 == &qword_6071C0 )
      v4 = 0LL;
    else
      v4 = off_6071D0;
    v12 = (__int64 *)sub_403F85(v4, 16 * v14);
    off_6071D0 = v12;
    if ( v9 )
    {
      v5 = off_6071C8;
      *v12 = qword_6071C0;
      v12[1] = (__int64)v5;
    }
    memset(&v12[2 * (unsigned int)dword_6071B0], 0, 16 * (v14 - (unsigned int)dword_6071B0));
    dword_6071B0 = a1 + 1;
  }
  v15 = v12[2 * a1];
  ptr = (void *)v12[2 * a1 + 1];
  v11 = *(_DWORD *)(a4 + 4) | 1;
  v17 = sub_402092((__int64)ptr, v15, a2, a3, *(_DWORD *)a4, v11, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v15 <= v17 )
  {
    v16 = v17 + 1;
    v12[2 * a1] = v17 + 1;
    if ( ptr != &unk_6072A0 )
      free(ptr);
    ptr = (void *)sub_403F36(v16);
    v12[2 * a1 + 1] = (__int64)ptr;
    sub_402092((__int64)ptr, v16, a2, a3, *(_DWORD *)a4, v11, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *__errno_location() = v10;
  return ptr;
}
