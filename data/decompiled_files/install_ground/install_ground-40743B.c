#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40743B(char *a1, char *a2, char a3, __int64 a4, _QWORD *a5, unsigned int *a6, char a7, char *a8, bool *a9, _BYTE *a10)
{
  bool v10; // al
  __int64 v11; // r12
  char *v12; // rbx
  int *v13; // rax
  __int64 v15; // rbx
  char *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  bool v19; // al
  bool v20; // al
  __int64 v21; // r12
  char *v22; // rbx
  int *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbx
  char *v26; // rax
  _BOOL4 v27; // eax
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // r12
  char *v31; // rbx
  int *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r12
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // rbx
  char *v43; // rax
  _BYTE *v44; // rax
  char *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  size_t v48; // rax
  void *v49; // rsp
  __int64 v50; // r12
  char *v51; // rbx
  int *v52; // rax
  __int64 v53; // r12
  char *v54; // rbx
  int *v55; // rax
  __int64 v56; // rbx
  char *v57; // rax
  __int64 v58; // r12
  __int64 v59; // rbx
  char *v60; // rax
  char *v61; // rax
  __int64 v62; // r12
  __int64 v63; // rbx
  char *v64; // rax
  __int64 v65; // r12
  __int64 v66; // rbx
  char *v67; // rax
  char *v68; // rax
  __int64 v69; // r12
  __int64 v70; // rbx
  char *v71; // rax
  __int64 v72; // r13
  __int64 v73; // r12
  char *v74; // rbx
  int *v75; // rax
  __int64 v76; // r13
  __int64 v77; // r12
  char *v78; // rbx
  int *v79; // rax
  int v80; // eax
  int v81; // eax
  bool v82; // al
  bool v83; // al
  int *v84; // rax
  __int64 v85; // r12
  char *v86; // rbx
  int *v87; // rax
  int *v88; // rax
  __int64 v89; // r12
  char *v90; // rbx
  int *v91; // rax
  __int64 v92; // rbx
  char *v93; // rax
  void *v94; // rsp
  __int64 v95; // r12
  char *v96; // rbx
  int *v97; // rax
  __int64 v98; // r12
  char *v99; // rbx
  int *v100; // rax
  __int64 v101; // r12
  char *v102; // rbx
  int *v103; // rax
  bool v104; // al
  __int64 v105; // rbx
  char *v106; // rax
  __int64 v107; // r13
  __int64 v108; // r12
  char *v109; // rbx
  int *v110; // rax
  int v111; // eax
  __int64 v112; // r12
  char *v113; // rbx
  int *v114; // rax
  __int64 v115; // r12
  char *v116; // rbx
  int *v117; // rax
  __int64 v118; // r12
  char *v119; // rbx
  int *v120; // rax
  __off_t v121; // rbx
  __int64 v122; // rbx
  char *v123; // rax
  char *v124; // rbx
  int *v125; // rax
  __int64 v126; // rbx
  char *v127; // rax
  __ino_t v128; // rdx
  __int64 v129; // rdx
  __int64 v131; // r12
  char *v132; // rbx
  int *v133; // rax
  int v134; // eax
  char *v135; // rdi
  int v136; // eax
  __int64 v137; // r12
  char *v138; // rbx
  int *v139; // rax
  __int64 v140; // r12
  char *v141; // rbx
  int *v142; // rax
  __int64 v143; // r12
  char *v144; // rbx
  int *v145; // rax
  __int64 v146; // r12
  __int64 v147; // rbx
  char *v148; // rax
  _QWORD *v150; // [rsp+18h] [rbp-318h] BYREF
  __int64 v151; // [rsp+20h] [rbp-310h]
  char v152; // [rsp+28h] [rbp-308h]
  char v153[4]; // [rsp+2Ch] [rbp-304h] BYREF
  char *old; // [rsp+30h] [rbp-300h]
  char *name; // [rsp+38h] [rbp-2F8h]
  char v156; // [rsp+4Ch] [rbp-2E4h]
  char v157; // [rsp+4Dh] [rbp-2E3h]
  bool v158; // [rsp+4Eh] [rbp-2E2h]
  char v159; // [rsp+4Fh] [rbp-2E1h]
  char v160; // [rsp+50h] [rbp-2E0h]
  bool v161; // [rsp+51h] [rbp-2DFh]
  char v162; // [rsp+52h] [rbp-2DEh]
  char v163; // [rsp+53h] [rbp-2DDh]
  bool v164; // [rsp+54h] [rbp-2DCh]
  bool v165; // [rsp+55h] [rbp-2DBh]
  bool v166; // [rsp+56h] [rbp-2DAh]
  bool v167; // [rsp+57h] [rbp-2D9h]
  __mode_t v168; // [rsp+58h] [rbp-2D8h]
  __int64 v169; // [rsp+5Ch] [rbp-2D4h]
  _BOOL4 v170; // [rsp+64h] [rbp-2CCh]
  int v171; // [rsp+68h] [rbp-2C8h]
  int errnum; // [rsp+6Ch] [rbp-2C4h]
  __int64 v173; // [rsp+70h] [rbp-2C0h]
  char *newa; // [rsp+78h] [rbp-2B8h]
  struct stat *v175; // [rsp+80h] [rbp-2B0h]
  char *s1; // [rsp+88h] [rbp-2A8h]
  char *format; // [rsp+90h] [rbp-2A0h]
  char *s; // [rsp+98h] [rbp-298h]
  size_t n; // [rsp+A0h] [rbp-290h]
  void *dest; // [rsp+A8h] [rbp-288h]
  _QWORD *v181; // [rsp+B0h] [rbp-280h]
  char *s2; // [rsp+B8h] [rbp-278h]
  char *from; // [rsp+C0h] [rbp-270h]
  char *v184; // [rsp+C8h] [rbp-268h]
  struct stat stat_buf; // [rsp+D0h] [rbp-260h] BYREF
  struct stat v186; // [rsp+160h] [rbp-1D0h] BYREF
  struct stat v187; // [rsp+1F0h] [rbp-140h] BYREF
  struct stat v188; // [rsp+280h] [rbp-B0h] BYREF

  name = a1;
  old = a2;
  v151 = a4;
  v150 = a5;
  v153[0] = a3;
  v152 = a7;
  v156 = 0;
  v173 = 0LL;
  newa = 0LL;
  v157 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  if ( *((_BYTE *)a6 + 24) && a10 )
    *a10 = 0;
  *a9 = 0;
  if ( a6[1] == 2 )
    v10 = (unsigned int)sub_419BE0(name, &stat_buf) != 0;
  else
    v10 = (unsigned int)sub_419BC0(name, &stat_buf) != 0;
  if ( v10 )
  {
    v11 = sub_40E392(name);
    v12 = gettext("cannot stat %s");
    v13 = __errno_location();
    error(0, *v13, v12, v11);
    return 0LL;
  }
  v168 = stat_buf.st_mode;
  if ( (stat_buf.st_mode & 0xF000) == 0x4000 && *((_BYTE *)a6 + 39) != 1 )
  {
    v15 = sub_40E392(name);
    v16 = gettext("omitting directory %s");
    error(0, 0, v16, v15);
    return 0LL;
  }
  if ( v152 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000
      && !*a6
      && (unsigned __int8)sub_40B5F7(*((_QWORD *)a6 + 8), name, &stat_buf) )
    {
      v17 = sub_40E392(name);
      v18 = gettext("warning: source file %s specified more than once");
      error(0, 0, v18, v17);
      return 1LL;
    }
    sub_40B55C(*((_QWORD *)a6 + 8), name, &stat_buf);
  }
  if ( v153[0] != 1 )
  {
    v19 = ((v168 & 0xF000) == 0x8000 || *((_BYTE *)a6 + 20) && (v168 & 0xF000) != 0x4000 && (v168 & 0xF000) != 40960)
       && *((_BYTE *)a6 + 24) != 1
       && *((_BYTE *)a6 + 41) != 1
       && *((_BYTE *)a6 + 23) != 1
       && !*a6
       && *((_BYTE *)a6 + 21) != 1;
    v164 = v19;
    if ( v19 )
      v20 = (unsigned int)sub_419BC0(old, &v186) != 0;
    else
      v20 = (unsigned int)sub_419BE0(old, &v186) != 0;
    if ( v20 )
    {
      if ( *__errno_location() != 2 )
      {
        v21 = sub_40E392(old);
        v22 = gettext("cannot stat %s");
        v23 = __errno_location();
        error(0, *v23, v22, v21);
        return 0LL;
      }
      v153[0] = 1;
    }
    else
    {
      v161 = !v164;
      if ( !sub_4069AE(name, &stat_buf, old, &v186, (__int64)a6, &v187, &v188) )
      {
        v24 = sub_40E36E(1LL, old);
        v25 = sub_40E36E(0LL, name);
        v26 = gettext("%s and %s are the same file");
        error(0, 0, v26, v25, v24);
        return 0LL;
      }
      if ( (v168 & 0xF000) != 0x4000 && *((_BYTE *)a6 + 42) )
      {
        v27 = *((_BYTE *)a6 + 30) && (*((_BYTE *)a6 + 24) != 1 || v186.st_dev != stat_buf.st_dev);
        v170 = v27;
        if ( (int)sub_4107B4(old, &v186, &stat_buf, v27) >= 0 )
        {
          if ( a10 )
            *a10 = 1;
          v173 = sub_409DF5(old, stat_buf.st_ino, stat_buf.st_dev);
          if ( !v173 || (unsigned __int8)sub_4072AE(v173, old, 1, *((_BYTE *)a6 + 43)) == 1 )
            return 1LL;
          goto LABEL_340;
        }
      }
      if ( *((_BYTE *)a6 + 24) )
      {
        if ( sub_407123((__int64)a6, old, (__int64)&v186) || LOBYTE(v188.st_dev) && !unlink(name) )
        {
          if ( a10 )
            *a10 = 1;
          if ( LOBYTE(v188.st_dev) && *((_BYTE *)a6 + 43) )
          {
            v28 = sub_40E392(name);
            v29 = gettext("removed %s\n");
            printf(v29, v28);
          }
          return 1LL;
        }
        if ( LOBYTE(v188.st_dev) )
        {
          v30 = sub_40E392(name);
          v31 = gettext("cannot remove %s");
          v32 = __errno_location();
          error(0, *v32, v31, v30);
          return 0LL;
        }
      }
      else if ( (v168 & 0xF000) != 0x4000 )
      {
        if ( a6[2] == 2 )
          return 1LL;
        if ( a6[2] == 3 )
        {
          sub_406FA6(old, (__int64)&v186);
          if ( (unsigned __int8)sub_412DA0() != 1 )
            return 1LL;
        }
      }
      if ( LOBYTE(v187.st_dev) )
        return 1LL;
      if ( (v186.st_mode & 0xF000) != 0x4000 )
      {
        if ( (v168 & 0xF000) == 0x4000 && (!*((_BYTE *)a6 + 24) || !*a6) )
        {
          v33 = sub_40E36E(1LL, name);
          v34 = sub_40E36E(0LL, old);
          v35 = gettext("cannot overwrite non-directory %s with directory %s");
          error(0, 0, v35, v34, v33);
          return 0LL;
        }
        if ( v152 && *a6 != 3 && (unsigned __int8)sub_40B5F7(*((_QWORD *)a6 + 7), old, &v186) )
        {
          v36 = sub_40E36E(1LL, name);
          v37 = sub_40E36E(0LL, old);
          v38 = gettext("will not overwrite just-created %s with %s");
          error(0, 0, v38, v37, v36);
          return 0LL;
        }
      }
      if ( (v168 & 0xF000) != 0x4000 && (v186.st_mode & 0xF000) == 0x4000 && (!*((_BYTE *)a6 + 24) || !*a6) )
      {
        v39 = sub_40E392(old);
        v40 = gettext("cannot overwrite directory %s with non-directory");
        error(0, 0, v40, v39);
        return 0LL;
      }
      if ( *((_BYTE *)a6 + 24) && (stat_buf.st_mode & 0xF000) == 0x4000 && (v186.st_mode & 0xF000) != 0x4000 && !*a6 )
      {
        v41 = sub_40E36E(0LL, old);
        v42 = sub_40E36E(0LL, name);
        v43 = gettext("cannot move directory onto non-directory: %s -> %s");
        error(0, 0, v43, v42, v41);
        return 0LL;
      }
      if ( *a6
        && (v44 = (_BYTE *)sub_40B393(name), !sub_404967(v44))
        && (*((_BYTE *)a6 + 24) || (v186.st_mode & 0xF000) != 0x4000) )
      {
        s1 = (char *)sub_40AD96(old, *a6);
        if ( !strcmp(s1, name) )
        {
          if ( *((_BYTE *)a6 + 24) )
            v45 = gettext("backing up %s would destroy source;  %s not moved");
          else
            v45 = gettext("backing up %s would destroy source;  %s not copied");
          format = v45;
          v46 = sub_40E36E(1LL, name);
          v47 = sub_40E36E(0LL, old);
          error(0, 0, format, v47, v46);
          free(s1);
          return 0LL;
        }
        s = s1;
        v48 = strlen(s1);
        n = v48 + 1;
        v49 = alloca(16 * ((v48 + 31) / 0x10));
        dest = (void *)(16 * (((unsigned __int64)&v150 + 7) >> 4));
        newa = (char *)memcpy(dest, s1, v48 + 1);
        free(s1);
        if ( rename(old, newa) )
        {
          if ( *__errno_location() != 2 )
          {
            v50 = sub_40E392(old);
            v51 = gettext("cannot backup %s");
            v52 = __errno_location();
            error(0, *v52, v51, v50);
            return 0LL;
          }
          newa = 0LL;
        }
        else
        {
          v157 = 1;
        }
        v153[0] = 1;
      }
      else if ( (v186.st_mode & 0xF000) != 0x4000
             && *((_BYTE *)a6 + 24) != 1
             && (*((_BYTE *)a6 + 21)
              || *((_BYTE *)a6 + 31) && v186.st_nlink > 1
              || a6[1] == 2 && (stat_buf.st_mode & 0xF000) != 0x8000) )
      {
        if ( unlink(old) && *__errno_location() != 2 )
        {
          v53 = sub_40E392(old);
          v54 = gettext("cannot remove %s");
          v55 = __errno_location();
          error(0, *v55, v54, v53);
          return 0LL;
        }
        v153[0] = 1;
        if ( *((_BYTE *)a6 + 43) )
        {
          v56 = sub_40E392(old);
          v57 = gettext("removed %s\n");
          printf(v57, v56);
        }
      }
    }
  }
  if ( v152 && *((_QWORD *)a6 + 7) && *((_BYTE *)a6 + 24) != 1 && !*a6 )
  {
    v162 = 1;
    if ( v161 )
    {
      v175 = &v186;
    }
    else if ( (unsigned int)sub_419BE0(old, &v188) )
    {
      v162 = 0;
    }
    else
    {
      v175 = &v188;
    }
    if ( v162 && (v175->st_mode & 0xF000) == 40960 && (unsigned __int8)sub_40B5F7(*((_QWORD *)a6 + 7), old, v175) )
    {
      v58 = sub_40E36E(1LL, old);
      v59 = sub_40E36E(0LL, name);
      v60 = gettext("will not copy %s through just-created symlink %s");
      error(0, 0, v60, v59, v58);
      return 0LL;
    }
  }
  if ( *((_BYTE *)a6 + 43) && (v168 & 0xF000) != 0x4000 )
  {
    if ( v157 )
      v61 = newa;
    else
      v61 = 0LL;
    sub_4071D8((__int64)name, (__int64)old, (__int64)v61);
  }
  if ( *((_BYTE *)a6 + 24) && stat_buf.st_nlink == 1 )
    goto LABEL_149;
  if ( *((_BYTE *)a6 + 31) && *((_BYTE *)a6 + 23) != 1 && (stat_buf.st_nlink > 1 || v152 && a6[1] == 3 || a6[1] == 4) )
    goto LABEL_148;
  if ( !*((_BYTE *)a6 + 39) || (v168 & 0xF000) != 0x4000 )
    goto LABEL_150;
  if ( v152 )
