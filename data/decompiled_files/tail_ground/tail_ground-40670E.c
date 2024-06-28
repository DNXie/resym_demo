#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  char *v6; // rbx
  int *v7; // rax
  char *v8; // rbx
  int *v9; // rax
  int *v10; // rax
  char *const *v11; // [rsp+10h] [rbp-60h]
  int v12; // [rsp+1Ch] [rbp-54h]
  bool v13; // [rsp+25h] [rbp-4Bh]
  char v14; // [rsp+26h] [rbp-4Ah]
  _BYTE v15[5]; // [rsp+27h] [rbp-49h] BYREF
  int v16; // [rsp+2Ch] [rbp-44h]
  size_t v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-30h]
  char **v20; // [rsp+48h] [rbp-28h]
  unsigned __int64 i; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]

  *(_DWORD *)&v15[1] = 0;
  v13 = 1;
  v17 = 10LL;
  v18 = 0x3FF0000000000000LL;
  sub_408E96(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40C6B0(sub_40706C);
  byte_610328 = 0;
  byte_61031D = 1;
  byte_610320 = 0;
  byte_61031F = 0;
  byte_61031E = 0;
  *(_DWORD *)v15 = (unsigned __int8)sub_405E6B(a1, (__int64)a2, &v17);
  v12 = a1 - v15[0];
  v11 = &a2[v15[0]];
  sub_4060A8(v12, v11, (__int64)&v17, &v15[1], &v18);
  if ( byte_61031F && v17 )
    --v17;
  if ( optind >= v12 )
  {
    v19 = 1LL;
    v20 = off_610268;
  }
  else
  {
    v19 = v12 - optind;
    v20 = (char **)&v11[optind];
  }
  v14 = 0;
  for ( i = 0LL; i < v19; ++i )
  {
    if ( !strcmp(v20[i], "-") )
      v14 = 1;
  }
  if ( v14 && dword_610250 == 1 )
  {
    v3 = sub_408FA1("-");
    v4 = gettext("cannot follow %s by name");
    error(1, 0, v4, v3);
  }
  if ( byte_61031E && v14 && isatty(0) )
  {
    v5 = gettext("warning: following standard input indefinitely is ineffective");
    error(0, 0, v5);
  }
  v22 = sub_40B048(v19, 96LL);
  for ( i = 0LL; i < v19; ++i )
    *(_QWORD *)(v22 + 96 * i) = v20[i];
  if ( *(_DWORD *)&v15[1] == 1 || !*(_DWORD *)&v15[1] && v19 > 1 )
    byte_610320 = 1;
  for ( i = 0LL; i < v19; ++i )
    v13 = (v13 & (unsigned __int8)sub_405A52(96 * i + v22, v17)) != 0;
  if ( byte_61031E && sub_4065F0(v22, v19) )
  {
    if ( byte_61032A != 1 && ((unsigned __int8)sub_40433B(v22, v19) || (unsigned __int8)sub_4042C3(v22, v19)) )
      byte_61032A = 1;
    if ( byte_61032A != 1 )
    {
      v16 = inotify_init();
      if ( v16 >= 0 )
      {
        if ( fflush_unlocked(stdout) )
        {
          v6 = gettext("write error");
          v7 = __errno_location();
          error(1, *v7, v6);
        }
        if ( (unsigned __int8)sub_40467E(v16, v22, v19, *(double *)&v18) != 1 )
          exit(1);
      }
      v8 = gettext("inotify cannot be used, reverting to polling");
      v9 = __errno_location();
      error(0, *v9, v8);
    }
    byte_61032A = 1;
    sub_40396A(v22, v19, *(double *)&v18);
  }
  if ( byte_610328 )
  {
    if ( close(0) < 0 )
    {
      v10 = __errno_location();
      error(1, *v10, "-");
    }
  }
  exit(!v13);
}
