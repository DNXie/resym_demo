#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4025B0(const char *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  char *v7; // rax
  __int64 result; // rax
  char *v9; // rbx
  int *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rbx
  int *v14; // rax
  char *v15; // rbx
  int *v16; // rax
  char *v17; // rbx
  int *v18; // rax
  char *v19; // rbx
  int *v20; // rax
  char *v21; // rbx
  int *v22; // rax
  __int64 v23; // rbx
  const char *v24; // rax
  __int64 v25; // r12
  char *v26; // rbx
  int *v27; // rax
  char *v28; // rbx
  int *v29; // rax
  char *v30; // rbx
  int *v31; // rax
  __int64 v32; // rax
  int i; // [rsp+18h] [rbp-28h]
  __pid_t v34; // [rsp+1Ch] [rbp-24h]
  int pipedes[2]; // [rsp+20h] [rbp-20h] BYREF
  char *path; // [rsp+28h] [rbp-18h]

  if ( qword_610540 )
  {
    path = getenv("SHELL");
    if ( !path )
      path = "/bin/sh";
    if ( setenv("FILE", a1, 1) )
    {
      v9 = gettext("failed to set FILE environment variable");
      v10 = __errno_location();
      error(1, *v10, v9);
    }
    if ( byte_6106A8 )
    {
      v11 = sub_4060A6(a1);
      v12 = gettext("executing with FILE=%s\n");
      fprintf(stdout, v12, v11);
    }
    if ( pipe(pipedes) )
    {
      v13 = gettext("failed to create pipe");
      v14 = __errno_location();
      error(1, *v14, v13);
    }
    v34 = fork();
    if ( !v34 )
    {
      for ( i = 0; i < (unsigned __int64)qword_610560; ++i )
      {
        if ( close(*(_DWORD *)(4LL * i + qword_610550)) )
        {
          v15 = gettext("closing prior pipe");
          v16 = __errno_location();
          error(1, *v16, v15);
        }
      }
      if ( close(pipedes[1]) )
      {
        v17 = gettext("closing output pipe");
        v18 = __errno_location();
        error(1, *v18, v17);
      }
      if ( pipedes[0] )
      {
        if ( dup2(pipedes[0], 0) )
        {
          v19 = gettext("moving input pipe");
          v20 = __errno_location();
          error(1, *v20, v19);
        }
        if ( close(pipedes[0]) )
        {
          v21 = gettext("closing input pipe");
          v22 = __errno_location();
          error(1, *v22, v21);
        }
      }
      sigprocmask(2, &oset, 0LL);
      v23 = qword_610540;
      v24 = (const char *)sub_4051FC(path);
      execl(path, v24, "-c", v23, 0LL);
      v25 = qword_610540;
      v26 = gettext("failed to run command: \"%s -c %s\"");
      v27 = __errno_location();
      error(1, *v27, v26, path, v25);
    }
    if ( v34 == -1 )
    {
      v28 = gettext("fork system call failed");
      v29 = __errno_location();
      error(1, *v29, v28);
    }
    if ( close(pipedes[0]) )
    {
      v30 = gettext("failed to close input pipe");
      v31 = __errno_location();
      error(1, *v31, v30);
    }
    dword_610548 = v34;
    if ( qword_610560 == qword_610558 )
      qword_610550 = sub_408809(qword_610550, &qword_610558, 4LL);
    v32 = qword_610560++;
    *(_DWORD *)(qword_610550 + 4 * v32) = pipedes[1];
    result = (unsigned int)pipedes[1];
  }
  else
  {
    if ( byte_6106A8 )
    {
      v6 = sub_4060A6(a1);
      v7 = gettext("creating file %s\n");
      fprintf(stdout, v7, v6);
    }
    result = sub_4052B3((_DWORD)a1, 577, 438, a4, a5, a6);
  }
  return result;
}