LABEL_148:
    v173 = sub_409DF5(old, stat_buf.st_ino, stat_buf.st_dev);
  else
LABEL_149:
    v173 = sub_409DA3(stat_buf.st_ino, stat_buf.st_dev);
LABEL_150:
  if ( v173 )
  {
    if ( (v168 & 0xF000) != 0x4000 )
    {
      if ( (unsigned __int8)sub_4072AE(v173, old, 1, *((_BYTE *)a6 + 43)) == 1 )
        return 1LL;
      goto LABEL_340;
    }
    if ( (unsigned __int8)sub_40FC0C(name, v173) )
    {
      v62 = sub_40E36E(1LL, qword_6224C8);
      v63 = sub_40E36E(0LL, qword_6224C0);
      v64 = gettext("cannot copy a directory, %s, into itself, %s");
      error(0, 0, v64, v63, v62);
      *a9 = 1;
LABEL_340:
      if ( *((_BYTE *)a6 + 34) )
        sub_407268();
      if ( !v173 )
        sub_409D4C(stat_buf.st_ino, stat_buf.st_dev);
      if ( newa )
      {
        if ( rename(newa, old) )
        {
          v143 = sub_40E392(old);
          v144 = gettext("cannot un-backup %s");
          v145 = __errno_location();
          error(0, *v145, v144, v143);
        }
        else if ( *((_BYTE *)a6 + 43) )
        {
          v146 = sub_40E36E(1LL, old);
          v147 = sub_40E36E(0LL, newa);
          v148 = gettext("%s -> %s (unbackup)\n");
          printf(v148, v147, v146);
        }
      }
      return 0LL;
    }
    if ( a6[1] != 4 )
    {
      v65 = sub_40E36E(1LL, v173);
      v66 = sub_40E36E(0LL, old);
      v67 = gettext("will not create hard link %s to directory %s");
      error(0, 0, v67, v66, v65);
      goto LABEL_340;
    }
  }
  if ( *((_BYTE *)a6 + 24) )
  {
    if ( !rename(name, old) )
    {
      if ( *((_BYTE *)a6 + 43) && (v168 & 0xF000) == 0x4000 )
      {
        if ( v157 )
          v68 = newa;
        else
          v68 = 0LL;
        sub_4071D8((__int64)name, (__int64)old, (__int64)v68);
      }
      if ( a10 )
        *a10 = 1;
      if ( v152 )
        sub_40B55C(*((_QWORD *)a6 + 7), old, &stat_buf);
      return 1LL;
    }
    if ( *__errno_location() == 22 )
    {
      v69 = sub_40E36E(1LL, qword_6224C8);
      v70 = sub_40E36E(0LL, qword_6224C0);
      v71 = gettext("cannot move %s to a subdirectory of itself, %s");
      error(0, 0, v71, v70, v69);
      *a9 = 1;
      return 1LL;
    }
    if ( *__errno_location() != 18 )
    {
      v72 = sub_40E36E(1LL, old);
      v73 = sub_40E36E(0LL, name);
      v74 = gettext("cannot move %s to %s");
      v75 = __errno_location();
      error(0, *v75, v74, v73, v72);
      sub_409D4C(stat_buf.st_ino, stat_buf.st_dev);
      return 0LL;
    }
    if ( unlink(old) && *__errno_location() != 2 )
    {
      v76 = sub_40E36E(1LL, old);
      v77 = sub_40E36E(0LL, name);
      v78 = gettext("inter-device move failed: %s to %s; unable to remove target");
      v79 = __errno_location();
      error(0, *v79, v78, v77, v76);
      sub_409D4C(stat_buf.st_ino, stat_buf.st_dev);
      return 0LL;
    }
    v153[0] = 1;
  }
  if ( *((_BYTE *)a6 + 40) )
    v80 = a6[4] & 0xFFF;
  else
    v80 = v168 & 0xFFF;
  v171 = v80;
  if ( *((_BYTE *)a6 + 28) != 1 )
  {
    if ( (v168 & 0xF000) == 0x4000 )
      v81 = 18;
    else
      v81 = 0;
  }
  else
  {
    v81 = 63;
  }
  HIDWORD(v169) = v171 & v81;
  v158 = 1;
  if ( *((_BYTE *)a6 + 34) )
  {
    v82 = *((_BYTE *)a6 + 32) != 1 || *((_BYTE *)a6 + 35);
    v165 = v82;
    v83 = !v82 && *((_BYTE *)a6 + 38) != 1;
    v166 = v83;
    if ( (int)sub_404924(name, &v188) < 0 )
    {
      if ( v165 || v166 && (v88 = __errno_location(), !sub_4053F1(*v88)) )
      {
        v89 = sub_40E392(name);
        v90 = gettext("failed to get security context of %s");
        v91 = __errno_location();
        error(0, *v91, v90, v89);
      }
      if ( *((_BYTE *)a6 + 35) )
        return 0LL;
    }
    else
    {
      if ( (int)sub_404906(v188.st_dev) < 0 )
      {
        if ( v165 || v166 && (v84 = __errno_location(), !sub_4053F1(*v84)) )
        {
          v85 = sub_40E392(v188.st_dev);
          v86 = gettext("failed to set default file creation context to %s");
          v87 = __errno_location();
          error(0, *v87, v86, v85);
        }
        if ( *((_BYTE *)a6 + 35) )
        {
          sub_4048DE();
          return 0LL;
        }
      }
      sub_4048DE();
    }
  }
  if ( (v168 & 0xF000) == 0x4000 )
  {
    if ( (unsigned __int8)sub_40539A(&stat_buf, v150) )
    {
      v92 = sub_40E392(name);
      v93 = gettext("cannot copy cyclic symbolic link %s");
      error(0, 0, v93, v92);
      goto LABEL_340;
    }
    v94 = alloca(48LL);
    v181 = (_QWORD *)(16 * (((unsigned __int64)&v150 + 7) >> 4));
    *v181 = v150;
    v181[1] = stat_buf.st_ino;
    v181[2] = stat_buf.st_dev;
    if ( !v153[0] && (v186.st_mode & 0xF000) == 0x4000 )
    {
      HIDWORD(v169) = 0;
    }
    else
    {
      if ( mkdir(old, v171 & ~HIDWORD(v169)) )
      {
        v95 = sub_40E392(old);
        v96 = gettext("cannot create directory %s");
        v97 = __errno_location();
        error(0, *v97, v96, v95);
        goto LABEL_340;
      }
      if ( (unsigned int)sub_419BE0(old, &v186) )
      {
        v98 = sub_40E392(old);
        v99 = gettext("cannot stat %s");
        v100 = __errno_location();
        error(0, *v100, v99, v98);
        goto LABEL_340;
      }
      if ( (v186.st_mode & 0x1C0) != 448 )
      {
        LODWORD(v169) = v186.st_mode;
        v156 = 1;
        if ( chmod(old, v186.st_mode | 0x1C0) )
        {
          v101 = sub_40E392(old);
          v102 = gettext("setting permissions for %s");
          v103 = __errno_location();
          error(0, *v103, v102, v101);
          goto LABEL_340;
        }
      }
      if ( *a8 != 1 )
      {
        sub_409DF5(old, v186.st_ino, v186.st_dev);
        *a8 = 1;
      }
      if ( *((_BYTE *)a6 + 43) )
        sub_4071D8((__int64)name, (__int64)old, 0LL);
    }
    if ( !*((_BYTE *)a6 + 27) || !v151 || stat_buf.st_dev == v151 )
      v158 = sub_405432((__int64)name, (__int64)old, v153[0], &stat_buf, (int)v181, (__int64)a6, a8, a9);
  }
  else if ( *((_BYTE *)a6 + 41) )
  {
    v160 = 1;
    if ( *name != 47 )
    {
      s2 = (char *)sub_40B245(old);
      v104 = !strcmp(".", s2)
          || (unsigned int)sub_419BC0(".", &v187)
          || (unsigned int)sub_419BC0(s2, &v188)
          || v187.st_ino == v188.st_ino && v187.st_dev == v188.st_dev;
      v167 = v104;
      free(s2);
      if ( !v167 )
      {
        v105 = sub_40E392(old);
        v106 = gettext("%s: can make relative symbolic links only in current directory");
        error(0, 0, v106, v105);
        goto LABEL_340;
      }
    }
    if ( symlink(name, old) )
    {
      v107 = sub_40E36E(1LL, name);
      v108 = sub_40E36E(0LL, old);
      v109 = gettext("cannot create symbolic link %s to %s");
      v110 = __errno_location();
      error(0, *v110, v109, v108, v107);
      goto LABEL_340;
    }
  }
  else if ( *((_BYTE *)a6 + 23) )
  {
    if ( (unsigned __int8)sub_4072AE((__int64)name, old, 0, 0) != 1 )
      goto LABEL_340;
  }
  else if ( (v168 & 0xF000) == 0x8000 || *((_BYTE *)a6 + 20) && (v168 & 0xF000) != 40960 )
  {
    v159 = 1;
    if ( (unsigned __int8)sub_4059D1(
                            (__int64)name,
                            old,
                            (__int64)a6,
                            v168 & 0x1FF,
                            SHIDWORD(v169),
                            v153,
                            (__int64)&stat_buf) != 1 )
      goto LABEL_340;
  }
  else
  {
    switch ( v168 & 0xF000 )
    {
      case 0x1000u:
        if ( (unsigned int)sub_419BF0(old, v168 & ~HIDWORD(v169)) )
        {
          v111 = v168 & ~HIDWORD(v169);
          BYTE1(v111) &= 0xEFu;
          if ( mkfifo(old, v111) )
          {
            v112 = sub_40E392(old);
            v113 = gettext("cannot create fifo %s");
            v114 = __errno_location();
            error(0, *v114, v113, v112);
            goto LABEL_340;
          }
        }
        break;
      case 0x6000u:
      case 0x2000u:
      case 0xC000u:
        if ( (unsigned int)sub_419BF0(old, v168 & ~HIDWORD(v169)) )
        {
          v115 = sub_40E392(old);
          v116 = gettext("cannot create special file %s");
          v117 = __errno_location();
          error(0, *v117, v116, v115);
          goto LABEL_340;
        }
        break;
      case 0xA000u:
        from = (char *)sub_40A7FC(name, stat_buf.st_size);
        v160 = 1;
        if ( !from )
        {
          v118 = sub_40E392(name);
          v119 = gettext("cannot read symbolic link %s");
          v120 = __errno_location();
          error(0, *v120, v119, v118);
          goto LABEL_340;
        }
        if ( symlink(from, old) )
        {
          errnum = *__errno_location();
          v163 = 0;
          if ( *((_BYTE *)a6 + 42) )
          {
            if ( v153[0] != 1 && (v186.st_mode & 0xF000) == 40960 )
            {
              v121 = v186.st_size;
              if ( v121 == strlen(from) )
              {
                v184 = (char *)sub_40A7FC(old, v186.st_size);
                if ( v184 && !strcmp(v184, from) )
                  v163 = 1;
                free(v184);
              }
            }
          }
          free(from);
          if ( v163 != 1 )
          {
            v122 = sub_40E392(old);
            v123 = gettext("cannot create symbolic link %s");
            error(0, errnum, v123, v122);
            goto LABEL_340;
          }
        }
        else
        {
          free(from);
        }
        if ( *((_BYTE *)a6 + 34) )
          sub_407268();
        if ( *((_BYTE *)a6 + 28)
          && lchown(old, stat_buf.st_uid, stat_buf.st_gid)
          && (unsigned __int8)sub_409BE0(a6) != 1 )
        {
          v124 = gettext("failed to preserve ownership for %s");
          v125 = __errno_location();
          error(0, *v125, v124, old);
          goto LABEL_340;
        }
        break;
      default:
        v126 = sub_40E392(name);
        v127 = gettext("%s has unknown file type");
        error(0, 0, v127, v126);
        goto LABEL_340;
    }
  }
  if ( v152 && *((_QWORD *)a6 + 7) && !(unsigned int)sub_419BE0(old, &v188) )
    sub_40B55C(*((_QWORD *)a6 + 7), old, &v188);
  if ( *((_BYTE *)a6 + 23) && (v168 & 0xF000) != 0x4000 )
    return v158;
  if ( v159 )
    return v158;
  if ( *((_BYTE *)a6 + 30) )
  {
    v188.st_dev = sub_404B16((__int64)&stat_buf);
    v188.st_ino = v128;
    v188.st_nlink = sub_404B2C((__int64)&stat_buf);
    *(_QWORD *)&v188.st_mode = v129;
    if ( v160 ? (unsigned int)sub_404B42((__int64)old, (__int64)&v188) != 0 : (unsigned int)sub_411A21(old, &v188) != 0 )
    {
      v131 = sub_40E392(old);
      v132 = gettext("preserving times for %s");
      v133 = __errno_location();
      error(0, *v133, v132, v131);
      if ( *((_BYTE *)a6 + 33) )
        return 0LL;
    }
  }
  if ( v160 )
    return v158;
  if ( *((_BYTE *)a6 + 28) && (v153[0] || stat_buf.st_uid != v186.st_uid || stat_buf.st_gid != v186.st_gid) )
  {
    v134 = sub_4056B2((__int64)a6, old, 0xFFFFFFFF, &stat_buf, v153[0], (__int64)&v186);
    if ( v134 == -1 )
      return 0LL;
    if ( !v134 )
      v168 &= 0xFFFFF1FF;
  }
  v135 = old;
  sub_405931();
  if ( *((_BYTE *)a6 + 36) )
  {
    v135 = name;
    if ( (unsigned __int8)sub_405415(name, 0xFFFFFFFFLL, old, 0xFFFFFFFFLL, a6) != 1 )
    {
      if ( *((_BYTE *)a6 + 37) )
        return 0LL;
    }
  }
  if ( *((_BYTE *)a6 + 29) || *((_BYTE *)a6 + 24) )
  {
    if ( (unsigned int)sub_40A72C(name, 0xFFFFFFFFLL, old, 0xFFFFFFFFLL, v168) && *((_BYTE *)a6 + 33) )
      return 0LL;
  }
  else if ( *((_BYTE *)a6 + 40) )
  {
    if ( (unsigned int)sub_40A684(old, 0xFFFFFFFFLL, a6[4]) )
      return 0LL;
  }
  else
  {
    if ( HIDWORD(v169) )
    {
      v136 = sub_409C68(v135, 0xFFFFFFFFLL);
      HIDWORD(v169) &= ~v136;
      if ( HIDWORD(v169) )
      {
        if ( v156 != 1 )
        {
          if ( v153[0] && (unsigned int)sub_419BE0(old, &v186) )
          {
            v137 = sub_40E392(old);
            v138 = gettext("cannot stat %s");
            v139 = __errno_location();
            error(0, *v139, v138, v137);
            return 0LL;
          }
          LODWORD(v169) = v186.st_mode;
          if ( (HIDWORD(v169) & ~v186.st_mode) != 0 )
            v156 = 1;
        }
      }
    }
    if ( v156 )
    {
      if ( chmod(old, HIDWORD(v169) | v169) )
      {
        v140 = sub_40E392(old);
        v141 = gettext("preserving permissions for %s");
        v142 = __errno_location();
        error(0, *v142, v141, v140);
        if ( *((_BYTE *)a6 + 33) )
          return 0LL;
      }
    }
  }
  return v158;
}
