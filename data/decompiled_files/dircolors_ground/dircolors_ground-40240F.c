#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char **argv; // [rsp+0h] [rbp-70h]
  int argc; // [rsp+Ch] [rbp-64h]
  char v10; // [rsp+16h] [rbp-5Ah]
  char v11; // [rsp+17h] [rbp-59h]
  int v12; // [rsp+18h] [rbp-58h]
  int v13; // [rsp+1Ch] [rbp-54h]
  char *s; // [rsp+20h] [rbp-50h]
  char *v15; // [rsp+30h] [rbp-40h]
  size_t n; // [rsp+40h] [rbp-30h]
  char *v17; // [rsp+50h] [rbp-20h]

  v10 = 1;
  v12 = 2;
  v11 = 0;
  sub_402C44(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4055F0(sub_4028FC);
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = getopt_long(a1, a2, "bcp", &longopts, 0LL);
      if ( v13 == -1 )
      {
        argc = a1 - optind;
        argv = &a2[optind];
        if ( v11 && v12 != 2 )
        {
          v3 = gettext(
                 "the options to output dircolors' internal database and\n"
                 "to select a shell syntax are mutually exclusive");
          error(0, 0, v3);
          sub_401736(1);
        }
        if ( (unsigned __int8)(v11 ^ 1) < argc )
        {
          v4 = sub_402D4F(argv[(unsigned __int8)v11 ^ 1u]);
          v5 = gettext("extra operand %s");
          error(0, 0, v5, v4);
          if ( v11 )
          {
            v6 = gettext("file operands cannot be combined with --print-database (-p)");
            fprintf(stderr, "%s\n", v6);
          }
          sub_401736(1);
        }
        if ( v11 )
        {
          for ( s = "# Configuration file for dircolors, a utility to help you set the";
                (unsigned __int64)(s - "# Configuration file for dircolors, a utility to help you set the") <= 0x112F;
                s += strlen(s) + 1 )
          {
            puts(s);
          }
        }
        else
        {
          if ( v12 == 2 )
          {
            v12 = sub_40181B();
            if ( v12 == 2 )
            {
              v7 = gettext("no SHELL environment variable, and no shell type option given");
              error(1, 0, v7);
            }
          }
          _obstack_begin(&stru_609260, 0, 0, (void *(*)(__int64))malloc, free);
          if ( argc )
            v10 = sub_402338(*argv);
          else
            v10 = sub_401C89(0LL, 0LL);
          if ( v10 )
          {
            n = (unsigned int)(LODWORD(stru_609260.next_free) - LODWORD(stru_609260.object_base));
            v17 = stru_609260.object_base;
            if ( stru_609260.next_free == v17 )
              *((_BYTE *)&stru_609260 + 80) |= 2u;
            stru_609260.next_free = (char *)((__int64)&stru_609260.next_free[stru_609260.alignment_mask] & ~stru_609260.alignment_mask);
            if ( stru_609260.next_free - (char *)stru_609260.chunk > stru_609260.chunk_limit - (char *)stru_609260.chunk )
              stru_609260.next_free = stru_609260.chunk_limit;
            stru_609260.object_base = stru_609260.next_free;
            if ( v12 )
            {
              v15 = "'\n";
              fputs_unlocked("setenv LS_COLORS '", stdout);
            }
            else
            {
              v15 = "';\nexport LS_COLORS\n";
              fputs_unlocked("LS_COLORS='", stdout);
            }
            fwrite_unlocked(v17, 1uLL, n, stdout);
            fputs_unlocked(v15, stdout);
          }
        }
        exit(v10 == 0);
      }
      if ( v13 != 98 )
        break;
      v12 = 0;
    }
    if ( v13 <= 98 )
      break;
    if ( v13 == 99 )
    {
      v12 = 1;
    }
    else
    {
      if ( v13 != 112 )
        goto LABEL_15;
      v11 = 1;
    }
  }
  if ( v13 == -131 )
  {
    sub_404C19(
      (_DWORD)stdout,
      (unsigned int)"dircolors",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6091D0,
      (unsigned int)"H. Peter Anvin",
      0,
      (char)a2);
    exit(0);
  }
  if ( v13 == -130 )
    sub_401736(0);
LABEL_15:
  sub_401736(1);
}
