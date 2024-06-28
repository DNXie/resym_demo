#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall fts_open(const char **a1, int a2, __int64 a3)
{
  void *v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  bool v8; // al
  void *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // er8
  int v16; // er9
  const char **v18; // [rsp+8h] [rbp-58h]
  bool v19; // [rsp+1Fh] [rbp-41h]
  _QWORD *ptr; // [rsp+20h] [rbp-40h]
  _QWORD *v21; // [rsp+28h] [rbp-38h]
  unsigned __int64 v22; // [rsp+30h] [rbp-30h]
  size_t v23; // [rsp+38h] [rbp-28h]

  v18 = a1;
  ptr = 0LL;
  v21 = 0LL;
  if ( (a2 & 0xFFFFF000) != 0 || (a2 & 4) != 0 && (a2 & 0x200) != 0 || (a2 & 0x12) == 0 )
  {
    *__errno_location() = 22;
    return 0LL;
  }
  v4 = malloc(0x80uLL);
  v5 = (__int64)v4;
  if ( !v4 )
    return 0LL;
  memset(v4, 0, 0x80uLL);
  *(_QWORD *)(v5 + 64) = a3;
  *(_DWORD *)(v5 + 72) = a2;
  if ( (*(_DWORD *)(v5 + 72) & 2) != 0 )
  {
    *(_DWORD *)(v5 + 72) |= 4u;
    v6 = *(_DWORD *)(v5 + 72);
    BYTE1(v6) &= 0xFDu;
    *(_DWORD *)(v5 + 72) = v6;
  }
  *(_DWORD *)(v5 + 44) = -100;
  v22 = sub_40905A(a1);
  v7 = 4096LL;
  if ( v22 >= 0x1000 )
    v7 = v22;
  if ( (unsigned __int8)sub_408E7A(v5, v7) != 1 )
    goto LABEL_47;
  if ( *a1 )
  {
    ptr = (_QWORD *)sub_408D91(v5, &unk_40D06F, 0LL);
    if ( ptr )
    {
      ptr[11] = -1LL;
      goto LABEL_17;
    }
LABEL_46:
    free(*(void **)(v5 + 32));
LABEL_47:
    free((void *)v5);
    return 0LL;
  }
LABEL_17:
  v8 = !a3 || (*(_DWORD *)(v5 + 72) & 0x400) != 0;
  v19 = v8;
  v9 = 0LL;
  v10 = 0LL;
  while ( *v18 )
  {
    v23 = strlen(*v18);
    v11 = sub_408D91(v5, *v18, v23);
    v12 = (_QWORD *)v11;
    if ( !v11 )
      goto LABEL_45;
    *(_QWORD *)(v11 + 88) = 0LL;
    *(_QWORD *)(v11 + 8) = ptr;
    *(_QWORD *)(v11 + 48) = v11 + 264;
    if ( v19 && v9 )
    {
      *(_WORD *)(v11 + 112) = 11;
      sub_406B48(v11, 1);
    }
    else
    {
      *(_WORD *)(v11 + 112) = sub_408A48(v5, v11, 0LL);
    }
    if ( a3 )
    {
      v12[2] = v9;
      v9 = v12;
    }
    else
    {
      v12[2] = 0LL;
      if ( v9 )
        v21[2] = v12;
      else
        v9 = v12;
      v21 = v12;
    }
    ++v18;
    ++v10;
  }
  if ( a3 && v10 > 1 )
    v9 = (void *)sub_408C4A(v5, v9, v10);
  *(_QWORD *)v5 = sub_408D91(v5, &unk_40D06F, 0LL);
  if ( !*(_QWORD *)v5
    || (*(_QWORD *)(*(_QWORD *)v5 + 16LL) = v9,
        *(_WORD *)(*(_QWORD *)v5 + 112LL) = 9,
        (unsigned __int8)sub_406803(v5) ^ 1) )
  {
LABEL_45:
    sub_408E3F(v9);
    free(ptr);
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v5 + 72) & 4) == 0 && (*(_DWORD *)(v5 + 72) & 0x200) == 0 )
  {
    *(_DWORD *)(v5 + 40) = sub_406CB1(v5, (int)".", v13, v14, v15, v16);
    if ( *(int *)(v5 + 40) < 0 )
      *(_DWORD *)(v5 + 72) |= 4u;
  }
  sub_40B06F(v5 + 96, 0xFFFFFFFFLL);
  return v5;
}
