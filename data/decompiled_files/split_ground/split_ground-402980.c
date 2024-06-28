#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402980(__int64 a1, int a2, __pid_t a3, const char *a4)
{
  int *v4; // rax
  int *v5; // rax
  int *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  unsigned int v13; // ebx
  char *v14; // rax
  int stat_loc; // [rsp+60h] [rbp-40h] BYREF
  int i; // [rsp+64h] [rbp-3Ch]
  unsigned int v20; // [rsp+68h] [rbp-38h]
  int status; // [rsp+6Ch] [rbp-34h]
  char s[24]; // [rsp+70h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-18h]

  v23 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( (unsigned int)sub_409583(a1) )
    {
      v4 = __errno_location();
      if ( !sub_402178(*v4) )
      {
        v5 = __errno_location();
        error(1, *v5, "%s", a4);
      }
    }
  }
  if ( a2 >= 0 )
  {
    if ( !a1 && close(a2) < 0 )
    {
      v6 = __errno_location();
      error(1, *v6, "%s", a4);
    }
    for ( i = 0; i < (unsigned __int64)qword_610560; ++i )
    {
      if ( *(_DWORD *)(4LL * i + qword_610550) == a2 )
      {
        --qword_610560;
        *(_DWORD *)(qword_610550 + 4LL * i) = *(_DWORD *)(4 * qword_610560 + qword_610550);
        break;
      }
    }
  }
  if ( a3 > 0 )
  {
    stat_loc = 0;
    if ( waitpid(a3, &stat_loc, 0) == -1 && *__errno_location() != 10 )
    {
      v7 = gettext("waiting for child process");
      v8 = __errno_location();
      error(1, *v8, v7);
    }
    if ( (char)((stat_loc & 0x7F) + 1) >> 1 <= 0 )
    {
      if ( (stat_loc & 0x7F) != 0 )
      {
        v13 = stat_loc;
        v14 = gettext("unknown status from command (0x%X)");
        error(1, 0, v14, v13);
      }
      else
      {
        status = (stat_loc & 0xFF00) >> 8;
        if ( status )
        {
          v11 = qword_610540;
          v12 = gettext("with FILE=%s, exit %d from command: %s");
          error(status, 0, v12, a4, (unsigned int)status, v11);
        }
      }
    }
    else
    {
      v20 = stat_loc & 0x7F;
      if ( v20 != 13 )
      {
        if ( (unsigned int)sub_40995A(v20, s) )
          sprintf(s, "%d", v20);
        v9 = qword_610540;
        v10 = gettext("with FILE=%s, signal %s from command: %s");
        error(v20 + 128, 0, v10, a4, s, v9);
      }
    }
  }
  return __readfsqword(0x28u) ^ v23;
}
