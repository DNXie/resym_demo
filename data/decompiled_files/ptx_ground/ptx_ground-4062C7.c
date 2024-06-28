#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4062C7(_BYTE *a1, __int64 a2)
{
  size_t v7; // rax
  unsigned __int8 v10; // [rsp+13h] [rbp-ADh]
  char v11; // [rsp+14h] [rbp-ACh]
  char v12; // [rsp+15h] [rbp-ABh]
  char v13; // [rsp+16h] [rbp-AAh]
  char v14; // [rsp+17h] [rbp-A9h]
  char *s; // [rsp+18h] [rbp-A8h]
  _BYTE *v16; // [rsp+20h] [rbp-A0h]
  char v17[4]; // [rsp+30h] [rbp-90h] BYREF
  int v18; // [rsp+34h] [rbp-8Ch] BYREF
  char v19; // [rsp+3Ch] [rbp-84h]
  unsigned __int64 v20; // [rsp+40h] [rbp-80h]
  __int64 v21; // [rsp+48h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-70h]
  __int64 v23; // [rsp+58h] [rbp-68h]
  __int64 v24; // [rsp+60h] [rbp-60h]
  __int64 v25; // [rsp+68h] [rbp-58h]
  unsigned __int64 v26; // [rsp+70h] [rbp-50h] BYREF
  __int64 v27; // [rsp+78h] [rbp-48h]
  wint_t wc[2]; // [rsp+80h] [rbp-40h]
  __int64 v29; // [rsp+88h] [rbp-38h]
  __int64 v30; // [rsp+90h] [rbp-30h]
  __int64 v31; // [rsp+98h] [rbp-28h]
  unsigned __int64 v32; // [rsp+B8h] [rbp-8h]

  v32 = __readfsqword(0x28u);
  s = (char *)sub_4088EF(a2, 2LL);
  v10 = 0;
  while ( *a1 )
  {
    v16 = (_BYTE *)sub_40B280(a1, s);
    if ( !v16 )
      break;
    if ( __ctype_get_mb_cur_max() <= 1 )
    {
      v13 = 1;
      if ( a1 < v16 && ((*__ctype_b_loc())[(unsigned __int8)*(v16 - 1)] & 8) != 0 )
        v13 = 0;
      v7 = strlen(s);
      v14 = 1;
      if ( v16[v7] && ((*__ctype_b_loc())[(unsigned __int8)v16[v7]] & 8) != 0 )
        v14 = 0;
      if ( v13 && v14 )
      {
        v10 = 1;
        break;
      }
      if ( !*v16 )
        break;
      a1 = v16 + 1;
    }
    else
    {
      v20 = (unsigned __int64)a1;
      v17[0] = 0;
      memset(&v18, 0, 8uLL);
      v19 = 0;
      v11 = 1;
      if ( v20 < (unsigned __int64)v16 )
      {
        do
        {
          sub_4060E7((__int64)v17);
          if ( (unsigned __int8)v22 == 1 && !HIDWORD(v22) )
            abort();
          v26 = v20;
          v27 = v21;
          *(_QWORD *)wc = v22;
          v29 = v23;
          v30 = v24;
          v31 = v25;
          v20 += v21;
          v19 = 0;
        }
        while ( v20 < (unsigned __int64)v16 );
        if ( LOBYTE(wc[0]) && iswalnum(wc[1]) )
          v11 = 0;
      }
      v20 = (unsigned __int64)v16;
      v17[0] = 0;
      memset(&v18, 0, 8uLL);
      v19 = 0;
      *(_QWORD *)wc = s;
      LOBYTE(v26) = 0;
      memset((char *)&v26 + 4, 0, sizeof(unsigned __int64));
      for ( BYTE4(v27) = 0; ; BYTE4(v27) = 0 )
      {
        sub_4060E7((__int64)&v26);
        if ( (unsigned __int8)v30 == 1 && !HIDWORD(v30) )
          break;
        sub_4060E7((__int64)v17);
        if ( (unsigned __int8)v22 == 1 && !HIDWORD(v22) )
          abort();
        v20 += v21;
        v19 = 0;
        *(_QWORD *)wc += v29;
      }
      v12 = 1;
      sub_4060E7((__int64)v17);
      if ( (unsigned __int8)v22 != 1 || HIDWORD(v22) )
      {
        v26 = v20;
        v27 = v21;
        *(_QWORD *)wc = v22;
        v29 = v23;
        v30 = v24;
        v31 = v25;
        if ( (_BYTE)v22 )
        {
          if ( iswalnum(wc[1]) )
            v12 = 0;
        }
      }
      if ( v11 && v12 )
      {
        v10 = 1;
        break;
      }
      v20 = (unsigned __int64)v16;
      v17[0] = 0;
      memset(&v18, 0, 8uLL);
      v19 = 0;
      sub_4060E7((__int64)v17);
      if ( (unsigned __int8)v22 == 1 && !HIDWORD(v22) )
        break;
      a1 = &v16[v21];
    }
  }
  free(s);
  return v10;
}
