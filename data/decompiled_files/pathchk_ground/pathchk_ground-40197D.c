#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40197D(char *a1, char a2, char a3)
{
  __int64 result; // rax
  char *v4; // rax
  int *v5; // rax
  const char *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  _BYTE *i; // rax
  __int64 v12; // rax
  char *j; // rax
  const char *v14; // rax
  int v15; // eax
  int *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  char v20; // [rsp+14h] [rbp-11Ch]
  char v21; // [rsp+15h] [rbp-11Bh]
  char v22; // [rsp+16h] [rbp-11Ah]
  char v23; // [rsp+17h] [rbp-119h]
  _BYTE *v24; // [rsp+18h] [rbp-118h]
  char *v25; // [rsp+18h] [rbp-118h]
  unsigned __int64 v26; // [rsp+20h] [rbp-110h]
  unsigned __int64 v27; // [rsp+28h] [rbp-108h]
  unsigned __int64 v28; // [rsp+30h] [rbp-100h]
  unsigned __int64 v29; // [rsp+38h] [rbp-F8h]
  char *path; // [rsp+40h] [rbp-F0h]
  __int64 v31; // [rsp+48h] [rbp-E8h]
  unsigned __int64 v32; // [rsp+60h] [rbp-D0h]
  char *v33; // [rsp+68h] [rbp-C8h]
  __int64 v34; // [rsp+70h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+78h] [rbp-B8h]
  struct stat stat_buf; // [rsp+90h] [rbp-A0h] BYREF

  v29 = strlen(a1);
  v21 = 0;
  if ( a3 && (unsigned __int8)sub_401774(a1) != 1 )
    return 0LL;
  if ( (a2 || a3) && !v29 )
  {
    v4 = gettext("empty file name");
    error(0, 0, v4);
    return 0LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int8)sub_40180B(a1, v29) != 1 )
      return 0LL;
  }
  else if ( (unsigned int)sub_404840(a1, &stat_buf) )
  {
    if ( *__errno_location() != 2 || !v29 )
    {
      v5 = __errno_location();
      error(0, *v5, "%s", a1);
      return 0LL;
    }
  }
  else
  {
    v21 = 1;
  }
  if ( !a2 && (v21 == 1 || v29 <= 0xFF) )
    goto LABEL_30;
  if ( a2 )
  {
    v26 = 256LL;
  }
  else
  {
    if ( *a1 == 47 )
      v6 = "/";
    else
      v6 = ".";
    path = (char *)v6;
    *__errno_location() = 0;
    v31 = pathconf(path, 4);
    if ( v31 < 0 && *__errno_location() )
    {
      v7 = gettext("%s: unable to determine maximum file name length");
      v8 = __errno_location();
      error(0, *v8, v7, path);
      return 0LL;
    }
    v26 = v31;
  }
  if ( v26 <= v29 )
  {
    v9 = sub_402238(a1);
    v10 = gettext("limit %lu exceeded by length %lu of file name %s");
    error(0, 0, v10, v26 - 1, v29, v9);
    result = 0LL;
  }
  else
  {
LABEL_30:
    v20 = a2;
    if ( a2 != 1 && v21 != 1 )
    {
      for ( i = sub_40191C(a1); ; i = sub_40191C(&v24[v32]) )
      {
        v24 = i;
        if ( !*i )
          break;
        v32 = sub_40193C((__int64)i);
        if ( v32 > 0xE )
        {
          v20 = 1;
          break;
        }
      }
    }
    if ( v20 )
    {
      v27 = 14LL;
      if ( a2 )
        v12 = 14LL;
      else
        v12 = 0LL;
      v28 = v12;
      for ( j = sub_40191C(a1); ; j = sub_40191C(&v25[v35]) )
      {
        v25 = j;
        if ( !*j )
          break;
        if ( v28 )
        {
          v27 = v28;
        }
        else
        {
          if ( j == a1 )
            v14 = ".";
          else
            v14 = a1;
          v33 = (char *)v14;
          v22 = *v25;
          *__errno_location() = 0;
          *v25 = 0;
          v34 = pathconf(v33, 3);
          *v25 = v22;
          if ( v34 < 0 )
          {
            v15 = *__errno_location();
            if ( v15 )
            {
              if ( v15 != 2 )
              {
                *v25 = 0;
                v16 = __errno_location();
                error(0, *v16, "%s", v33);
                *v25 = v22;
                return 0LL;
              }
              v28 = v27;
            }
            else
            {
              v27 = -1LL;
            }
          }
          else
          {
            v27 = v34;
          }
        }
        v35 = sub_40193C((__int64)v25);
        if ( v27 < v35 )
        {
          v23 = v25[v35];
          v25[v35] = 0;
          v17 = sub_402238(v25);
          v18 = gettext("limit %lu exceeded by length %lu of file name component %s");
          error(0, 0, v18, v27, v35, v17);
          v25[v35] = v23;
          return 0LL;
        }
      }
    }
    result = 1LL;
  }
  return result;
}
