#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40304B(int a1)
{
  __pid_t v1; // eax
  char *v2; // r12
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rbx
  char *v6; // rax
  int stat_loc; // [rsp+28h] [rbp-18h] BYREF
  __pid_t v9; // [rsp+2Ch] [rbp-14h]

  if ( a1 )
    v1 = a1;
  else
    v1 = -1;
  v9 = waitpid(v1, &stat_loc, a1 == 0);
  if ( v9 >= 0 )
  {
    if ( v9 > 0 && (a1 > 0 || (unsigned __int8)sub_4031BC((unsigned int)v9)) )
    {
      if ( (stat_loc & 0x7F) != 0 || (stat_loc & 0xFF00) >> 8 )
      {
        v5 = s1;
        v6 = gettext("%s [-d] terminated abnormally");
        error(2, 0, v6, v5);
      }
      --dword_61DAB0;
    }
  }
  else
  {
    v2 = s1;
    v3 = gettext("waiting for %s [-d]");
    v4 = __errno_location();
    error(2, *v4, v3, v2);
  }
  return (unsigned int)v9;
}
