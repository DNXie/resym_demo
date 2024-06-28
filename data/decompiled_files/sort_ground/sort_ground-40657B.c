#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40657B(__int64 *a1, char a2)
{
  const char *v2; // rax
  const char *v3; // rax
  const char *v4; // rax
  const char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  bool v8; // al
  bool v9; // al
  bool v10; // al
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rax
  char *v16; // rax
  bool v18; // [rsp+1Ch] [rbp-124h]
  bool v19; // [rsp+1Dh] [rbp-123h]
  char v20; // [rsp+1Fh] [rbp-121h]
  __int64 v21; // [rsp+20h] [rbp-120h]
  __int64 v22; // [rsp+28h] [rbp-118h]
  __int64 v23; // [rsp+30h] [rbp-110h]
  unsigned __int64 v24; // [rsp+38h] [rbp-108h]
  __int64 v25; // [rsp+40h] [rbp-100h]
  char *v26; // [rsp+48h] [rbp-F8h]
  char *v27; // [rsp+50h] [rbp-F0h]
  __int64 v28[4]; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-C0h]
  __int64 v30; // [rsp+88h] [rbp-B8h]
  __int64 v31; // [rsp+90h] [rbp-B0h]
  __int64 v32; // [rsp+98h] [rbp-A8h]
  __int64 v33; // [rsp+A0h] [rbp-A0h]
  char v34[32]; // [rsp+B0h] [rbp-90h] BYREF
  _WORD v35[24]; // [rsp+D0h] [rbp-70h] BYREF
  char s[56]; // [rsp+100h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+138h] [rbp-8h]

  v37 = __readfsqword(0x28u);
  v28[0] = *a1;
  v28[1] = a1[1];
  v28[2] = a1[2];
  v28[3] = a1[3];
  v29 = a1[4];
  v30 = a1[5];
  v31 = a1[6];
  v32 = a1[7];
  v33 = a1[8];
  v22 = 1LL;
  v21 = qword_61DA08;
  while ( v21 )
  {
    if ( *(_BYTE *)(v21 + 57) )
    {
      v23 = *(_QWORD *)v21;
      v25 = *(_QWORD *)(v21 + 16);
      if ( *(_QWORD *)v21 == -1LL )
        v23 = 0LL;
      v2 = (const char *)sub_410B71(v23, v34);
      v35[0] = 43;
      v26 = stpcpy((char *)v35 + 1, v2);
      v3 = (const char *)sub_410B71(v23 + 1, v34);
      *(_DWORD *)s = 2124589;
      v27 = stpcpy(&s[3], v3);
      if ( *(_QWORD *)(v21 + 16) != -1LL )
      {
        v4 = (const char *)sub_410B71(v25 + 1, v34);
        strcpy(v26, " -");
        strcpy(v26 + 2, v4);
        v5 = (const char *)sub_410B71((*(_QWORD *)(v21 + 24) == -1LL) + v25 + 1, v34);
        *(_WORD *)v27 = 44;
        strcpy(v27 + 1, v5);
      }
      v6 = gettext("obsolescent key `%s' used; consider `%s' instead");
      error(0, 0, v6, v35, s);
    }
    if ( *(_QWORD *)v21 != -1LL && *(_QWORD *)(v21 + 16) < *(_QWORD *)v21 )
    {
      v7 = gettext("key %lu has zero width and will be ignored");
      error(0, 0, v7, v22);
    }
    v8 = sub_40603C((_BYTE *)v21) || *(_BYTE *)(v21 + 54);
    v18 = v8;
    v9 = byte_61D5C8 != 1 && sub_406393(v21) && !*(_QWORD *)(v21 + 8) && !*(_QWORD *)(v21 + 24);
    v19 = v9;
    v10 = !*(_QWORD *)(v21 + 16) && *(_QWORD *)(v21 + 24);
    if ( a2 != 1
      && dword_61D4E8 == 128
      && !v10
      && (*(_BYTE *)(v21 + 48) != 1 && !v18 && !v19
       || *(_BYTE *)(v21 + 48) != 1 && *(_QWORD *)(v21 + 8)
       || *(_BYTE *)(v21 + 49) != 1 && *(_QWORD *)(v21 + 24)) )
    {
      v11 = gettext("leading blanks are significant in key %lu; consider also specifying `b'");
      error(0, 0, v11, v22);
    }
    if ( a2 != 1 && sub_40603C((_BYTE *)v21) )
    {
      v24 = *(_QWORD *)v21 + 1LL;
      if ( *(_QWORD *)v21 == -1LL )
        v24 = 1LL;
      if ( *(_QWORD *)(v21 + 16) == -1LL || v24 < *(_QWORD *)(v21 + 16) + 1LL )
      {
        v12 = gettext("key %lu is numeric and spans multiple fields");
        error(0, 0, v12, v22);
      }
    }
    if ( v29 && v29 == *(_QWORD *)(v21 + 32) )
      v29 = 0LL;
    if ( v30 && v30 == *(_QWORD *)(v21 + 40) )
      v30 = 0LL;
    LOBYTE(v31) = (unsigned __int8)(v31 & (*(_BYTE *)(v21 + 48) ^ 1)) != 0;
    BYTE1(v31) = (BYTE1(v31) & (*(_BYTE *)(v21 + 49) ^ 1)) != 0;
    BYTE6(v31) = (BYTE6(v31) & (*(_BYTE *)(v21 + 54) ^ 1)) != 0;
    BYTE2(v31) = (BYTE2(v31) & (*(_BYTE *)(v21 + 50) ^ 1)) != 0;
    BYTE4(v31) = (BYTE4(v31) & (*(_BYTE *)(v21 + 52) ^ 1)) != 0;
    BYTE5(v31) = (BYTE5(v31) & (*(_BYTE *)(v21 + 53) ^ 1)) != 0;
    BYTE3(v31) = (BYTE3(v31) & (*(_BYTE *)(v21 + 51) ^ 1)) != 0;
    LOBYTE(v32) = (unsigned __int8)(v32 & (*(_BYTE *)(v21 + 56) ^ 1)) != 0;
    HIBYTE(v31) = (HIBYTE(v31) & (*(_BYTE *)(v21 + 55) ^ 1)) != 0;
    v21 = *(_QWORD *)(v21 + 64);
    ++v22;
  }
  if ( !sub_406393((__int64)v28) || HIBYTE(v31) && (byte_61DA01 || byte_61DA02) && qword_61DA08 )
  {
    v20 = HIBYTE(v31);
    if ( byte_61DA01 != 1 && byte_61DA02 != 1 )
      HIBYTE(v31) = 0;
    sub_406428((__int64)v28, s);
    v13 = strlen(s);
    v14 = sub_402B44(v13);
    v15 = ngettext("option `-%s' is ignored", "options `-%s' are ignored", v14);
    error(0, 0, v15, s);
    HIBYTE(v31) = v20;
  }
  if ( HIBYTE(v31) && byte_61DA01 != 1 && byte_61DA02 != 1 && qword_61DA08 )
  {
    v16 = gettext("option `-r' only applies to last-resort comparison");
    error(0, 0, v16);
  }
  return __readfsqword(0x28u) ^ v37;
}
