#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406CC9(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  void *result; // rax
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE *v17; // rax
  void *v18; // r13
  unsigned __int64 v19; // r14
  size_t v20; // rax
  __int64 v21; // r12
  size_t v22; // rax
  size_t v23; // rax
  int v24; // eax
  size_t v25; // rax
  int v26; // eax
  bool v27; // al
  bool v28; // al
  bool v29; // al
  int v30; // eax
  bool v31; // al
  int v32; // eax
  char v33; // [rsp+12h] [rbp-8Eh]
  char v34; // [rsp+13h] [rbp-8Dh]
  unsigned __int8 v35; // [rsp+14h] [rbp-8Ch]
  bool v36; // [rsp+15h] [rbp-8Bh]
  bool v37; // [rsp+16h] [rbp-8Ah]
  bool v38; // [rsp+17h] [rbp-89h]
  int fd; // [rsp+18h] [rbp-88h] BYREF
  int v40; // [rsp+1Ch] [rbp-84h]
  void *ptr; // [rsp+20h] [rbp-80h]
  __int64 v42; // [rsp+28h] [rbp-78h]
  unsigned __int64 v43; // [rsp+30h] [rbp-70h]
  void *dest; // [rsp+38h] [rbp-68h]
  __int64 v45; // [rsp+40h] [rbp-60h]
  DIR *dirp; // [rsp+48h] [rbp-58h]
  unsigned __int64 v47; // [rsp+50h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-48h]
  __int64 v49; // [rsp+60h] [rbp-40h]
  struct dirent *v50; // [rsp+68h] [rbp-38h]
  __int64 v51; // [rsp+70h] [rbp-30h]
  unsigned __int64 v52; // [rsp+78h] [rbp-28h]

  v45 = *(_QWORD *)a1;
  v37 = *(_QWORD *)(v45 + 24) != 0LL;
  if ( *(_QWORD *)(v45 + 24) )
  {
    dirp = *(DIR **)(v45 + 24);
    fd = dirfd(dirp);
    if ( fd < 0 )
    {
      closedir(*(DIR **)(v45 + 24));
      *(_QWORD *)(v45 + 24) = 0LL;
      if ( a2 == 3 )
      {
        *(_WORD *)(v45 + 112) = 4;
        *(_DWORD *)(v45 + 64) = *__errno_location();
      }
      return 0LL;
    }
LABEL_28:
    if ( *(_QWORD *)(a1 + 64) )
      v14 = -1LL;
    else
      v14 = 100000LL;
    v47 = v14;
    if ( a2 == 2 )
    {
      v42 = 0LL;
      v35 = 0;
    }
    else if ( (*(_DWORD *)(a1 + 72) & 8) != 0 && (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x20) != 0 )
        v15 = 0LL;
      else
        v15 = 2LL;
      v42 = *(_QWORD *)(v45 + 136) - v15;
      v35 = 1;
    }
    else
    {
      v42 = -1LL;
      v35 = 0;
    }
    if ( v37 )
    {
      v33 = 1;
    }
    else if ( v42 || a2 == 3 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
      {
        fd = sub_40ABC5((unsigned int)fd);
        if ( fd >= 0 )
          sub_408BF3((unsigned int)fd, 1LL);
      }
      if ( fd < 0 || (unsigned int)sub_407D73(a1, v45, (unsigned int)fd, 0LL) )
      {
        if ( v42 && a2 == 3 )
          *(_DWORD *)(v45 + 64) = *__errno_location();
        *(_WORD *)(v45 + 114) |= 1u;
        v33 = 0;
        closedir(*(DIR **)(v45 + 24));
        *(_QWORD *)(v45 + 24) = 0LL;
        if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 && fd >= 0 )
          close(fd);
        *(_QWORD *)(v45 + 24) = 0LL;
      }
      else
      {
        v33 = 1;
      }
    }
    else
    {
      v33 = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v45 + 56) + *(_QWORD *)(v45 + 72) - 1LL) == 47 )
      v16 = *(_QWORD *)(v45 + 72) - 1LL;
    else
      v16 = *(_QWORD *)(v45 + 72);
    v48 = v16;
    if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    {
      v17 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v48);
      dest = v17 + 1;
      *v17 = 47;
    }
    else
    {
      dest = 0LL;
    }
    ++v48;
    v43 = *(_QWORD *)(a1 + 48) - v48;
    v49 = *(_QWORD *)(v45 + 88) + 1LL;
    v34 = 0;
    v18 = 0LL;
    ptr = 0LL;
    v19 = 0LL;
    while ( *(_QWORD *)(v45 + 24) )
    {
      v50 = readdir(*(DIR **)(v45 + 24));
      if ( !v50 )
        break;
      if ( (*(_DWORD *)(a1 + 72) & 0x20) != 0
        || v50->d_name[0] != 46
        || v50->d_name[1] && (v50->d_name[1] != 46 || v50->d_name[2]) )
      {
        v20 = strlen(v50->d_name);
        v21 = sub_407A54(a1, v50->d_name, v20);
        if ( !v21 )
          goto LABEL_75;
        v22 = strlen(v50->d_name);
        if ( v22 >= v43 )
        {
          v51 = *(_QWORD *)(a1 + 32);
          v23 = strlen(v50->d_name);
          if ( (unsigned __int8)sub_407B3D(a1, v48 + v23 + 1) != 1 )
          {
LABEL_75:
            v40 = *__errno_location();
            free((void *)v21);
            sub_407B02(v18);
            closedir(*(DIR **)(v45 + 24));
            *(_QWORD *)(v45 + 24) = 0LL;
            *(_WORD *)(v45 + 112) = 7;
            v24 = *(_DWORD *)(a1 + 72);
            BYTE1(v24) |= 0x20u;
            *(_DWORD *)(a1 + 72) = v24;
            *__errno_location() = v40;
            return 0LL;
          }
          if ( *(_QWORD *)(a1 + 32) != v51 )
          {
            v34 = 1;
            if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
              dest = (void *)(*(_QWORD *)(a1 + 32) + v48);
          }
          v43 = *(_QWORD *)(a1 + 48) - v48;
        }
        v25 = strlen(v50->d_name);
        v52 = v48 + v25;
        if ( v48 + v25 < v48 )
        {
          free((void *)v21);
          sub_407B02(v18);
          closedir(*(DIR **)(v45 + 24));
          *(_QWORD *)(v45 + 24) = 0LL;
          *(_WORD *)(v45 + 112) = 7;
          v26 = *(_DWORD *)(a1 + 72);
          BYTE1(v26) |= 0x20u;
          *(_DWORD *)(a1 + 72) = v26;
          *__errno_location() = 36;
          return 0LL;
        }
        *(_QWORD *)(v21 + 88) = v49;
        *(_QWORD *)(v21 + 8) = *(_QWORD *)a1;
        *(_QWORD *)(v21 + 72) = v52;
        *(_QWORD *)(v21 + 128) = v50->d_ino;
        if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
        {
          *(_QWORD *)(v21 + 48) = *(_QWORD *)(v21 + 56);
          memmove(dest, (const void *)(v21 + 264), *(_QWORD *)(v21 + 96) + 1LL);
        }
        else
        {
          *(_QWORD *)(v21 + 48) = v21 + 264;
        }
        if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 72) & 0x400) == 0 )
        {
          *(_WORD *)(v21 + 112) = sub_40770B(a1, v21, 0LL);
          v29 = *(_WORD *)(v21 + 112) == 1 || *(_WORD *)(v21 + 112) == 2 || *(_WORD *)(v21 + 112) == 5;
          v36 = v29;
        }
        else
        {
          v27 = (*(_DWORD *)(a1 + 72) & 0x10) != 0 && (*(_DWORD *)(a1 + 72) & 8) != 0 && v50->d_type && v50->d_type != 4;
          v38 = v27;
          *(_WORD *)(v21 + 112) = 11;
          sub_406C3D(v21 + 120, v50->d_type);
          sub_40580B(v21, !v38);
          v28 = (*(_DWORD *)(a1 + 72) & 0x10) != 0 && v50->d_type == 4;
          v36 = v28;
        }
        if ( v42 && v36 )
          v42 -= v35;
        *(_QWORD *)(v21 + 16) = 0LL;
        if ( v18 )
        {
          *((_QWORD *)ptr + 2) = v21;
          ptr = (void *)v21;
        }
        else
        {
          ptr = (void *)v21;
          v18 = (void *)v21;
        }
        if ( v47 <= ++v19 )
          goto LABEL_114;
      }
    }
    if ( *(_QWORD *)(v45 + 24) )
    {
      closedir(*(DIR **)(v45 + 24));
      *(_QWORD *)(v45 + 24) = 0LL;
    }
