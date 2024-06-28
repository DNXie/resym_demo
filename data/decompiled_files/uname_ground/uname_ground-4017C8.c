#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rbx
  int *v4; // rax
  int v5; // [rsp+1Ch] [rbp-1B4h]
  struct utsname name; // [rsp+30h] [rbp-1A0h] BYREF
  unsigned __int64 v7; // [rsp+1B8h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  sub_401BD0(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4042C0(sub_401A2E);
  v5 = sub_401545(a1, a2);
  if ( !v5 )
    v5 = 1;
  if ( (v5 & 0x1F) != 0 )
  {
    if ( uname(&name) == -1 )
    {
      v3 = gettext("cannot get system name");
      v4 = __errno_location();
      error(1, *v4, v3);
    }
    if ( (v5 & 1) != 0 )
      sub_401505(name.sysname);
    if ( (v5 & 2) != 0 )
      sub_401505(name.nodename);
    if ( (v5 & 4) != 0 )
      sub_401505(name.release);
    if ( (v5 & 8) != 0 )
      sub_401505(name.version);
    if ( (v5 & 0x10) != 0 )
      sub_401505(name.machine);
  }
  if ( (v5 & 0x20) != 0 && v5 != -1 )
    sub_401505("unknown");
  if ( (v5 & 0x40) != 0 && v5 != -1 )
    sub_401505("unknown");
  if ( (v5 & 0x80) != 0 )
    sub_401505("GNU/Linux");
  putchar_unlocked(10);
  exit(0);
}
