#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // er8
  int v7; // er9
  int *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  char v13; // [rsp+13h] [rbp-1Dh]
  int v14; // [rsp+14h] [rbp-1Ch]
  char *path; // [rsp+18h] [rbp-18h]

  v13 = 1;
  sub_402009(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40A060(sub_401E05);
  byte_60C239 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = getopt_long(a1, a2, "pv", &longopts, 0LL);
      if ( v14 == -1 )
      {
        if ( optind == a1 )
        {
          v3 = gettext("missing operand");
          error(0, 0, v3);
          sub_401979(1);
        }
        while ( optind < a1 )
        {
          path = a2[optind];
          if ( byte_60C23B )
          {
            v4 = sub_402114(path);
            v5 = (unsigned int)gettext("removing directory, %s");
            sub_401CE8((_DWORD)stdout, v5, v4, v5, v6, v7, (char)a2);
          }
          if ( rmdir(path) )
          {
            v8 = __errno_location();
            if ( !sub_4017E9(*v8, path) )
            {
              v9 = sub_402114(path);
              v10 = gettext("failed to remove %s");
              v11 = __errno_location();
              error(0, *v11, v10, v9);
              v13 = 0;
            }
          }
          else if ( byte_60C239 )
          {
            v13 &= sub_401845(path);
          }
          ++optind;
        }
        exit(v13 == 0);
      }
      if ( v14 != 112 )
        break;
      byte_60C239 = 1;
    }
    if ( v14 <= 112 )
      break;
    if ( v14 == 118 )
    {
      byte_60C23B = 1;
    }
    else
    {
      if ( v14 != 128 )
        goto LABEL_15;
      byte_60C23A = 1;
    }
  }
  if ( v14 == -131 )
  {
    sub_403FDE(
      (_DWORD)stdout,
      (unsigned int)"rmdir",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_60C1C0,
      (unsigned int)"David MacKenzie",
      0,
      (char)a2);
    exit(0);
  }
  if ( v14 == -130 )
    sub_401979(0);
LABEL_15:
  sub_401979(1);
}
