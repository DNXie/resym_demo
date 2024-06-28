#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_403419(int a1, char **a2, __int64 a3, char a4, unsigned int *a5)
{
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  size_t v13; // rax
  void *v14; // rsp
  char *v15; // rax
  size_t v16; // rax
  void *v17; // rsp
  void *v18; // rax
  bool v19; // bl
  bool v20; // bl
  char *v21; // rax
  char v22; // al
  char *v25; // [rsp+8h] [rbp-158h] BYREF
  char **v26; // [rsp+10h] [rbp-150h]
  char v27; // [rsp+18h] [rbp-148h]
  int v28; // [rsp+1Ch] [rbp-144h]
  unsigned __int8 v29; // [rsp+2Fh] [rbp-131h] BYREF
  char v30; // [rsp+30h] [rbp-130h] BYREF
  bool v31; // [rsp+31h] [rbp-12Fh]
  char v32; // [rsp+32h] [rbp-12Eh]
  bool v33; // [rsp+33h] [rbp-12Dh]
  int i; // [rsp+34h] [rbp-12Ch]
  _QWORD *v35; // [rsp+38h] [rbp-128h] BYREF
  __int64 v36; // [rsp+40h] [rbp-120h] BYREF
  void *v37; // [rsp+48h] [rbp-118h]
  char *v38; // [rsp+50h] [rbp-110h]
  char *v39; // [rsp+58h] [rbp-108h]
  char *s; // [rsp+60h] [rbp-100h]
  size_t n; // [rsp+68h] [rbp-F8h]
  void *dest; // [rsp+70h] [rbp-F0h]
  void *v43; // [rsp+78h] [rbp-E8h]
  char *v44; // [rsp+80h] [rbp-E0h]
  size_t v45; // [rsp+88h] [rbp-D8h]
  void *v46; // [rsp+90h] [rbp-D0h]
  void *v47; // [rsp+98h] [rbp-C8h]
  char *s1; // [rsp+A0h] [rbp-C0h]
  void *ptr; // [rsp+A8h] [rbp-B8h]
  char *v50; // [rsp+B0h] [rbp-B0h]
  char *s2; // [rsp+B8h] [rbp-A8h]
  struct stat v52; // [rsp+C0h] [rbp-A0h] BYREF

  v28 = a1;
  v26 = a2;
  v25 = (char *)a3;
  v27 = a4;
  v29 = 0;
  v31 = 1;
  if ( (a3 == 0) >= a1 )
  {
    if ( v28 > 0 )
    {
      v6 = sub_40E491(*v26);
      v7 = gettext("missing destination file operand after %s");
      error(0, 0, v7, v6);
    }
    else
    {
      v5 = gettext("missing file operand");
      error(0, 0, v5);
    }
    sub_402713(1);
  }
  if ( v27 )
  {
    if ( v25 )
    {
      v8 = gettext("cannot combine --target-directory (-t) and --no-target-directory (-T)");
      error(1, 0, v8);
    }
    if ( v28 > 2 )
    {
      v9 = sub_40E491(v26[2]);
      v10 = gettext("extra operand %s");
      error(0, 0, v10, v9);
      sub_402713(1);
    }
    v33 = sub_40335F(v26[v28 - 1], &v52, &v29);
  }
  else if ( !v25 )
  {
    if ( v28 > 1 && sub_40335F(v26[v28 - 1], &v52, &v29) )
    {
      v25 = v26[--v28];
    }
    else if ( v28 > 2 )
    {
      v11 = sub_40E491(v26[v28 - 1]);
      v12 = gettext("target %s is not a directory");
      error(1, 0, v12, v11);
    }
  }
  if ( v25 )
  {
    if ( v28 > 1 )
    {
      sub_406FBE(a5);
      sub_406FF3(a5);
    }
    for ( i = 0; i < v28; ++i )
    {
      v32 = 1;
      v36 = 0LL;
      v39 = v26[i];
      if ( byte_61D442 )
        sub_40B75B(v39);
      if ( byte_61D441 )
      {
        s = v39;
        v13 = strlen(v39);
        n = v13 + 1;
        v14 = alloca(16 * ((v13 + 31) / 0x10));
        dest = (void *)(16 * (((unsigned __int64)&v25 + 7) >> 4));
        v43 = memcpy(dest, s, v13 + 1);
        sub_40B75B(v43);
        v37 = (void *)sub_40BC5F(v25, v43, &v36);
        if ( *((_BYTE *)a5 + 43) )
          v15 = "%s -> %s\n";
        else
          v15 = 0LL;
        v32 = sub_402C84((char *)v37, v36 - (_QWORD)v37, v15, (__nlink_t *)&v35, &v29, a5);
      }
      else
      {
        v44 = v39;
        v16 = strlen(v39);
        v45 = v16 + 1;
        v17 = alloca(16 * ((v16 + 31) / 0x10));
        v46 = (void *)(16 * (((unsigned __int64)&v25 + 7) >> 4));
        v47 = memcpy(v46, v44, v16 + 1);
        s1 = (char *)sub_40B6A4(v47);
        sub_40B75B(s1);
        if ( !strcmp(s1, "..") )
          v18 = (void *)sub_41281A(v25);
        else
          v18 = (void *)sub_40BC5F(v25, s1, 0LL);
        v37 = v18;
      }
      if ( v32 != 1 )
      {
        v31 = 0;
      }
      else
      {
        v19 = v31;
        v31 = (v19 & (unsigned __int8)sub_4099F3(v39, v37, v29, a5, &v30, 0LL)) != 0;
        if ( byte_61D441 )
        {
          v20 = v31;
          v31 = (v20 & (unsigned __int8)sub_402998((char *)v37, v36 - (_QWORD)v37, (__int64)v35, a5)) != 0;
        }
      }
      if ( byte_61D441 )
      {
        while ( v35 )
        {
          ptr = v35;
          v35 = (_QWORD *)v35[20];
          free(ptr);
        }
      }
      free(v37);
    }
  }
  else
  {
    v50 = *v26;
    s2 = v26[1];
    if ( byte_61D441 )
    {
      v21 = gettext("with --parents, the destination must be a directory");
      error(0, 0, v21);
      sub_402713(1);
    }
    if ( *((_BYTE *)a5 + 22) && *a5 && !strcmp(v50, s2) && v29 != 1 && (v52.st_mode & 0xF000) == 0x8000 )
    {
      v38 = (char *)sub_40B0A7(s2, *a5);
      qword_61D460 = *(_QWORD *)a5;
      qword_61D468 = *((_QWORD *)a5 + 1);
      qword_61D470 = *((_QWORD *)a5 + 2);
      qword_61D478 = *((_QWORD *)a5 + 3);
      qword_61D480 = *((_QWORD *)a5 + 4);
      qword_61D488 = *((_QWORD *)a5 + 5);
      qword_61D490 = *((_QWORD *)a5 + 6);
      qword_61D498 = *((_QWORD *)a5 + 7);
      qword_61D4A0 = *((_QWORD *)a5 + 8);
      LODWORD(qword_61D460) = 0;
      v22 = sub_4099F3(v50, v38, 0LL, &qword_61D460, &v36, 0LL);
    }
    else
    {
      v38 = s2;
      v22 = sub_4099F3(v50, s2, 0LL, a5, &v36, 0LL);
    }
    v31 = v22;
  }
  return v31;
}
