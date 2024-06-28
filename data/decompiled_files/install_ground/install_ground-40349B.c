#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40349B(__int64 a1)
{
  __pid_t v1; // eax
  char *v2; // rbx
  int *v3; // rax
  char *v4; // r12
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  int stat_loc; // [rsp+28h] [rbp-18h] BYREF
  __pid_t pid; // [rsp+2Ch] [rbp-14h]

  v1 = fork();
  pid = v1;
  if ( v1 == -1 )
  {
    v2 = gettext("fork system call failed");
    v3 = __errno_location();
    error(1, *v3, v2);
  }
  else if ( v1 )
  {
    if ( waitpid(pid, &stat_loc, 0) >= 0 )
    {
      if ( (stat_loc & 0x7F) != 0 || (stat_loc & 0xFF00) >> 8 )
      {
        v9 = gettext("strip process terminated abnormally");
        error(1, 0, v9);
      }
    }
    else
    {
      v7 = gettext("waiting for strip");
      v8 = __errno_location();
      error(1, *v8, v7);
    }
  }
  else
  {
    execlp(arg, arg, a1, 0LL);
    v4 = arg;
    v5 = gettext("cannot run %s");
    v6 = __errno_location();
    error(1, *v6, v5, v4);
  }
}
