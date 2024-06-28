#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401DBB(const char *a1, const char *a2, char a3)
{
  int *v3; // rax
  int *v4; // rax
  char *v5; // rax
  char v7; // [rsp+26h] [rbp-AAh]
  bool v8; // [rsp+27h] [rbp-A9h]
  char *v9; // [rsp+28h] [rbp-A8h]
  char *v10; // [rsp+30h] [rbp-A0h]
  const void *v11; // [rsp+38h] [rbp-98h]
  unsigned __int64 v12; // [rsp+40h] [rbp-90h]
  _BYTE *v13; // [rsp+48h] [rbp-88h]
  char *v14; // [rsp+50h] [rbp-80h]
  __int64 v15; // [rsp+58h] [rbp-78h]
  const void *v16; // [rsp+60h] [rbp-70h]
  unsigned __int64 v17; // [rsp+68h] [rbp-68h]
  char *v18; // [rsp+70h] [rbp-60h]
  const void *v19; // [rsp+78h] [rbp-58h]
  unsigned __int64 v20; // [rsp+80h] [rbp-50h]
  char *v21; // [rsp+88h] [rbp-48h]
  char v22[16]; // [rsp+90h] [rbp-40h] BYREF
  void *ptr; // [rsp+A0h] [rbp-30h]
  char v24[8]; // [rsp+B0h] [rbp-20h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-18h]
  void *v26; // [rsp+C0h] [rbp-10h]

  if ( strcmp(a1, "-") && !sub_402F2F(a1, "r", stdin) )
  {
    v3 = __errno_location();
    error(1, *v3, "%s", a1);
  }
  if ( strcmp(a2, "-") && !sub_402F2F(a2, "w", stdout) )
  {
    v4 = __errno_location();
    error(1, *v4, "%s", a2);
  }
  sub_402EA2(stdin, 2LL);
  v9 = v22;
  v10 = v24;
  sub_4030DF(v22);
  sub_4030DF(v24);
  if ( byte_6092E4 && byte_6092E5 && dword_6092E0 == 1 )
  {
    while ( !feof_unlocked(stdin) && sub_40312D(v9, stdin, (unsigned int)a3) )
    {
      v16 = (const void *)sub_401B1A((__int64)v9);
      v17 = *((_QWORD *)v9 + 1) + *((_QWORD *)v9 + 2) - (_QWORD)v16 - 1LL;
      if ( !*((_QWORD *)v10 + 1) || sub_401C39(v16, v11, v17, v12) )
      {
        fwrite_unlocked(*((const void **)v9 + 2), 1uLL, *((_QWORD *)v9 + 1), stdout);
        v18 = v10;
        v10 = v9;
        v9 = v18;
        v11 = v16;
        v12 = v17;
      }
    }
  }
  else
  {
    v15 = 0LL;
    v7 = 1;
    if ( sub_40312D(v24, stdin, (unsigned int)a3) )
    {
      v13 = (_BYTE *)sub_401B1A((__int64)v24);
      v14 = (char *)(v25 + (_BYTE *)v26 - v13 - 1);
      while ( !feof_unlocked(stdin) )
      {
        if ( !sub_40312D(v9, stdin, (unsigned int)a3) )
        {
          if ( ferror_unlocked(stdin) )
            goto LABEL_39;
          break;
        }
        v19 = (const void *)sub_401B1A((__int64)v9);
        v20 = *((_QWORD *)v9 + 1) + *((_QWORD *)v9 + 2) - (_QWORD)v19 - 1LL;
        v8 = !sub_401C39(v19, v13, v20, (unsigned __int64)v14);
        v15 += v8;
        if ( v15 == -1 )
          v15 = -2LL;
        if ( dword_6092E8 )
        {
          if ( !v8 )
          {
            if ( v15 )
              v7 = 0;
          }
          else if ( v15 == 1 && (dword_6092E8 == 1 || dword_6092E8 == 2 && v7 != 1) )
          {
            putchar_unlocked(a3);
          }
        }
        if ( !v8 || byte_6092E6 )
        {
          sub_401D22((__int64)v10, v8, v15);
          v21 = v10;
          v10 = v9;
          v9 = v21;
          v13 = v19;
          v14 = (char *)v20;
          if ( !v8 )
            v15 = 0LL;
        }
      }
      sub_401D22((__int64)v10, 0, v15);
    }
  }
LABEL_39:
  if ( ferror_unlocked(stdin) || (unsigned int)sub_405E55(stdin) )
  {
    v5 = gettext("error reading %s");
    error(1, 0, v5, a1);
  }
  free(ptr);
  free(v26);
}
