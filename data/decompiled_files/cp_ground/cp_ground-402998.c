#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402998(char *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  size_t v4; // rax
  void *v5; // rsp
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-88h] BYREF
  __int64 v20; // [rsp+10h] [rbp-80h]
  char *v21; // [rsp+18h] [rbp-78h]
  int v22; // [rsp+2Ch] [rbp-64h]
  __int64 i; // [rsp+30h] [rbp-60h]
  char *s; // [rsp+38h] [rbp-58h]
  size_t n; // [rsp+40h] [rbp-50h]
  void *dest; // [rsp+48h] [rbp-48h]
  char *file; // [rsp+50h] [rbp-40h]
  char *v28; // [rsp+58h] [rbp-38h]
  __int64 v29[6]; // [rsp+60h] [rbp-30h] BYREF

  v21 = a1;
  v20 = a2;
  v19 = a3;
  s = a1;
  v4 = strlen(a1);
  n = v4 + 1;
  v5 = alloca(16 * ((v4 + 31) / 0x10));
  dest = (void *)(16 * (((unsigned __int64)&v19 + 7) >> 4));
  file = (char *)memcpy(dest, a1, v4 + 1);
  v28 = &file[v20];
  for ( i = v19; i; i = *(_QWORD *)(i + 160) )
  {
    file[*(_QWORD *)(i + 152)] = 0;
    if ( a4[30] )
    {
      v29[0] = sub_4026E7(i);
      v29[1] = v6;
      v29[2] = sub_4026FD(i);
      v29[3] = v7;
      if ( (unsigned int)sub_411A09(file, v29) )
      {
        v8 = sub_40E491(file);
        v9 = gettext("failed to preserve times for %s");
        v10 = __errno_location();
        error(0, *v10, v9, v8);
        return 0LL;
      }
    }
    if ( a4[28] && lchown(file, *(_DWORD *)(i + 28), *(_DWORD *)(i + 32)) )
    {
      if ( (unsigned __int8)sub_409AE5(a4) != 1 )
      {
        v12 = sub_40E491(file);
        v13 = gettext("failed to preserve ownership for %s");
        v14 = __errno_location();
        error(0, *v14, v13, v12);
        return 0LL;
      }
      v22 = lchown(file, 0xFFFFFFFF, *(_DWORD *)(i + 32));
    }
    if ( a4[29] )
    {
      if ( (unsigned int)sub_40A631(v28, 0xFFFFFFFFLL, file, 0xFFFFFFFFLL, *(unsigned int *)(i + 24)) )
        return 0LL;
    }
    else if ( *(_BYTE *)(i + 144) && chmod(file, *(_DWORD *)(i + 24)) )
    {
      v15 = sub_40E491(file);
      v16 = gettext("failed to preserve permissions for %s");
      v17 = __errno_location();
      error(0, *v17, v16, v15);
      return 0LL;
    }
    file[*(_QWORD *)(i + 152)] = 47;
  }
  return 1LL;
}
