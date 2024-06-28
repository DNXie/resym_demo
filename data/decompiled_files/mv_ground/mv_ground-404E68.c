#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_404E68(__int64 a1, __int64 a2, unsigned __int8 a3, _QWORD *a4, int a5, __int64 a6, char *a7, bool *a8)
{
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  _BOOL8 result; // rax
  bool v12; // bl
  size_t v13; // rax
  unsigned __int8 v18; // [rsp+5Ch] [rbp-84h] BYREF
  unsigned __int8 v19; // [rsp+5Dh] [rbp-83h] BYREF
  bool v20; // [rsp+5Eh] [rbp-82h]
  bool v21; // [rsp+5Fh] [rbp-81h]
  char *s; // [rsp+60h] [rbp-80h]
  void *v23; // [rsp+68h] [rbp-78h]
  void *v24; // [rsp+70h] [rbp-70h]
  void *ptr; // [rsp+78h] [rbp-68h]
  __int64 v26[12]; // [rsp+80h] [rbp-60h] BYREF

  v26[0] = *(_QWORD *)a6;
  v26[1] = *(_QWORD *)(a6 + 8);
  v26[2] = *(_QWORD *)(a6 + 16);
  v26[3] = *(_QWORD *)(a6 + 24);
  v26[4] = *(_QWORD *)(a6 + 32);
  v26[5] = *(_QWORD *)(a6 + 40);
  v26[6] = *(_QWORD *)(a6 + 48);
  v26[7] = *(_QWORD *)(a6 + 56);
  v26[8] = *(_QWORD *)(a6 + 64);
  v20 = 1;
  v23 = (void *)sub_40EE7D(a1);
  if ( v23 )
  {
    if ( *(_DWORD *)(a6 + 4) == 3 )
      HIDWORD(v26[0]) = 2;
    v21 = 0;
    for ( s = (char *)v23; *s; s += v13 + 1 )
    {
      v24 = (void *)sub_40B497(a1, s, 0LL);
      ptr = (void *)sub_40B497(a2, s, 0LL);
      v19 = *a7;
      v12 = v20;
      v20 = (v12 & (unsigned __int8)sub_406E71(
                                      (_DWORD)v24,
                                      (_DWORD)ptr,
                                      a3,
                                      *a4,
                                      a5,
                                      (unsigned int)v26,
                                      0,
                                      (__int64)&v19,
                                      (__int64)&v18,
                                      0LL)) != 0;
      *a8 = (*a8 | v18) != 0;
      free(ptr);
      free(v24);
      if ( v18 )
        break;
      v21 = (v21 | v19) != 0;
      v13 = strlen(s);
    }
    free(v23);
    *a7 = v21;
    result = v20;
  }
  else
  {
    v8 = sub_40D278(a1);
    v9 = gettext("cannot access %s");
    v10 = __errno_location();
    error(0, *v10, v9, v8);
    result = 0LL;
  }
  return result;
}
