#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40386D(FILE *a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, void **a6)
{
  void **v6; // rbx
  unsigned __int64 v12; // [rsp+20h] [rbp-70h]
  unsigned __int64 v13; // [rsp+38h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-50h]
  void *ptr; // [rsp+48h] [rbp-48h]
  unsigned __int64 v16; // [rsp+50h] [rbp-40h]
  __int64 *v17; // [rsp+58h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp-30h]
  void *dest; // [rsp+68h] [rbp-28h]
  char v20; // [rsp+70h] [rbp-20h] BYREF

  v17 = (__int64 *)&v20;
  if ( a2 )
    v12 = a2 + 1;
  else
    v12 = 64LL;
  v13 = v12;
  v14 = sub_4042B1(v12, 8LL);
  ptr = (void *)sub_4042B1(v12, 8LL);
  v16 = 0LL;
  sub_403645(v17);
  while ( 1 )
  {
    v18 = sub_403666(a1, a3, a4, v17);
    if ( v16 >= v13 )
    {
      v14 = sub_40433B(v14, &v13, 8LL);
      ptr = (void *)sub_4042EF(ptr, v13, 8LL);
    }
    if ( v18 == -1 )
      break;
    dest = (void *)sub_4042B1(v18 + 1, 1LL);
    *((_QWORD *)ptr + v16) = v18;
    v6 = (void **)(8 * v16 + v14);
    *v6 = memcpy(dest, (const void *)v17[1], v18 + 1);
    ++v16;
  }
  *(_QWORD *)(8 * v16 + v14) = 0LL;
  *((_QWORD *)ptr + v16) = 0LL;
  free((void *)v17[1]);
  *a5 = v14;
  if ( a6 )
    *a6 = ptr;
  else
    free(ptr);
  return v16;
}
