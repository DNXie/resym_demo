#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall fts_close(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // r12
  _QWORD *v3; // rax
  int v5; // [rsp+1Ch] [rbp-14h]

  v5 = 0;
  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD **)a1;
    while ( (__int64)v1[11] >= 0 )
    {
      v2 = v1;
      if ( v1[2] )
        v3 = (_QWORD *)v1[2];
      else
        v3 = (_QWORD *)v1[1];
      v1 = v3;
      free(v2);
    }
    free(v1);
  }
  if ( *(_QWORD *)(a1 + 8) )
    sub_407FD5(*(void **)(a1 + 8));
  free(*(void **)(a1 + 16));
  free(*(void **)(a1 + 32));
  if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
  {
    if ( *(int *)(a1 + 44) >= 0 && close(*(_DWORD *)(a1 + 44)) )
    {
LABEL_20:
      v5 = *__errno_location();
      goto LABEL_21;
    }
  }
  else if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
  {
    if ( fchdir(*(_DWORD *)(a1 + 40)) )
      v5 = *__errno_location();
    if ( close(*(_DWORD *)(a1 + 40)) && !v5 )
      goto LABEL_20;
  }
LABEL_21:
  sub_405C9C(a1 + 96);
  if ( *(_QWORD *)(a1 + 80) )
    sub_4094E2(*(_QWORD *)(a1 + 80));
  sub_405C4F(a1);
  free((void *)a1);
  if ( !v5 )
    return 0LL;
  *__errno_location() = v5;
  return 0xFFFFFFFFLL;
}
