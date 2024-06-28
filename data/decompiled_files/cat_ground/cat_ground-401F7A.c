#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F7A(unsigned __int64 a1, __int64 a2, char *a3, unsigned __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10)
{
  char *v10; // rbx
  int *v11; // rax
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  const char *v16; // rbx
  int *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char v43; // [rsp+45h] [rbp-4Bh]
  char v44; // [rsp+46h] [rbp-4Ah]
  char v45; // [rsp+47h] [rbp-49h]
  int v46; // [rsp+48h] [rbp-48h] BYREF
  int v47; // [rsp+4Ch] [rbp-44h]
  char *v48; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-38h]
  unsigned __int64 v50; // [rsp+60h] [rbp-30h]
  void *src; // [rsp+68h] [rbp-28h]
  size_t n; // [rsp+70h] [rbp-20h]
  __int64 v53; // [rsp+78h] [rbp-18h]

  v47 = dword_60C32C;
  v44 = 1;
  v50 = a1;
  v49 = a1 + 1;
  v48 = a3;
LABEL_2:
  while ( 2 )
  {
    if ( &a3[a4] <= v48 )
    {
      src = a3;
      do
      {
        if ( sub_402F11(1LL, src, a4) != a4 )
        {
          v10 = gettext("write error");
          v11 = __errno_location();
          error(1, *v11, v10);
        }
        src = (char *)src + a4;
        n = v48 - (_BYTE *)src;
      }
      while ( a4 <= v48 - (_BYTE *)src );
      memmove(a3, src, n);
      v48 = &a3[n];
    }
    if ( v49 <= v50 )
    {
      if ( ++v47 > 0 )
      {
        if ( v47 > 1 )
        {
          v47 = 2;
          if ( a10 )
          {
            v18 = (char *)v49++;
            v43 = *v18;
            goto LABEL_38;
          }
        }
        if ( a7 && a8 != 1 )
        {
          sub_401D8D();
          v48 = stpcpy(v48, ::src);
        }
      }
      if ( a9 )
      {
        v19 = v48++;
        *v19 = 36;
      }
      v20 = v48++;
      *v20 = 10;
LABEL_37:
      v21 = (char *)v49++;
      v43 = *v21;
LABEL_38:
      if ( v43 == 10 )
        continue;
      if ( v47 >= 0 && a7 )
      {
        sub_401D8D();
        v48 = stpcpy(v48, ::src);
      }
      if ( a5 )
      {
        while ( 1 )
        {
          if ( (unsigned __int8)v43 <= 0x1Fu )
          {
            if ( v43 == 9 && a6 != 1 )
            {
              v31 = v48++;
              *v31 = 9;
            }
            else
            {
              if ( v43 == 10 )
              {
                v47 = -1;
                goto LABEL_2;
              }
              v32 = v48++;
              *v32 = 94;
              v33 = v48++;
              *v33 = v43 + 64;
            }
          }
          else if ( (unsigned __int8)v43 > 0x7Eu )
          {
            if ( v43 == 127 )
            {
              v23 = v48++;
              *v23 = 94;
              v24 = v48++;
              *v24 = 63;
            }
            else
            {
              v25 = v48++;
              *v25 = 77;
              v26 = v48++;
              *v26 = 45;
              if ( (unsigned __int8)v43 <= 0x9Fu )
              {
                v29 = v48++;
                *v29 = 94;
                v30 = v48++;
                *v30 = v43 - 64;
              }
              else
              {
                v27 = v48++;
                if ( v43 == -1 )
                {
                  *v27 = 94;
                  v28 = v48++;
                  *v28 = 63;
                }
                else
                {
                  *v27 = v43 + 0x80;
                }
              }
            }
          }
          else
          {
            v22 = v48++;
            *v22 = v43;
          }
          v34 = (char *)v49++;
          v43 = *v34;
        }
      }
      while ( 1 )
      {
        if ( v43 == 9 && a6 )
        {
          v35 = v48++;
          *v35 = 94;
          v36 = v48++;
          *v36 = 73;
        }
        else
        {
          if ( v43 == 10 )
          {
            v47 = -1;
            goto LABEL_2;
          }
          v37 = v48++;
          *v37 = v43;
        }
        v38 = (char *)v49++;
        v43 = *v38;
      }
    }
    break;
  }
  v45 = 0;
  v46 = 0;
  if ( v44 && ioctl(fildes, 0x541BuLL, &v46) < 0 )
  {
    if ( *__errno_location() != 95
      && *__errno_location() != 25
      && *__errno_location() != 22
      && *__errno_location() != 19
      && *__errno_location() != 38 )
    {
      v12 = sub_403AED(s1);
      v13 = gettext("cannot do ioctl on %s");
      v14 = __errno_location();
      error(0, *v14, v13, v12);
      dword_60C32C = v47;
      return 0LL;
    }
    v44 = 0;
  }
  if ( v46 )
    v45 = 1;
  if ( v45 != 1 )
    sub_401EF5((__int64)a3, &v48);
  v53 = sub_405285((unsigned int)fildes, a1, a2);
  if ( v53 == -1 )
  {
    v16 = s1;
    v17 = __errno_location();
    error(0, *v17, "%s", v16);
    sub_401EF5((__int64)a3, &v48);
    dword_60C32C = v47;
    return 0LL;
  }
  if ( v53 )
  {
    v49 = a1;
    v50 = a1 + v53;
    *(_BYTE *)(a1 + v53) = 10;
    goto LABEL_37;
  }
  sub_401EF5((__int64)a3, &v48);
  dword_60C32C = v47;
  return 1LL;
}
