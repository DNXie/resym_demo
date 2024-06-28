#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_412E5A(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // er8
  int v10; // er9
  void *result; // rax
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // rax
  void *v22; // r13
  unsigned __int64 v23; // r14
  size_t v24; // rax
  __int64 v25; // r12
  size_t v26; // rax
  size_t v27; // rax
  int v28; // eax
  size_t v29; // rax
  int v30; // eax
  bool v31; // al
  bool v32; // al
  bool v33; // al
  int v34; // eax
  bool v35; // al
  int v36; // eax
  int v37; // [rsp+Ch] [rbp-94h]
  char v38; // [rsp+12h] [rbp-8Eh]
  char v39; // [rsp+13h] [rbp-8Dh]
  unsigned __int8 v40; // [rsp+14h] [rbp-8Ch]
  bool v41; // [rsp+15h] [rbp-8Bh]
  bool v42; // [rsp+16h] [rbp-8Ah]
  bool v43; // [rsp+17h] [rbp-89h]
  int fd; // [rsp+18h] [rbp-88h] BYREF
  int v45; // [rsp+1Ch] [rbp-84h]
  void *ptr; // [rsp+20h] [rbp-80h]
  __int64 v47; // [rsp+28h] [rbp-78h]
  unsigned __int64 v48; // [rsp+30h] [rbp-70h]
  void *dest; // [rsp+38h] [rbp-68h]
  __int64 v50; // [rsp+40h] [rbp-60h]
  DIR *dirp; // [rsp+48h] [rbp-58h]
  unsigned __int64 v52; // [rsp+50h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-48h]
  __int64 v54; // [rsp+60h] [rbp-40h]
  struct dirent *v55; // [rsp+68h] [rbp-38h]
  __int64 v56; // [rsp+70h] [rbp-30h]
  unsigned __int64 v57; // [rsp+78h] [rbp-28h]

  v37 = a2;
  v50 = *(_QWORD *)a1;
  v42 = *(_QWORD *)(v50 + 24) != 0LL;
  if ( *(_QWORD *)(v50 + 24) )
  {
    dirp = *(DIR **)(v50 + 24);
    fd = dirfd(dirp);
    if ( fd < 0 )
    {
      closedir(*(DIR **)(v50 + 24));
      *(_QWORD *)(v50 + 24) = 0LL;
      if ( (_DWORD)a2 == 3 )
      {
        *(_WORD *)(v50 + 112) = 4;
        *(_DWORD *)(v50 + 64) = *__errno_location();
      }
      return 0LL;
    }
LABEL_28:
    if ( *(_QWORD *)(a1 + 64) )
      v18 = -1LL;
    else
      v18 = 100000LL;
    v52 = v18;
    if ( v37 == 2 )
    {
      v47 = 0LL;
      v40 = 0;
    }
    else if ( (*(_DWORD *)(a1 + 72) & 8) != 0 && (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x20) != 0 )
        v19 = 0LL;
      else
        v19 = 2LL;
      v7 = *(_QWORD *)(v50 + 136) - v19;
      v47 = v7;
      v40 = 1;
    }
    else
    {
      v47 = -1LL;
      v40 = 0;
    }
    if ( v42 )
    {
      v38 = 1;
    }
    else if ( v47 || v37 == 3 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
      {
        fd = sub_40EEBE(fd, a2, v7, v8, v9, v10);
        if ( fd >= 0 )
          sub_414D4D((unsigned int)fd, 1LL);
      }
      if ( fd < 0 || (unsigned int)sub_413F04(a1, v50, (unsigned int)fd, 0LL) )
      {
        if ( v47 && v37 == 3 )
          *(_DWORD *)(v50 + 64) = *__errno_location();
        *(_WORD *)(v50 + 114) |= 1u;
        v38 = 0;
        closedir(*(DIR **)(v50 + 24));
        *(_QWORD *)(v50 + 24) = 0LL;
        if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 && fd >= 0 )
          close(fd);
        *(_QWORD *)(v50 + 24) = 0LL;
      }
      else
      {
        v38 = 1;
      }
    }
    else
    {
      v38 = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v50 + 56) + *(_QWORD *)(v50 + 72) - 1LL) == 47 )
      v20 = *(_QWORD *)(v50 + 72) - 1LL;
    else
      v20 = *(_QWORD *)(v50 + 72);
    v53 = v20;
    if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    {
      v21 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v53);
      dest = v21 + 1;
      *v21 = 47;
    }
    else
    {
      dest = 0LL;
    }
    ++v53;
    v48 = *(_QWORD *)(a1 + 48) - v53;
    v54 = *(_QWORD *)(v50 + 88) + 1LL;
    v39 = 0;
    v22 = 0LL;
    ptr = 0LL;
    v23 = 0LL;
    while ( *(_QWORD *)(v50 + 24) )
    {
      v55 = readdir(*(DIR **)(v50 + 24));
      if ( !v55 )
        break;
      if ( (*(_DWORD *)(a1 + 72) & 0x20) != 0
        || v55->d_name[0] != 46
        || v55->d_name[1] && (v55->d_name[1] != 46 || v55->d_name[2]) )
      {
        v24 = strlen(v55->d_name);
        v25 = sub_413BE5(a1, v55->d_name, v24);
        if ( !v25 )
          goto LABEL_75;
        v26 = strlen(v55->d_name);
        if ( v26 >= v48 )
        {
          v56 = *(_QWORD *)(a1 + 32);
          v27 = strlen(v55->d_name);
          if ( (unsigned __int8)sub_413CCE(a1, v53 + v27 + 1) != 1 )
          {
LABEL_75:
            v45 = *__errno_location();
            free((void *)v25);
            sub_413C93(v22);
            closedir(*(DIR **)(v50 + 24));
            *(_QWORD *)(v50 + 24) = 0LL;
            *(_WORD *)(v50 + 112) = 7;
            v28 = *(_DWORD *)(a1 + 72);
            BYTE1(v28) |= 0x20u;
            *(_DWORD *)(a1 + 72) = v28;
            *__errno_location() = v45;
            return 0LL;
          }
          if ( *(_QWORD *)(a1 + 32) != v56 )
          {
            v39 = 1;
            if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
              dest = (void *)(*(_QWORD *)(a1 + 32) + v53);
          }
          v48 = *(_QWORD *)(a1 + 48) - v53;
        }
        v29 = strlen(v55->d_name);
        v57 = v53 + v29;
        if ( v53 + v29 < v53 )
        {
          free((void *)v25);
          sub_413C93(v22);
          closedir(*(DIR **)(v50 + 24));
          *(_QWORD *)(v50 + 24) = 0LL;
          *(_WORD *)(v50 + 112) = 7;
          v30 = *(_DWORD *)(a1 + 72);
          BYTE1(v30) |= 0x20u;
          *(_DWORD *)(a1 + 72) = v30;
          *__errno_location() = 36;
          return 0LL;
        }
        *(_QWORD *)(v25 + 88) = v54;
        *(_QWORD *)(v25 + 8) = *(_QWORD *)a1;
        *(_QWORD *)(v25 + 72) = v57;
        *(_QWORD *)(v25 + 128) = v55->d_ino;
        if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
        {
          *(_QWORD *)(v25 + 48) = *(_QWORD *)(v25 + 56);
          memmove(dest, (const void *)(v25 + 264), *(_QWORD *)(v25 + 96) + 1LL);
        }
        else
        {
          *(_QWORD *)(v25 + 48) = v25 + 264;
        }
        if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 72) & 0x400) == 0 )
        {
          *(_WORD *)(v25 + 112) = sub_41389C(a1, v25, 0LL);
          v33 = *(_WORD *)(v25 + 112) == 1 || *(_WORD *)(v25 + 112) == 2 || *(_WORD *)(v25 + 112) == 5;
          v41 = v33;
        }
        else
        {
          v31 = (*(_DWORD *)(a1 + 72) & 0x10) != 0 && (*(_DWORD *)(a1 + 72) & 8) != 0 && v55->d_type && v55->d_type != 4;
          v43 = v31;
          *(_WORD *)(v25 + 112) = 11;
          sub_412DCE(v25 + 120, v55->d_type);
          sub_41199C(v25, !v43);
          v32 = (*(_DWORD *)(a1 + 72) & 0x10) != 0 && v55->d_type == 4;
          v41 = v32;
        }
        if ( v47 && v41 )
          v47 -= v40;
        *(_QWORD *)(v25 + 16) = 0LL;
        if ( v22 )
        {
          *((_QWORD *)ptr + 2) = v25;
          ptr = (void *)v25;
        }
        else
        {
          ptr = (void *)v25;
          v22 = (void *)v25;
        }
        if ( v52 <= ++v23 )
          goto LABEL_114;
      }
    }
    if ( *(_QWORD *)(v50 + 24) )
    {
      closedir(*(DIR **)(v50 + 24));
      *(_QWORD *)(v50 + 24) = 0LL;
    }
