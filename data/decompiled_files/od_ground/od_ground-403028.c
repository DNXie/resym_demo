#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403028(int a1)
{
  char *v1; // rbx
  char *v2; // rax
  const char *v3; // rbx
  int *v4; // rax
  char *v5; // rax
  unsigned __int8 v7; // [rsp+1Fh] [rbp-11h]

  v7 = 1;
  if ( stream )
  {
    if ( ferror_unlocked(stream) )
    {
      v1 = filename;
      v2 = gettext("%s: read error");
      error(0, a1, v2, v1);
      if ( strcmp(*(const char **)(qword_612350 - 8), "-") )
        sub_40865A(stream);
      v7 = 0;
    }
    else if ( strcmp(*(const char **)(qword_612350 - 8), "-") && (unsigned int)sub_40865A(stream) )
    {
      v3 = filename;
      v4 = __errno_location();
      error(0, *v4, "%s", v3);
      v7 = 0;
    }
    stream = 0LL;
  }
  if ( ferror_unlocked(stdout) )
  {
    v5 = gettext("write error");
    error(0, 0, v5);
    v7 = 0;
  }
  return v7;
}
