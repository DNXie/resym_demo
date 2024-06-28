#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_407863(_BYTE *a1, char *a2)
{
  _BYTE *result; // rax
  bool v7; // al
  bool v8; // al
  bool v12; // al
  bool v13; // al
  size_t v14; // rax
  unsigned __int64 v15; // rax
  _BYTE *v16; // [rsp+8h] [rbp-1C8h]
  char v17; // [rsp+13h] [rbp-1BDh]
  char v18; // [rsp+14h] [rbp-1BCh]
  char v19; // [rsp+16h] [rbp-1BAh]
  __int64 v20; // [rsp+18h] [rbp-1B8h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-1B0h]
  unsigned __int64 v22; // [rsp+28h] [rbp-1A8h]
  unsigned __int64 v23; // [rsp+30h] [rbp-1A0h]
  unsigned __int64 j; // [rsp+38h] [rbp-198h]
  unsigned __int64 v25; // [rsp+40h] [rbp-190h]
  unsigned __int64 v26; // [rsp+48h] [rbp-188h]
  unsigned __int64 v27; // [rsp+50h] [rbp-180h]
  char *string; // [rsp+58h] [rbp-178h]
  _BYTE *v29; // [rsp+60h] [rbp-170h]
  _BYTE *i; // [rsp+68h] [rbp-168h]
  char v31[4]; // [rsp+70h] [rbp-160h] BYREF
  _BYTE v32[12]; // [rsp+74h] [rbp-15Ch] BYREF
  void *s2; // [rsp+80h] [rbp-150h]
  __int64 v34; // [rsp+88h] [rbp-148h]
  char v35; // [rsp+90h] [rbp-140h]
  int v36; // [rsp+94h] [rbp-13Ch]
  char v37[4]; // [rsp+B0h] [rbp-120h] BYREF
  int v38; // [rsp+B4h] [rbp-11Ch] BYREF
  char v39; // [rsp+BCh] [rbp-114h]
  char *v40; // [rsp+C0h] [rbp-110h]
  __int64 v41; // [rsp+C8h] [rbp-108h]
  char v42; // [rsp+D0h] [rbp-100h]
  int v43; // [rsp+D4h] [rbp-FCh]
  __int64 v44; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-D8h]
  void *s1; // [rsp+100h] [rbp-D0h]
  size_t n; // [rsp+108h] [rbp-C8h]
  __int64 v48; // [rsp+110h] [rbp-C0h]
  __int64 v49; // [rsp+118h] [rbp-B8h]
  __int64 v50; // [rsp+120h] [rbp-B0h]
  __int64 v51; // [rsp+128h] [rbp-A8h]
  __int64 v52; // [rsp+130h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+138h] [rbp-98h]
  void *v54; // [rsp+140h] [rbp-90h]
  size_t v55; // [rsp+148h] [rbp-88h]
  __int64 v56; // [rsp+150h] [rbp-80h]
  __int64 v57; // [rsp+158h] [rbp-78h]
  __int64 v58; // [rsp+160h] [rbp-70h]
  __int64 v59; // [rsp+168h] [rbp-68h]
  char v60[4]; // [rsp+170h] [rbp-60h] BYREF
  int v61; // [rsp+174h] [rbp-5Ch] BYREF
  char k; // [rsp+17Ch] [rbp-54h]
  void *v63; // [rsp+180h] [rbp-50h]
  __int64 v64; // [rsp+188h] [rbp-48h]
  char v65; // [rsp+190h] [rbp-40h]
  int v66; // [rsp+194h] [rbp-3Ch]
  unsigned __int64 v67; // [rsp+1B8h] [rbp-18h]

  v16 = a1;
  v67 = __readfsqword(0x28u);
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    if ( *a2 )
    {
      v18 = 1;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      string = a2;
      v19 = *a2;
      while ( 1 )
      {
        if ( !*v16 )
          return 0LL;
        if ( v18 && v25 > 9 && 5 * v25 <= v26 )
        {
          if ( string )
          {
            v14 = strnlen(string, v26 - v27);
            string += v14;
            if ( !*string )
              string = 0LL;
            v27 = v26;
          }
          if ( !string )
          {
            v15 = strlen(a2);
            if ( (unsigned __int8)sub_406ED2(v16, (__int64)a2, v15, &v20) )
              return (_BYTE *)v20;
            v18 = 0;
          }
        }
        ++v25;
        ++v26;
        if ( *v16 == v19 )
          break;
LABEL_96:
        ++v16;
      }
      v29 = v16 + 1;
      for ( i = a2 + 1; ; ++i )
      {
        if ( !*i )
          return v16;
        if ( !*v29 )
          break;
        ++v26;
        if ( *v29 != *i )
          goto LABEL_96;
        ++v29;
      }
      result = 0LL;
    }
    else
    {
      result = a1;
    }
  }
  else
  {
    s2 = a2;
    v31[0] = 0;
    memset(v32, 0, 8uLL);
    v32[8] = 0;
    sub_406CF2((__int64)v31);
    if ( v35 != 1 || v36 )
    {
      v17 = 1;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v40 = a2;
      v37[0] = 0;
      memset(&v38, 0, 8uLL);
      v39 = 0;
      s1 = a1;
      LOBYTE(v44) = 0;
      memset((char *)&v44 + 4, 0, sizeof(__int64));
      for ( BYTE4(v45) = 0; ; BYTE4(v45) = 0 )
      {
        sub_406CF2((__int64)&v44);
        if ( (unsigned __int8)v48 == 1 && !HIDWORD(v48) )
          return 0LL;
        if ( v17 && v21 > 9 && 5 * v21 <= v22 )
        {
          for ( j = v22 - v23; j; --j )
          {
            sub_406CF2((__int64)v37);
            if ( v42 == 1 && !v43 )
              break;
            v40 += v41;
            v39 = 0;
          }
          v23 = v22;
          sub_406CF2((__int64)v37);
          if ( v42 == 1 && !v43 )
          {
            if ( (unsigned __int8)sub_40711C(a1, a2, &v20) )
              return (_BYTE *)v20;
            v17 = 0;
          }
        }
        ++v21;
        ++v22;
        if ( (_BYTE)v48 && v35 )
        {
          v7 = HIDWORD(v48) == v36;
        }
        else
        {
          v8 = n == v34 && !memcmp(s1, s2, n);
          v7 = v8;
        }
        if ( v7 )
          break;
LABEL_71:
        s1 = (char *)s1 + n;
      }
      v52 = v44;
      v53 = v45;
      v55 = n;
      v56 = v48;
      v57 = v49;
      v58 = v50;
      v59 = v51;
      v54 = (char *)s1 + n;
      BYTE4(v53) = 0;
      v63 = a2;
      v60[0] = 0;
      memset(&v61, 0, 8uLL);
      k = 0;
      sub_406CF2((__int64)v60);
      if ( v65 == 1 && !v66 )
        abort();
      v63 = (char *)v63 + v64;
      for ( k = 0; ; k = 0 )
      {
        sub_406CF2((__int64)v60);
        if ( v65 == 1 && !v66 )
          return s1;
        sub_406CF2((__int64)&v52);
        if ( (unsigned __int8)v56 == 1 && !HIDWORD(v56) )
          break;
        ++v22;
        if ( (_BYTE)v56 && v65 )
        {
          v12 = HIDWORD(v56) != v66;
        }
        else
        {
          v13 = v55 != v64 || memcmp(v54, v63, v55);
          v12 = v13;
        }
        if ( v12 )
          goto LABEL_71;
        v54 = (char *)v54 + v55;
        BYTE4(v53) = 0;
        v63 = (char *)v63 + v64;
      }
      result = 0LL;
    }
    else
    {
      result = a1;
    }
  }
  return result;
}