LABEL_114:
    if ( v39 )
      sub_413D9B(a1, v22);
    if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == v53 || !v23 )
        dest = (char *)dest - 1;
      *(_BYTE *)dest = 0;
    }
    if ( v42 || !v38 || v37 != 1 && v23 )
    {
LABEL_136:
      if ( v23 )
      {
        if ( v23 > 0x2710
          && !*(_QWORD *)(a1 + 64)
          && (*(_DWORD *)(a1 + 72) & 0x200) != 0
          && sub_41214F(*(_DWORD *)(a1 + 44)) )
        {
          *(_QWORD *)(a1 + 64) = sub_412D73;
          v22 = (void *)sub_413A9E(a1, v22, v23);
          *(_QWORD *)(a1 + 64) = 0LL;
        }
        if ( *(_QWORD *)(a1 + 64) && v23 > 1 )
          v22 = (void *)sub_413A9E(a1, v22, v23);
        result = v22;
      }
      else
      {
        if ( v37 == 3 )
          *(_WORD *)(v50 + 112) = 6;
        sub_413C93(v22);
        result = 0LL;
      }
      return result;
    }
    if ( *(_QWORD *)(v50 + 88) )
    {
      v35 = (unsigned int)sub_413F04(a1, *(_QWORD *)(v50 + 8), 0xFFFFFFFFLL, "..") != 0;
LABEL_134:
      if ( v35 )
      {
        *(_WORD *)(v50 + 112) = 7;
        v36 = *(_DWORD *)(a1 + 72);
        BYTE1(v36) |= 0x20u;
        *(_DWORD *)(a1 + 72) = v36;
        sub_413C93(v22);
        return 0LL;
      }
      goto LABEL_136;
    }
    sub_41195A(a1 + 96);
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
      {
        sub_411A78(a1, -100, 1);
      }
      else if ( fchdir(*(_DWORD *)(a1 + 40)) )
      {
        v34 = 1;
LABEL_132:
        v35 = v34 != 0;
        goto LABEL_134;
      }
    }
    v34 = 0;
    goto LABEL_132;
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 && ((*(_DWORD *)(a1 + 72) & 1) == 0 || *(_QWORD *)(v50 + 88)) )
    v12 = 0x20000;
  else
    v12 = 0;
  if ( (*(_DWORD *)(a1 + 72) & 0x800) != 0 )
    v13 = 0x40000;
  else
    v13 = 0;
  v14 = v13 | v12;
  a2 = *(_QWORD *)(v50 + 48);
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 || (*(_DWORD *)(a1 + 72) & 0x200) == 0 )
    v15 = -100;
  else
    v15 = *(_DWORD *)(a1 + 44);
  v16 = sub_4119DF(v15, a2, v14, &fd, a5, a6);
  v7 = v50;
  *(_QWORD *)(v50 + 24) = v16;
  if ( *(_QWORD *)(v50 + 24) )
  {
    if ( *(_WORD *)(v50 + 112) == 11 )
    {
      a2 = v50;
      v17 = sub_41389C(a1, v50, 0LL);
      v7 = v50;
      *(_WORD *)(v50 + 112) = v17;
    }
    else if ( (*(_DWORD *)(a1 + 72) & 0x100) != 0 )
    {
      sub_411800(a1, v50);
      sub_41389C(a1, v50, 0LL);
      a2 = v50;
      if ( (unsigned __int8)sub_4116F0(a1, v50) != 1 )
      {
        *__errno_location() = 12;
        return 0LL;
      }
    }
    goto LABEL_28;
  }
  if ( v37 == 3 )
  {
    *(_WORD *)(v50 + 112) = 4;
    *(_DWORD *)(v50 + 64) = *__errno_location();
  }
  return 0LL;
}
