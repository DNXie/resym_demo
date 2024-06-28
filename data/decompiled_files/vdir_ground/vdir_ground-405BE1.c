#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405BE1(char *a1, int a2, __int64 a3, unsigned __int8 a4, const char *a5)
{
  size_t v5; // rbx
  void *v6; // rsp
  char v7; // al
  char *v8; // rax
  __int64 v10; // rax
  char v11; // al
  int v12; // eax
  int v13; // eax
  const char *v14; // rbx
  int *v15; // rax
  __int64 v16; // rax
  const char *v17; // rax
  unsigned int v18; // eax
  const char *v19; // rax
  unsigned int v20; // eax
  const char *v21; // rax
  __int64 v22; // rax
  const char *v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+8h] [rbp-3D8h] BYREF
  unsigned __int8 v27; // [rsp+10h] [rbp-3D0h]
  int v28; // [rsp+14h] [rbp-3CCh]
  char *v29; // [rsp+18h] [rbp-3C8h]
  char v30; // [rsp+24h] [rbp-3BCh]
  bool v31; // [rsp+25h] [rbp-3BBh]
  bool v32; // [rsp+26h] [rbp-3BAh]
  char v33; // [rsp+27h] [rbp-3B9h]
  int v34; // [rsp+28h] [rbp-3B8h]
  int v35; // [rsp+2Ch] [rbp-3B4h]
  int v36; // [rsp+30h] [rbp-3B0h]
  int v37; // [rsp+34h] [rbp-3ACh]
  int v38; // [rsp+38h] [rbp-3A8h]
  int v39; // [rsp+3Ch] [rbp-3A4h]
  int v40; // [rsp+40h] [rbp-3A0h]
  int v41; // [rsp+44h] [rbp-39Ch]
  int v42; // [rsp+48h] [rbp-398h]
  int v43; // [rsp+4Ch] [rbp-394h]
  int v44; // [rsp+50h] [rbp-390h]
  int v45; // [rsp+54h] [rbp-38Ch]
  __int64 v46; // [rsp+58h] [rbp-388h]
  char *filename; // [rsp+60h] [rbp-380h]
  void *s; // [rsp+68h] [rbp-378h]
  void *ptr; // [rsp+70h] [rbp-370h]
  __int64 v50; // [rsp+78h] [rbp-368h]
  struct stat stat_buf; // [rsp+80h] [rbp-360h] BYREF
  char v52[32]; // [rsp+110h] [rbp-2D0h] BYREF
  char v53[664]; // [rsp+130h] [rbp-2B0h] BYREF
  unsigned __int64 v54; // [rsp+3C8h] [rbp-18h]

  v29 = a1;
  v28 = a2;
  v26 = a3;
  v27 = a4;
  v54 = __readfsqword(0x28u);
  v46 = 0LL;
  if ( a4 && v26 )
    __assert_fail("! command_line_arg || inode == NOT_AN_INODE_NUMBER", "../../src/src/ls.c", 0xABCu, "gobble_file");
  if ( qword_61D638 == qword_61D630 )
  {
    qword_61D628 = sub_41487E(qword_61D628, qword_61D630, 384LL);
    qword_61D630 *= 2LL;
  }
  s = (void *)(qword_61D628 + 192 * qword_61D638);
  memset(s, 0, 0xC0uLL);
  *((_QWORD *)s + 3) = v26;
  *((_DWORD *)s + 40) = v28;
  if ( !v27
    && !byte_61D728
    && (v28 != 3 || !byte_61D6C0 || !sub_402C5C(0x13u) && !sub_402C5C(0x12u) && !sub_402C5C(0x14u))
    && (!byte_61D6D9 && !byte_61D729 || v28 != 6 && v28 || dword_61D6DC != 5 && !byte_61D650 && !byte_61D6D8)
    && (!byte_61D6D9 || v26)
    && (!byte_61D729
     || v28
     && (v28 != 5
      || dword_61D6BC != 3
      && (!byte_61D6C0 || !sub_402C5C(0xEu) && !sub_402C5C(0x10u) && !sub_402C5C(0x11u) && !sub_402C5C(0x15u)))) )
  {
    goto LABEL_132;
  }
  if ( *v29 != 47 && *a5 )
  {
    v5 = strlen(v29);
    v6 = alloca(16 * ((v5 + strlen(a5) + 32) / 0x10));
    filename = (char *)(16 * (((unsigned __int64)&v26 + 7) >> 4));
    sub_40A844(filename, a5, v29);
  }
  else
  {
    filename = v29;
  }
  if ( (unsigned int)dword_61D6DC < 3 )
    goto LABEL_45;
  if ( (unsigned int)dword_61D6DC <= 4 )
  {
    if ( v27 )
    {
      v34 = sub_415C20(filename, (struct stat *)((char *)s + 16));
      v30 = 1;
      if ( dword_61D6DC == 3 )
        goto LABEL_46;
      v7 = v34 >= 0 ? (*((_DWORD *)s + 10) & 0xF000) != 0x4000 : *__errno_location() == 2;
      v33 = v7;
      if ( v7 != 1 )
        goto LABEL_46;
    }
    goto LABEL_45;
  }
  if ( dword_61D6DC != 5 )
  {
LABEL_45:
    v34 = sub_415C40(filename, (struct stat *)((char *)s + 16));
    v30 = 0;
    goto LABEL_46;
  }
  v34 = sub_415C20(filename, (struct stat *)((char *)s + 16));
  v30 = 1;
