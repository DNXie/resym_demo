#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4058C1(char *a1, size_t a2, char *a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rax
  size_t v6; // rdx
  char *v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v12; // [rsp+0h] [rbp-1190h]
  char *s; // [rsp+8h] [rbp-1188h]
  size_t v14; // [rsp+10h] [rbp-1180h]
  char *src; // [rsp+18h] [rbp-1178h]
  bool v16; // [rsp+27h] [rbp-1169h]
  int v17; // [rsp+28h] [rbp-1168h]
  unsigned int v18; // [rsp+2Ch] [rbp-1164h]
  char *dest; // [rsp+30h] [rbp-1160h]
  unsigned __int64 size; // [rsp+38h] [rbp-1158h]
  void *ptr; // [rsp+40h] [rbp-1150h]
  unsigned __int64 v22; // [rsp+48h] [rbp-1148h]
  unsigned __int64 v23; // [rsp+50h] [rbp-1140h]
  unsigned __int64 v24; // [rsp+58h] [rbp-1138h]
  size_t n; // [rsp+60h] [rbp-1130h]
  size_t v26; // [rsp+68h] [rbp-1128h]
  char s1[16]; // [rsp+70h] [rbp-1120h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-1110h] BYREF
  char v29[152]; // [rsp+90h] [rbp-1100h] BYREF
  int v30; // [rsp+128h] [rbp-1068h]
  _DWORD v31[41]; // [rsp+12Ch] [rbp-1064h] BYREF
  char v32[4008]; // [rsp+1D0h] [rbp-FC0h] BYREF
  unsigned __int64 v33; // [rsp+1178h] [rbp-18h]

  src = a1;
  v14 = a2;
  s = a3;
  v12 = a4;
  v33 = __readfsqword(0x28u);
  v17 = 0;
  dest = v32;
  size = 4000LL;
  ptr = 0LL;
  v31[0] = dword_61DAC0[0];
  qmemcpy(&v31[1], &dword_61DAC0[1], 0x98uLL);
  qmemcpy(v29, v31, sizeof(v29));
  v30 = v31[38];
  if ( byte_61D5C8 )
  {
    v22 = (unsigned __int64)&a1[a2];
    v23 = (unsigned __int64)&a3[a4];
    while ( 1 )
    {
      v24 = 3 * (v12 + a2) + 2;
      if ( size < v24 )
      {
        v4 = 3 * (v12 + a2) + 2;
        if ( (3 * size) >> 1 >= v24 )
          v4 = (3 * size) >> 1;
        size = v4;
        free(ptr);
        ptr = malloc(size);
        dest = (char *)ptr;
        if ( !ptr )
        {
          dest = v32;
          size = 4000LL;
        }
      }
      if ( (unsigned __int64)src >= v22 )
        v5 = 0LL;
      else
        v5 = sub_4057E6(dest, src, size) + 1;
      n = v5;
      v16 = v5 <= size;
      if ( (unsigned __int64)s >= v23 )
      {
        v8 = 0LL;
      }
      else
      {
        if ( v5 > size )
          v6 = 0LL;
        else
          v6 = size - v5;
        if ( v5 > size )
          v7 = 0LL;
        else
          v7 = &dest[v5];
        v8 = sub_4057E6(v7, s, v6) + 1;
      }
      v26 = v8;
      if ( !v16 || n + v8 > size )
      {
        size = n + v8;
        if ( n + v8 <= 0x5555555555555554LL )
          size = (3 * size) >> 1;
        free(ptr);
        ptr = (void *)sub_414F92(size);
        dest = (char *)ptr;
        if ( (unsigned __int64)src < v22 )
          strxfrm((char *)ptr, src, n);
        if ( (unsigned __int64)s < v23 )
          strxfrm((char *)ptr + n, s, v26);
      }
      if ( (unsigned __int64)src < v22 )
        src += strlen(src) + 1;
      if ( (unsigned __int64)s < v23 )
        s += strlen(s) + 1;
      if ( (unsigned __int64)src >= v22 && (unsigned __int64)s >= v23 )
        break;
      sub_40D6EA(dest, n, v29);
      sub_40D6EA(&dest[n], v26, v31);
      if ( !v17 )
      {
        v9 = n;
        if ( v26 <= n )
          v9 = v26;
        v17 = memcmp(dest, &dest[n], v9);
        if ( !v17 )
          v17 = (n > v26) - (n < v26);
      }
    }
    v14 = n;
    src = dest;
    v12 = v26;
    s = &dest[n];
    sub_40D6EA(dest, n, v29);
  }
  else
  {
    sub_40D6EA(a1, a2, v29);
  }
  sub_40D3EF(v29, s1);
  sub_40D6EA(s, v12, v31);
  sub_40D3EF(v31, v28);
  v18 = memcmp(s1, v28, 0x10uLL);
  if ( !v18 )
  {
    if ( !v17 )
    {
      v10 = v14;
      if ( v12 <= v14 )
        v10 = v12;
      v17 = memcmp(src, s, v10);
      if ( !v17 )
        v17 = (v14 > v12) - (v14 < v12);
    }
    v18 = v17;
  }
  free(ptr);
  return v18;
}
