#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404EA3(int a1, __int64 a2, size_t a3, __int64 a4)
{
  __int64 *v4; // rax
  void *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  bool v13; // [rsp+4Bh] [rbp-45h]
  int v14; // [rsp+4Ch] [rbp-44h]
  int v15; // [rsp+54h] [rbp-3Ch]
  __int64 *v16; // [rsp+58h] [rbp-38h]
  void *ptr; // [rsp+60h] [rbp-30h]
  __int64 v18; // [rsp+68h] [rbp-28h]
  unsigned __int64 v19; // [rsp+70h] [rbp-20h]
  unsigned __int64 v20; // [rsp+70h] [rbp-20h]
  unsigned __int64 v21; // [rsp+78h] [rbp-18h]

  v14 = *__errno_location();
  v16 = off_6091F0;
  if ( a1 < 0 )
    abort();
  if ( dword_6091D0 <= (unsigned int)a1 )
  {
    v18 = (unsigned int)(a1 + 1);
    v13 = off_6091F0 == &qword_6091E0;
    if ( off_6091F0 == &qword_6091E0 )
      v4 = 0LL;
    else
      v4 = off_6091F0;
    v16 = (__int64 *)sub_405EA2(v4, 16 * v18);
    off_6091F0 = v16;
    if ( v13 )
    {
      v5 = off_6091E8;
      *v16 = qword_6091E0;
      v16[1] = (__int64)v5;
    }
    memset(&v16[2 * (unsigned int)dword_6091D0], 0, 16 * (v18 - (unsigned int)dword_6091D0));
    dword_6091D0 = a1 + 1;
  }
  v19 = v16[2 * a1];
  ptr = (void *)v16[2 * a1 + 1];
  v15 = *(_DWORD *)(a4 + 4) | 1;
  v6 = v19;
  v21 = sub_403FAF((__int64)ptr, v19, a2, a3, *(_DWORD *)a4, v15, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v21 )
  {
    v20 = v21 + 1;
    v16[2 * a1] = v21 + 1;
    if ( ptr != &unk_6092A0 )
      free(ptr);
    v7 = 2LL * a1;
    v8 = &v16[v7];
    ptr = (void *)sub_405E53(v20, v6, v7 * 8);
    v8[1] = (__int64)ptr;
    sub_403FAF((__int64)ptr, v20, a2, a3, *(_DWORD *)a4, v15, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *__errno_location() = v14;
  return ptr;
}