LABEL_114:
    if ( v34 )
      sub_407C0A(a1, v18);
    if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == v48 || !v19 )
        dest = (char *)dest - 1;
      *(_BYTE *)dest = 0;
    }
    if ( v37 || !v33 || a2 != 1 && v19 )
    {
LABEL_136:
      if ( v19 )
      {
        if ( v19 > 0x2710
          && !*(_QWORD *)(a1 + 64)
          && (*(_DWORD *)(a1 + 72) & 0x200) != 0
          && sub_405FBE(*(_DWORD *)(a1 + 44)) )
        {
          *(_QWORD *)(a1 + 64) = sub_406BE2;
          v18 = (void *)sub_40790D(a1, v18, v19);
          *(_QWORD *)(a1 + 64) = 0LL;
        }
        if ( *(_QWORD *)(a1 + 64) && v19 > 1 )
          v18 = (void *)sub_40790D(a1, v18, v19);
        result = v18;
      }
      else
      {
        if ( a2 == 3 )
          *(_WORD *)(v45 + 112) = 6;
        sub_407B02(v18);
        result = 0LL;
      }
      return result;
    }
    if ( *(_QWORD *)(v45 + 88) )
    {
      v31 = (unsigned int)sub_407D73(a1, *(_QWORD *)(v45 + 8), 0xFFFFFFFFLL, "..") != 0;
LABEL_134:
      if ( v31 )
      {
        *(_WORD *)(v45 + 112) = 7;
        v32 = *(_DWORD *)(a1 + 72);
        BYTE1(v32) |= 0x20u;
        *(_DWORD *)(a1 + 72) = v32;
        sub_407B02(v18);
        return 0LL;
      }
      goto LABEL_136;
    }
    sub_4057C9(a1 + 96);
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
      {
        sub_4058E7(a1, -100, 1);
      }
      else if ( fchdir(*(_DWORD *)(a1 + 40)) )
      {
        v30 = 1;
LABEL_132:
        v31 = v30 != 0;
        goto LABEL_134;
      }
    }
    v30 = 0;
    goto LABEL_132;
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 && ((*(_DWORD *)(a1 + 72) & 1) == 0 || *(_QWORD *)(v45 + 88)) )
    v8 = 0x20000;
  else
    v8 = 0;
  if ( (*(_DWORD *)(a1 + 72) & 0x800) != 0 )
    v9 = 0x40000;
  else
    v9 = 0;
  v10 = v9 | v8;
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 || (*(_DWORD *)(a1 + 72) & 0x200) == 0 )
    v11 = -100;
  else
    v11 = *(_DWORD *)(a1 + 44);
  v12 = sub_40584E(v11, *(_QWORD *)(v45 + 48), v10, &fd, a5, a6);
  *(_QWORD *)(v45 + 24) = v12;
  if ( *(_QWORD *)(v45 + 24) )
  {
    if ( *(_WORD *)(v45 + 112) == 11 )
    {
      v13 = sub_40770B(a1, v45, 0LL);
      *(_WORD *)(v45 + 112) = v13;
    }
    else if ( (*(_DWORD *)(a1 + 72) & 0x100) != 0 )
    {
      sub_40566F(a1, v45);
      sub_40770B(a1, v45, 0LL);
      if ( (unsigned __int8)sub_40555F(a1, v45) != 1 )
      {
        *__errno_location() = 12;
        return 0LL;
      }
    }
    goto LABEL_28;
  }
  if ( a2 == 3 )
  {
    *(_WORD *)(v45 + 112) = 4;
    *(_DWORD *)(v45 + 64) = *__errno_location();
  }
  return 0LL;
}
