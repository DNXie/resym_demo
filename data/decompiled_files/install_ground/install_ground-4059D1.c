#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4059D1(__int64 a1, char *a2, __int64 a3, __mode_t a4, int a5, char *a6, __int64 a7)
{
  int v7; // eax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  int v12; // ecx
  int v13; // er8
  int v14; // er9
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  bool v20; // al
  bool v21; // al
  int *v22; // rax
  char *v23; // rbx
  int *v24; // rax
  int *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r12
  char *v28; // rbx
  int *v29; // rax
  __int64 v30; // r12
  char *v31; // rbx
  int *v32; // rax
  __int64 v33; // rbx
  char *v34; // rax
  int v35; // er8
  int v36; // er9
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  char *v42; // rbx
  int *v43; // rax
  int v44; // eax
  __int64 v45; // r13
  __int64 v46; // r12
  char *v47; // rbx
  int *v48; // rax
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // r12
  char *v57; // rbx
  int *v58; // rax
  __off_t v59; // rdx
  __off_t v60; // rdx
  __int64 v61; // r12
  char *v62; // rbx
  int *v63; // rax
  int v64; // eax
  __int64 v65; // rsi
  char *v66; // rdi
  int v67; // eax
  __int64 v68; // r12
  char *v69; // rbx
  int *v70; // rax
  __int64 v71; // r12
  char *v72; // rbx
  int *v73; // rax
  __int64 v74; // r12
  char *v75; // rbx
  int *v76; // rax
  __int64 v77[18]; // [rsp+0h] [rbp-280h] BYREF
  __int64 v78; // [rsp+90h] [rbp-1F0h] BYREF
  char *v79; // [rsp+98h] [rbp-1E8h]
  int v80; // [rsp+A0h] [rbp-1E0h]
  __mode_t v81; // [rsp+A4h] [rbp-1DCh]
  __int64 v82; // [rsp+A8h] [rbp-1D8h]
  char *name; // [rsp+B0h] [rbp-1D0h]
  __int64 v84; // [rsp+B8h] [rbp-1C8h]
  char v85; // [rsp+C3h] [rbp-1BDh] BYREF
  unsigned __int8 v86; // [rsp+C4h] [rbp-1BCh]
  char v87; // [rsp+C5h] [rbp-1BBh]
  char v88; // [rsp+C6h] [rbp-1BAh]
  bool v89; // [rsp+C7h] [rbp-1B9h]
  bool v90; // [rsp+C8h] [rbp-1B8h]
  bool v91; // [rsp+C9h] [rbp-1B7h]
  bool v92; // [rsp+CAh] [rbp-1B6h]
  bool v93; // [rsp+CBh] [rbp-1B5h]
  int fd; // [rsp+CCh] [rbp-1B4h]
  int errnum; // [rsp+D0h] [rbp-1B0h]
  unsigned int v96; // [rsp+D4h] [rbp-1ACh]
  int fildes; // [rsp+D8h] [rbp-1A8h]
  int v98; // [rsp+DCh] [rbp-1A4h]
  void *ptr; // [rsp+E0h] [rbp-1A0h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-198h]
  void *v101; // [rsp+F0h] [rbp-190h]
  unsigned __int64 v102; // [rsp+F8h] [rbp-188h]
  __int64 v103; // [rsp+100h] [rbp-180h]
  unsigned __int64 v104; // [rsp+108h] [rbp-178h]
  unsigned __int64 v105; // [rsp+110h] [rbp-170h]
  char *v106; // [rsp+118h] [rbp-168h]
  __off_t length[4]; // [rsp+120h] [rbp-160h] BYREF
  struct stat stat_buf; // [rsp+140h] [rbp-140h] BYREF
  struct stat v109; // [rsp+1D0h] [rbp-B0h] BYREF
  __int64 v110; // [rsp+260h] [rbp-20h] BYREF

  v84 = a1;
  name = a2;
  v82 = a3;
  v81 = a4;
  v80 = a5;
  v79 = a6;
  ptr = 0LL;
  v101 = 0LL;
  v96 = *(_DWORD *)(a7 + 24);
  v86 = 1;
  v87 = *(_BYTE *)(a3 + 32);
  if ( *(_DWORD *)(a3 + 4) == 2 )
    v7 = 0x20000;
  else
    v7 = 0;
  fildes = sub_40B44A(v84, v7, v84, a4, a5, (_DWORD)a6, v77[0]);
  if ( fildes < 0 )
  {
    v8 = sub_40E392(v84);
    v9 = gettext("cannot open %s for reading");
    v10 = __errno_location();
    error(0, *v10, v9, v8);
    return 0LL;
  }
  if ( !(unsigned int)sub_419BD0(fildes, &stat_buf) )
  {
    if ( *(_QWORD *)(a7 + 8) != stat_buf.st_ino || *(_QWORD *)a7 != stat_buf.st_dev )
    {
      v18 = sub_40E392(v84);
      v19 = gettext("skipping file %s, as it was replaced while being copied");
      error(0, 0, v19, v18);
      v86 = 0;
      goto LABEL_134;
    }
    if ( *v79 != 1 )
    {
      fd = sub_40B44A((_DWORD)name, 513, *(_QWORD *)a7, v12, v13, v14, v77[0]);
      errnum = *__errno_location();
      if ( *(_BYTE *)(v82 + 34) && fd >= 0 )
      {
        v20 = *(_BYTE *)(v82 + 32) != 1 || *(_BYTE *)(v82 + 35);
        v91 = v20;
        v21 = !v20 && *(_BYTE *)(v82 + 38) != 1;
        v92 = v21;
        v109.st_dev = 0LL;
        if ( (int)sub_4048E8(&v109) < 0 )
        {
          if ( v91 || v92 && (v22 = __errno_location(), !sub_4053F1(*v22)) )
          {
            v23 = gettext("failed to get file system create context");
            v24 = __errno_location();
            error(0, *v24, v23);
          }
          if ( *(_BYTE *)(v82 + 35) )
          {
            v86 = 0;
            goto LABEL_132;
          }
        }
        if ( v109.st_dev )
        {
          if ( (int)sub_404946((unsigned int)fd, v109.st_dev) < 0 )
          {
            if ( v91 || v92 && (v25 = __errno_location(), !sub_4053F1(*v25)) )
            {
              v26 = sub_40E36E(1LL, v109.st_dev);
              v27 = sub_40E36E(0LL, name);
              v28 = gettext("failed to set the security context of %s to %s");
              v29 = __errno_location();
              error(0, *v29, v28, v27, v26);
            }
            if ( *(_BYTE *)(v82 + 35) )
            {
              v86 = 0;
              sub_4048DE();
              goto LABEL_132;
            }
          }
          sub_4048DE();
        }
      }
      if ( fd < 0 && *(_BYTE *)(v82 + 22) )
      {
        if ( unlink(name) )
        {
          v30 = sub_40E392(name);
          v31 = gettext("cannot remove %s");
          v32 = __errno_location();
          error(0, *v32, v31, v30);
          v86 = 0;
          goto LABEL_134;
        }
        if ( *(_BYTE *)(v82 + 43) )
        {
          v33 = sub_40E392(name);
          v34 = gettext("removed %s\n");
          printf(v34, v33);
        }
        *v79 = 1;
      }
    }
    if ( *v79 )
    {
      v98 = 65;
      fd = sub_40B44A((_DWORD)name, 193, v81 & ~v80, 193, v13, v14, v77[0]);
      errnum = *__errno_location();
      if ( fd < 0
        && errnum == 17
        && *(_BYTE *)(v82 + 24) != 1
        && !(unsigned int)sub_419BE0(name, &v109)
        && (v109.st_mode & 0xF000) == 40960 )
      {
        if ( !*(_BYTE *)(v82 + 45) )
        {
          v37 = sub_40E392(name);
          v38 = gettext("not writing through dangling symlink %s");
          error(0, 0, v38, v37);
          v86 = 0;
          goto LABEL_134;
        }
        fd = sub_40B44A((_DWORD)name, v98, v81 & ~v80, v98, v35, v36, v77[0]);
        errnum = *__errno_location();
      }
      if ( fd < 0 && errnum == 21 && *name && name[strlen(name) - 1] == 47 )
        errnum = 20;
    }
    else
    {
      v80 = 0;
    }
    if ( fd < 0 )
    {
      v39 = sub_40E392(name);
      v40 = gettext("cannot create regular file %s");
      error(0, errnum, v40, v39);
      v86 = 0;
      goto LABEL_134;
    }
    if ( (unsigned int)sub_419BD0(fd, &v109) )
    {
      v41 = sub_40E392(name);
      v42 = gettext("cannot fstat %s");
      v43 = __errno_location();
      error(0, *v43, v42, v41);
      v86 = 0;
      goto LABEL_132;
    }
    if ( v87 )
    {
      if ( *(_DWORD *)(v82 + 48) )
      {
        v44 = sub_404DD1(fd, fildes);
        v93 = v44 == 0;
        if ( !v44 || *(_DWORD *)(v82 + 48) == 2 )
        {
          if ( !v93 )
          {
            v45 = sub_40E36E(1LL, v84);
            v46 = sub_40E36E(0LL, name);
            v47 = gettext("failed to clone %s from %s");
            v48 = __errno_location();
            error(0, *v48, v47, v46, v45);
            v86 = 0;
            goto LABEL_132;
          }
          v87 = 0;
        }
      }
    }
    if ( v87 )
    {
      v49 = getpagesize();
      v102 = sub_404A00(v49, 8uLL);
      v103 = v102 + 7;
      qmemcpy(v77, &v109, sizeof(v77));
      v100 = sub_404AB4(
               (__int64)&v78,
               (__int64)&v110,
               (__int64)v77,
               0LL,
               v50,
               v51,
               v77[0],
               v77[1],
               v77[2],
               v77[3],
               v77[4],
               v77[5],
               v77[6],
               v77[7]);
      v88 = 0;
      v89 = 0;
      if ( (v109.st_mode & 0xF000) == 0x8000 )
      {
        if ( *(_DWORD *)(v82 + 12) == 3 )
          v88 = 1;
        v89 = sub_40597E((__int64)&stat_buf);
        if ( *(_DWORD *)(v82 + 12) == 2 && v89 )
          v88 = 1;
      }
      if ( v88 != 1 )
      {
        v104 = 0x7FFFFFFFFFFFFFFFLL - v103;
        qmemcpy(v77, &stat_buf, sizeof(v77));
        v54 = sub_404AB4(
                (__int64)&v78,
                (__int64)&v109,
                (__int64)v77,
                0LL,
                v52,
                v53,
                v77[0],
                v77[1],
                v77[2],
                v77[3],
                v77[4],
                v77[5],
                v77[6],
                v77[7]);
        v105 = sub_412E1B(v54, v100, v104);
        if ( (stat_buf.st_mode & 0xF000) == 0x8000 && stat_buf.st_size < v100 )
          v100 = stat_buf.st_size + 1;
        v100 = v105 + v100 - 1;
        v100 -= v100 % v105;
        if ( !v100 || v104 < v100 )
          v100 = v105;
      }
      ptr = (void *)sub_4126DD(v100 + v103);
      v106 = (char *)sub_404A39((__int64)ptr, v102);
      if ( v89 )
      {
        if ( (v109.st_mode & 0xF000) == 0x8000 )
          v55 = *(_DWORD *)(v82 + 12);
        else
          v55 = 1;
        if ( (unsigned __int8)sub_404EA3(fildes, fd, v106, v100, stat_buf.st_size, v55, v84, (__int64)name, length) )
          goto LABEL_97;
        if ( LOBYTE(length[0]) != 1 )
        {
          v86 = 0;
          goto LABEL_132;
        }
      }
      if ( (unsigned __int8)sub_404B86(
                              fildes,
                              fd,
                              v106,
                              v100,
                              v88,
                              v84,
                              (__int64)name,
                              0xFFFFFFFFFFFFFFFFLL,
                              length,
                              &v85) != 1
        || v85 && ftruncate(fd, length[0]) < 0 )
      {
        v56 = sub_40E392(name);
        v57 = gettext("failed to extend %s");
        v58 = __errno_location();
        error(0, *v58, v57, v56);
        v86 = 0;
        goto LABEL_132;
      }
    }
LABEL_97:
    if ( *(_BYTE *)(v82 + 30) )
    {
      length[0] = sub_404B16(a7);
      length[1] = v59;
      length[2] = sub_404B2C(a7);
      length[3] = v60;
      if ( (unsigned int)sub_4113D2((unsigned int)fd, name, length) )
      {
        v61 = sub_40E392(name);
        v62 = gettext("preserving times for %s");
        v63 = __errno_location();
        error(0, *v63, v62, v61);
        if ( *(_BYTE *)(v82 + 33) )
        {
          v86 = 0;
          goto LABEL_132;
        }
      }
    }
    if ( *(_BYTE *)(v82 + 28) && (*(_DWORD *)(a7 + 28) != v109.st_uid || *(_DWORD *)(a7 + 32) != v109.st_gid) )
    {
      v64 = sub_4056B2(v82, name, fd, (_DWORD *)a7, *v79, (__int64)&v109);
      if ( v64 == -1 )
      {
        v86 = 0;
LABEL_132:
        if ( close(fd) < 0 )
        {
          v71 = sub_40E392(name);
          v72 = gettext("closing %s");
          v73 = __errno_location();
          error(0, *v73, v72, v71);
          v86 = 0;
        }
        goto LABEL_134;
      }
      if ( !v64 )
        v96 &= 0xFFFFF1FF;
    }
    if ( *(_BYTE *)(v82 + 36) )
    {
      v90 = 0;
      if ( (v109.st_mode & 0x80) == 0 && geteuid() )
        v90 = sub_405942(fd, name, 0x180u) == 0;
      if ( (unsigned __int8)sub_405415(v84, (unsigned int)fildes, name, (unsigned int)fd, v82) != 1
        && *(_BYTE *)(v82 + 37) )
      {
        v86 = 0;
      }
      if ( v90 )
        sub_405942(fd, name, v81 & ~v80);
    }
    v65 = (unsigned int)fd;
    v66 = name;
    sub_405931();
    if ( *(_BYTE *)(v82 + 29) || *(_BYTE *)(v82 + 24) )
    {
      if ( (unsigned int)sub_40A72C(v84, (unsigned int)fildes, name, (unsigned int)fd, v96) && *(_BYTE *)(v82 + 33) )
        v86 = 0;
    }
    else if ( *(_BYTE *)(v82 + 40) )
    {
      if ( (unsigned int)sub_40A684(name, (unsigned int)fd, *(unsigned int *)(v82 + 16)) )
        v86 = 0;
    }
    else if ( v80 )
    {
      v67 = sub_409C68(v66, v65);
      v80 &= ~v67;
      if ( v80 )
      {
        if ( sub_405942(fd, name, v81) )
        {
          v68 = sub_40E392(name);
          v69 = gettext("preserving permissions for %s");
          v70 = __errno_location();
          error(0, *v70, v69, v68);
          if ( *(_BYTE *)(v82 + 33) )
            v86 = 0;
        }
      }
    }
    goto LABEL_132;
  }
  v15 = sub_40E392(v84);
  v16 = gettext("cannot fstat %s");
  v17 = __errno_location();
  error(0, *v17, v16, v15);
  v86 = 0;
LABEL_134:
  if ( close(fildes) < 0 )
  {
    v74 = sub_40E392(v84);
    v75 = gettext("closing %s");
    v76 = __errno_location();
    error(0, *v76, v75, v74);
    v86 = 0;
  }
  free(ptr);
  free(v101);
  return v86;
}
