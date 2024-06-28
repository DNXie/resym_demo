#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rbx
  int *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rbx
  int *v11; // rax
  char *v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // bl
  __int64 v16; // rax
  char v17; // r15
  char v18; // r14
  char v19; // r13
  char v20; // r12
  char *v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  const char *v24; // rbx
  int *v25; // rax
  char *v26; // rbx
  int *v27; // rax
  __int64 v28[18]; // [rsp+0h] [rbp-1C0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-130h] BYREF
  int v30; // [rsp+98h] [rbp-128h]
  int v31; // [rsp+9Ch] [rbp-124h]
  char **argv; // [rsp+A0h] [rbp-120h]
  _BOOL4 v33; // [rsp+A8h] [rbp-118h]
  int argc; // [rsp+ACh] [rbp-114h]
  bool v35; // [rsp+B3h] [rbp-10Dh]
  char v36; // [rsp+B4h] [rbp-10Ch]
  char v37; // [rsp+B5h] [rbp-10Bh]
  char v38; // [rsp+B6h] [rbp-10Ah]
  char v39; // [rsp+B7h] [rbp-109h]
  char v40; // [rsp+B8h] [rbp-108h]
  char v41; // [rsp+B9h] [rbp-107h]
  unsigned __int8 v42; // [rsp+BAh] [rbp-106h]
  unsigned __int8 v43; // [rsp+BBh] [rbp-105h]
  int v44; // [rsp+BCh] [rbp-104h]
  int oflag; // [rsp+C0h] [rbp-100h]
  int v46; // [rsp+C4h] [rbp-FCh]
  void *v47; // [rsp+C8h] [rbp-F8h]
  __dev_t v48; // [rsp+D0h] [rbp-F0h]
  __ino_t v49; // [rsp+D8h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+E0h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+F0h] [rbp-D0h]
  void *ptr; // [rsp+F8h] [rbp-C8h]
  struct stat stat_buf; // [rsp+100h] [rbp-C0h] BYREF
  _BYTE v55[48]; // [rsp+190h] [rbp-30h] BYREF

  argc = a1;
  argv = a2;
  v50 = getpagesize();
  v35 = 1;
  v36 = 1;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  oflag = 0;
  sub_402F91(*a2);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4091C0(sub_402D05);
  while ( 1 )
  {
    v46 = getopt_long(argc, argv, "benstuvAET", &longopts, 0LL);
    if ( v46 == -1 )
      break;
    if ( v46 == 98 )
    {
      v38 = 1;
      v39 = 1;
    }
    else if ( v46 > 98 )
    {
      if ( v46 == 115 )
      {
        v40 = 1;
      }
      else if ( v46 > 115 )
      {
        if ( v46 != 117 )
        {
          if ( v46 < 117 )
          {
            v43 = 1;
            v42 = 1;
          }
          else
          {
            if ( v46 != 118 )
              goto LABEL_32;
            v42 = 1;
          }
        }
      }
      else if ( v46 == 101 )
      {
        v41 = 1;
        v42 = 1;
      }
      else
      {
        if ( v46 != 110 )
          goto LABEL_32;
        v38 = 1;
      }
    }
    else if ( v46 == 65 )
    {
      v42 = 1;
      v41 = 1;
      v43 = 1;
    }
    else
    {
      if ( v46 <= 65 )
      {
        if ( v46 == -131 )
        {
          v3 = sub_4037FD("Torbjorn Granlund", &unk_4097B3);
          sub_40605A(
            (_DWORD)stdout,
            (unsigned int)"cat",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60C290,
            v3,
            (unsigned int)"Richard M. Stallman",
            0);
          exit(0);
        }
        if ( v46 == -130 )
          sub_401C5F(0);
LABEL_32:
        sub_401C5F(1);
      }
      if ( v46 == 69 )
      {
        v41 = 1;
      }
      else
      {
        if ( v46 != 84 )
          goto LABEL_32;
        v43 = 1;
      }
    }
  }
  if ( (int)sub_4091E0(1, &stat_buf) < 0 )
  {
    v6 = gettext("standard output");
    v7 = __errno_location();
    error(1, *v7, v6);
  }
  qmemcpy(v28, &stat_buf, sizeof(v28));
  v51 = sub_401BFD(
          (__int64)&v29,
          (__int64)v55,
          (__int64)v28,
          0LL,
          v4,
          v5,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v28[7]);
  if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v48 = stat_buf.st_dev;
    v49 = stat_buf.st_ino;
  }
  else
  {
    v36 = 0;
  }
  s1 = "-";
  v44 = optind;
  while ( 1 )
  {
    if ( v44 < argc )
      s1 = argv[v44];
    if ( !strcmp(s1, "-") )
    {
      v37 = 1;
      fildes = 0;
    }
    else
    {
      fildes = open(s1, oflag);
      if ( fildes < 0 )
        goto LABEL_64;
    }
    if ( (int)sub_4091E0(fildes, &stat_buf) >= 0 )
    {
      qmemcpy(v28, &stat_buf, sizeof(v28));
      v52 = sub_401BFD(
              (__int64)&v29,
              (__int64)v55,
              (__int64)v28,
              0LL,
              v8,
              v9,
              v28[0],
              v28[1],
              v28[2],
              v28[3],
              v28[4],
              v28[5],
              v28[6],
              v28[7]);
      sub_402EA7((unsigned int)fildes, 0LL, 0LL, 2LL);
      if ( v36 && stat_buf.st_dev == v48 && stat_buf.st_ino == v49 && fildes )
      {
        v12 = s1;
        v13 = gettext("%s: input file is output file");
        error(0, 0, v13, v12);
        v35 = 0;
      }
      else
      {
        if ( v38 != 1 && v41 != 1 && v42 != 1 && v43 != 1 && v40 != 1 )
        {
          v14 = v52;
          if ( v51 >= v52 )
            v14 = v51;
          v52 = v14;
          v47 = (void *)sub_4062C2(v14 + v50 - 1);
          v15 = v35;
          v16 = sub_401AAD((__int64)v47, v50);
          v35 = (v15 & (unsigned __int8)sub_401E29(v16, v52)) != 0;
        }
        else
        {
          v47 = (void *)sub_4062C2(v52 + v50);
          ptr = (void *)sub_4062C2(v51 + 4 * v52 + v50 + 18);
          v33 = v35;
          v17 = v40;
          v18 = v41;
          v19 = v39;
          v20 = v38;
          v31 = v43;
          v30 = v42;
          v21 = (char *)sub_401AAD((__int64)ptr, v50);
          v22 = sub_401AAD((__int64)v47, v50);
          v23 = sub_401F7A(v22, v52, v21, v51, v30, v31, v20, v19, v18, v17);
          v35 = (v33 & v23) != 0;
          free(ptr);
        }
        free(v47);
      }
    }
    else
    {
      v10 = s1;
      v11 = __errno_location();
      error(0, *v11, "%s", v10);
      v35 = 0;
    }
    if ( strcmp(s1, "-") && close(fildes) < 0 )
    {
LABEL_64:
      v24 = s1;
      v25 = __errno_location();
      error(0, *v25, "%s", v24);
      v35 = 0;
    }
    if ( ++v44 >= argc )
    {
      if ( v37 )
      {
        if ( close(0) < 0 )
        {
          v26 = gettext("closing standard input");
          v27 = __errno_location();
          error(1, *v27, v26);
        }
      }
      exit(!v35);
    }
  }
}
