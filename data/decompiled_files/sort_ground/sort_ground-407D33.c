#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407D33(char *a1, char a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  unsigned __int8 v8; // [rsp+1Eh] [rbp-D2h]
  _BYTE v9[9]; // [rsp+1Fh] [rbp-D1h]
  __int64 v10; // [rsp+28h] [rbp-C8h]
  unsigned __int64 v11; // [rsp+30h] [rbp-C0h]
  FILE *v12; // [rsp+38h] [rbp-B8h]
  __int64 v13; // [rsp+40h] [rbp-B0h]
  unsigned __int64 v14; // [rsp+48h] [rbp-A8h]
  __int64 v15; // [rsp+58h] [rbp-98h]
  void *ptr[4]; // [rsp+60h] [rbp-90h] BYREF
  void *v17[2]; // [rsp+80h] [rbp-70h] BYREF
  __int64 v18; // [rsp+90h] [rbp-60h]
  char v19[24]; // [rsp+C0h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp-18h]

  v20 = __readfsqword(0x28u);
  v12 = sub_4035C5(a1, "r");
  v9[8] = 0;
  v10 = 0LL;
  v13 = qword_61DA08;
  *(_QWORD *)v9 = byte_61DA02 == 0;
  v9[0] = byte_61DA02 == 0;
  v8 = 1;
  v2 = qword_61D9E0;
  if ( qword_61D9E0 < (unsigned __int64)qword_61D4E0 )
    v2 = qword_61D4E0;
  sub_404989((__int64)v17, 32LL, v2);
  ptr[0] = 0LL;
  while ( (unsigned __int8)sub_404DA9(v17, v12, a1) )
  {
    v11 = sub_404A3F(v17);
    v14 = -32 * v18 + v11;
    if ( *(_QWORD *)&v9[1] && v9[0] <= (int)sub_407AC9((unsigned __int8 **)ptr, (unsigned __int8 **)(v11 - 32)) )
    {
LABEL_6:
      if ( a2 == 99 )
      {
        v15 = ((__int64)(sub_404A3F(v17) - (v11 - 32)) >> 5) + v10;
        v3 = sub_410B71(v15, v19);
        v4 = qword_61DBB0;
        v5 = gettext("%s: %s:%s: disorder: ");
        fprintf(stderr, v5, v4, a1, v3);
        v6 = gettext("standard error");
        sub_407C0F((void **)(v11 - 32), stderr, v6);
      }
      v8 = 0;
      break;
    }
    while ( 1 )
    {
      v11 -= 32LL;
      if ( v11 <= v14 )
        break;
      if ( v9[0] <= (int)sub_407AC9((unsigned __int8 **)v11, (unsigned __int8 **)(v11 - 32)) )
        goto LABEL_6;
    }
    v10 += v18;
    if ( *(_QWORD *)(v11 + 8) > *(_QWORD *)&v9[1] )
    {
      while ( 1 )
      {
        *(_QWORD *)&v9[1] *= 2LL;
        if ( !*(_QWORD *)&v9[1] )
          break;
        if ( *(_QWORD *)(v11 + 8) <= *(_QWORD *)&v9[1] )
          goto LABEL_16;
      }
      *(_QWORD *)&v9[1] = *(_QWORD *)(v11 + 8);
LABEL_16:
      free(ptr[0]);
      ptr[0] = (void *)sub_414F92(*(_QWORD *)&v9[1]);
    }
    memcpy(ptr[0], *(const void **)v11, *(_QWORD *)(v11 + 8));
    ptr[1] = *(void **)(v11 + 8);
    if ( v13 )
    {
      ptr[2] = (char *)ptr[0] + *(_QWORD *)(v11 + 16) - *(_QWORD *)v11;
      ptr[3] = (char *)ptr[0] + *(_QWORD *)(v11 + 24) - *(_QWORD *)v11;
    }
  }
  sub_403612(v12, a1);
  free(v17[0]);
  free(ptr[0]);
  return v8;
}
