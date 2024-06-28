#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AA63(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  bool v6; // [rsp+2Fh] [rbp-61h]
  __int16 v7; // [rsp+30h] [rbp-60h]
  unsigned int v8; // [rsp+34h] [rbp-5Ch]
  __int64 v9; // [rsp+38h] [rbp-58h]
  unsigned __int64 v10; // [rsp+40h] [rbp-50h]
  _BYTE *desta; // [rsp+48h] [rbp-48h]
  char *destb; // [rsp+48h] [rbp-48h]
  char *dest; // [rsp+48h] [rbp-48h]
  size_t n; // [rsp+50h] [rbp-40h]
  char *v15; // [rsp+58h] [rbp-38h]
  char *v16; // [rsp+60h] [rbp-30h]
  __int64 v17; // [rsp+68h] [rbp-28h]
  DIR *dirp; // [rsp+70h] [rbp-20h]
  struct dirent *v19; // [rsp+78h] [rbp-18h]
  char *s2; // [rsp+80h] [rbp-10h]
  unsigned __int64 v21; // [rsp+88h] [rbp-8h]

  v8 = 2;
  v9 = *a1;
  v10 = 1LL;
  v15 = (char *)sub_40B393(*a1);
  v16 = &v15[-v9];
  v17 = sub_40B3FC(v15);
  v7 = *(_WORD *)v15;
  *(_WORD *)v15 = 46;
  dirp = (DIR *)sub_40B18F(v9);
  *(_WORD *)v15 = v7;
  strcpy(&v15[v17], ".~1~");
  if ( !dirp )
    return 2LL;
  while ( 1 )
  {
    v19 = readdir(dirp);
    if ( !v19 )
      break;
    if ( v19->d_ino )
    {
      if ( strlen(v19->d_name) >= v17 + 4 && !memcmp(&v16[v9], v19->d_name, v17 + 2) )
      {
        s2 = &v19->d_name[v17 + 2];
        if ( *s2 > 48 && *s2 <= 57 )
        {
          v6 = *s2 == 57;
          for ( n = 1LL; (unsigned int)(s2[n] - 48) <= 9; ++n )
            v6 = v6 && s2[n] == 57;
          if ( s2[n] == 126 && !s2[n + 1] && (v10 < n || v10 == n && memcmp((const void *)(a3 + 2 + v9), s2, n) <= 0) )
          {
            v10 = v6 + n;
            v8 = v6;
            v21 = a3 + v10 + 3;
            if ( a2 <= v21 )
            {
              v9 = sub_4125D2(v9, 2LL, v21);
              a2 = 2 * v21;
            }
            *(_BYTE *)(v9 + a3) = 46;
            desta = (_BYTE *)(v9 + a3 + 2);
            *(_BYTE *)(v9 + a3 + 1) = 126;
            *desta = 48;
            destb = &desta[v6];
            memcpy(destb, s2, n + 2);
            for ( dest = &destb[n]; *--dest == 57; *dest = 48 )
              ;
            ++*dest;
          }
        }
      }
    }
  }
  closedir(dirp);
  *a1 = v9;
  return v8;
}
