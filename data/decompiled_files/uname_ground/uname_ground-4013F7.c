#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4013F7(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // rbx
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax

  if ( a1 )
  {
    v1 = qword_606230;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_606230;
    v4 = gettext("Usage: %s [OPTION]...\n");
    printf(v4, v3);
    v5 = stdout;
    if ( dword_606180 == 1 )
    {
      v6 = gettext(
             "Print certain system information.  With no OPTION, same as -s.\n"
             "\n"
             "  -a, --all                print all information, in the following order,\n"
             "                             except omit -p and -i if unknown:\n"
             "  -s, --kernel-name        print the kernel name\n"
             "  -n, --nodename           print the network node hostname\n"
             "  -r, --kernel-release     print the kernel release\n");
      fputs_unlocked(v6, v5);
      v5 = stdout;
      v7 = gettext(
             "  -v, --kernel-version     print the kernel version\n"
             "  -m, --machine            print the machine hardware name\n"
             "  -p, --processor          print the processor type or \"unknown\"\n"
             "  -i, --hardware-platform  print the hardware platform or \"unknown\"\n"
             "  -o, --operating-system   print the operating system\n");
    }
    else
    {
      v7 = gettext("Print machine architecture.\n\n");
    }
    fputs_unlocked(v7, v5);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    sub_4012ED();
  }
  exit(a1);
}
