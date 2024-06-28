#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4039D3(char *a1, size_t a2, unsigned int a3, const char *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  const char *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  bool v39; // [rsp+3Fh] [rbp-41h]
  void *ptr; // [rsp+48h] [rbp-38h]
  struct passwd *v42; // [rsp+50h] [rbp-30h]
  struct group *v43; // [rsp+58h] [rbp-28h]
  time_t v44; // [rsp+60h] [rbp-20h]

  v39 = 0;
  if ( a3 == 98 )
  {
    sub_402D84(a1, a2, *(_QWORD *)(a5 + 64));
    return v39;
  }
  if ( a3 > 0x62 )
  {
    if ( a3 == 111 )
    {
      if ( *(__int64 *)(a5 + 56) <= 0 || *(_QWORD *)(a5 + 56) > 0x2000000000000000uLL )
        v16 = 512LL;
      else
        v16 = *(_QWORD *)(a5 + 56);
      sub_402D84(a1, a2, v16);
      return v39;
    }
    if ( a3 > 0x6F )
    {
      if ( a3 == 119 )
      {
        v44 = sub_40228B(a5);
        if ( v17 >= 0 )
        {
          v18 = sub_402BA9(v44, v17);
          sub_402CF4(a1, a2, (__int64)v18);
        }
        else
        {
          sub_402CF4(a1, a2, (__int64)"-");
        }
        return v39;
      }
      if ( a3 > 0x77 )
      {
        if ( a3 == 121 )
        {
          v28 = sub_402275(a5);
          v30 = sub_402BA9(v28, v29);
          sub_402CF4(a1, a2, (__int64)v30);
        }
        else if ( a3 < 0x79 )
        {
          v23 = sub_402249(a5);
          v25 = sub_402BA9(v23, v24);
          sub_402CF4(a1, a2, (__int64)v25);
        }
        else
        {
          if ( a3 != 122 )
            goto LABEL_91;
          v33 = sub_40225F(a5);
          v35 = sub_402BA9(v33, v34);
          sub_402CF4(a1, a2, (__int64)v35);
        }
      }
      else
      {
        switch ( a3 )
        {
          case 't':
            v14 = gnu_dev_major(*(_QWORD *)(a5 + 40));
            sub_402E14(a1, a2, v14);
            break;
          case 'u':
            sub_402D84(a1, a2, *(unsigned int *)(a5 + 28));
            break;
          case 's':
            sub_402D84(a1, a2, *(_QWORD *)(a5 + 48));
            break;
          default:
            goto LABEL_91;
        }
      }
    }
    else if ( a3 == 104 )
    {
      sub_402D84(a1, a2, *(_QWORD *)(a5 + 16));
    }
    else if ( a3 > 0x68 )
    {
      if ( a3 == 109 )
      {
        v39 = (unsigned __int8)sub_403844(a4, a1, a2, a5) != 0;
      }
      else if ( a3 > 0x6D )
      {
        sub_402CF4(a1, a2, (__int64)a4);
      }
      else
      {
        if ( a3 != 105 )
          goto LABEL_91;
        sub_402D84(a1, a2, *(_QWORD *)(a5 + 8));
      }
    }
    else if ( a3 == 102 )
    {
      sub_402E14(a1, a2, *(unsigned int *)(a5 + 24));
    }
    else if ( a3 > 0x66 )
    {
      sub_402D84(a1, a2, *(unsigned int *)(a5 + 32));
    }
    else
    {
      if ( a3 != 100 )
        goto LABEL_91;
      sub_402D84(a1, a2, *(_QWORD *)a5);
    }
    return v39;
  }
  if ( a3 == 78 )
  {
    v5 = sub_405DD3(a4);
    sub_402CF4(a1, a2, v5);
    if ( (*(_DWORD *)(a5 + 24) & 0xF000) == 40960 )
    {
      ptr = (void *)sub_405381(a4, *(_QWORD *)(a5 + 48));
      if ( !ptr )
      {
        v6 = sub_405DD3(a4);
        v7 = gettext("cannot read symbolic link %s");
        v8 = __errno_location();
        error(0, *v8, v7, v6);
        return 1LL;
      }
      printf(" -> ");
      v10 = sub_405DD3(ptr);
      sub_402CF4(a1, a2, v10);
      free(ptr);
    }
    return v39;
  }
  if ( a3 > 0x4E )
  {
    if ( a3 == 88 )
    {
      v26 = sub_402249(a5);
      sub_402EAC(a1, a2, a5, v26, v27);
      return v39;
    }
    if ( a3 > 0x58 )
    {
      if ( a3 == 90 )
      {
        v36 = sub_40225F(a5);
        sub_402EAC(a1, a2, a5, v36, v37);
      }
      else if ( a3 < 0x5A )
      {
        v31 = sub_402275(a5);
        sub_402EAC(a1, a2, a5, v31, v32);
      }
      else
      {
        if ( a3 != 97 )
          goto LABEL_91;
        sub_402DCC(a1, a2, *(_DWORD *)(a5 + 24) & 0xFFF);
      }
      return v39;
    }
    if ( a3 != 85 )
    {
      if ( a3 == 87 )
      {
        v19 = sub_40228B(a5);
        v21 = sub_403991(v19, v20);
        sub_402EAC(a1, a2, a5, v21, v22);
      }
      else
      {
        if ( a3 != 84 )
          goto LABEL_91;
        v15 = gnu_dev_minor(*(_QWORD *)(a5 + 40));
        sub_402E14(a1, a2, v15);
      }
      return v39;
    }
    setpwent();
    v42 = getpwuid(*(_DWORD *)(a5 + 28));
    if ( v42 )
      v13 = v42->pw_name;
    else
      v13 = "UNKNOWN";
    goto LABEL_64;
  }
  if ( a3 == 67 )
    return (unsigned __int8)sub_4032E6(a1, a2, (__int64)a4) != 0;
  if ( a3 > 0x43 )
  {
    if ( a3 == 70 )
    {
      v12 = sub_4057EA(a5);
      sub_402CF4(a1, a2, v12);
      return v39;
    }
    if ( a3 != 71 )
    {
      if ( a3 != 68 )
        goto LABEL_91;
      sub_402E14(a1, a2, *(_QWORD *)a5);
      return v39;
    }
    setgrent();
    v43 = getgrgid(*(_DWORD *)(a5 + 32));
    if ( v43 )
      v13 = v43->gr_name;
    else
      v13 = "UNKNOWN";
LABEL_64:
    sub_402CF4(a1, a2, (__int64)v13);
    return v39;
  }
  if ( a3 == 65 )
  {
    v11 = sub_402B7E(a5);
    sub_402CF4(a1, a2, (__int64)v11);
  }
  else
  {
    if ( a3 != 66 )
    {
LABEL_91:
      fputc_unlocked(63, stdout);
      return v39;
    }
    sub_402D84(a1, a2, 512LL);
  }
  return v39;
}