LABEL_46:
  if ( v34 )
  {
    v8 = gettext("cannot access %s");
    sub_405087(v27, v8, (__int64)filename);
    if ( !v27 )
    {
      v10 = sub_414ADE(v29);
      *(_QWORD *)s = v10;
      ++qword_61D638;
    }
    return 0LL;
  }
  *((_BYTE *)s + 176) = 1;
  if ( (v28 == 5 || (*((_DWORD *)s + 10) & 0xF000) == 0x8000) && byte_61D6C0 && sub_402C5C(0x15u) )
  {
    v11 = sub_405AD8(filename);
    *((_BYTE *)s + 184) = v11;
  }
  if ( !dword_61D69C || byte_61D670 )
  {
    v31 = 0;
    v32 = 0;
    if ( v30 )
      v12 = sub_402527(filename, (char *)s + 168);
    else
      v12 = sub_402549(filename, (char *)s + 168);
    v35 = v12;
    v34 = v12 < 0;
    if ( v12 < 0 )
    {
      *((_QWORD *)s + 21) = &unk_61D380;
      if ( *__errno_location() == 95 || *__errno_location() == 95 || *__errno_location() == 61 )
        v34 = 0;
    }
    else
    {
      v31 = strcmp("unlabeled", *((const char **)s + 21)) != 0;
    }
    if ( !v34 && !dword_61D69C )
    {
      v36 = sub_40B0E0(filename, (char *)s + 16);
      v34 = v36 < 0;
      v32 = v36 > 0;
    }
    if ( v31 || v32 )
    {
      if ( v31 && !v32 )
        v13 = 1;
      else
        v13 = 2;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)s + 45) = v13;
    byte_61D671 = ((unsigned __int8)byte_61D671 | (*((_DWORD *)s + 45) != 0)) != 0;
    if ( v34 )
    {
      v14 = (const char *)sub_4113BF(filename);
      v15 = __errno_location();
      error(0, *v15, "%s", v14);
    }
  }
  if ( (*((_DWORD *)s + 10) & 0xF000) == 40960 && (!dword_61D69C || byte_61D6D8) )
  {
    sub_4068EA(filename, s, v27);
    ptr = (void *)sub_40694F(filename, *((_QWORD *)s + 1));
    if ( ptr && ((unsigned int)dword_61D6BC > 1 || byte_61D6D8) && !(unsigned int)sub_415C20((char *)ptr, &stat_buf) )
    {
      *((_BYTE *)s + 177) = 1;
      if ( v27 != 1 || !dword_61D69C || (stat_buf.st_mode & 0xF000) != 0x4000 )
        *((_DWORD *)s + 41) = stat_buf.st_mode;
    }
    free(ptr);
  }
  if ( (*((_DWORD *)s + 10) & 0xF000) == 40960 && byte_61D6D8 != 1 )
    *((_BYTE *)s + 177) = 1;
  if ( (*((_DWORD *)s + 10) & 0xF000) == 40960 )
  {
    *((_DWORD *)s + 40) = 6;
  }
  else if ( (*((_DWORD *)s + 10) & 0xF000) == 0x4000 )
  {
    if ( v27 && byte_61D6E1 != 1 )
      *((_DWORD *)s + 40) = 9;
    else
      *((_DWORD *)s + 40) = 3;
  }
  else
  {
    *((_DWORD *)s + 40) = 5;
  }
  v46 = *((_QWORD *)s + 10);
  if ( !dword_61D69C || byte_61D6AB )
  {
    v16 = sub_40DD65(v46, v53, (unsigned int)dword_61D6AC, 512LL, qword_61D6B0);
    v37 = sub_40F59D(v16, 0LL);
    if ( dword_61D678 < v37 )
      dword_61D678 = v37;
  }
  if ( !dword_61D69C )
  {
    if ( byte_61D382 )
    {
      v38 = sub_40877B(*((unsigned int *)s + 11));
      if ( dword_61D684 < v38 )
        dword_61D684 = v38;
    }
    if ( byte_61D383 )
    {
      v39 = sub_4087B8(*((unsigned int *)s + 12));
      if ( dword_61D688 < v39 )
        dword_61D688 = v39;
    }
    if ( byte_61D6A9 )
    {
      v40 = sub_40877B(*((unsigned int *)s + 11));
      if ( dword_61D68C < v40 )
        dword_61D68C = v40;
    }
  }
  if ( byte_61D670 )
  {
    v41 = strlen(*((const char **)s + 21));
    if ( dword_61D680 < v41 )
      dword_61D680 = v41;
  }
  if ( !dword_61D69C )
  {
    v17 = (const char *)sub_40EF8A(*((_QWORD *)s + 4), v52);
    v42 = strlen(v17);
    if ( dword_61D67C < v42 )
      dword_61D67C = v42;
    if ( (*((_DWORD *)s + 10) & 0xF000) == 0x2000 || (*((_DWORD *)s + 10) & 0xF000) == 24576 )
    {
      v18 = gnu_dev_major(*((_QWORD *)s + 7));
      v19 = (const char *)sub_40EF8A(v18, v53);
      v44 = strlen(v19);
      if ( dword_61D690 < v44 )
        dword_61D690 = v44;
      v20 = gnu_dev_minor(*((_QWORD *)s + 7));
      v21 = (const char *)sub_40EF8A(v20, v53);
      v44 = strlen(v21);
      if ( dword_61D694 < v44 )
        dword_61D694 = v44;
      v44 = dword_61D690 + 2 + dword_61D694;
      if ( dword_61D698 < v44 )
        dword_61D698 = v44;
    }
    else
    {
      v50 = sub_405ACA(*((_QWORD *)s + 8));
      v22 = sub_40DD65(v50, v53, (unsigned int)dword_61D6AC, 1LL, qword_61D388);
      v43 = sub_40F59D(v22, 0LL);
      if ( dword_61D698 < v43 )
        dword_61D698 = v43;
    }
  }
LABEL_132:
  if ( byte_61D6D9 )
  {
    v23 = (const char *)sub_40EF8A(*((_QWORD *)s + 3), v53);
    v45 = strlen(v23);
    if ( dword_61D674 < v45 )
      dword_61D674 = v45;
  }
  v24 = sub_414ADE(v29);
  *(_QWORD *)s = v24;
  ++qword_61D638;
  return v46;
}
