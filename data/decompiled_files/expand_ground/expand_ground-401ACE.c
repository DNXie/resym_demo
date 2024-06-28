#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_401ACE(FILE *a1)
{
  const char *v1; // rbx
  int *v2; // rax
  const char *v3; // rbx
  int *v4; // rax
  int *v6; // rax
  char **v7; // rax
  FILE *stream; // [rsp+8h] [rbp-28h]
  char *s1; // [rsp+18h] [rbp-18h]

  if ( a1 )
  {
    if ( ferror_unlocked(a1) )
    {
      v1 = ::s1;
      v2 = __errno_location();
      error(0, *v2, "%s", v1);
      status = 1;
    }
    if ( !strcmp(::s1, "-") )
    {
      clearerr_unlocked(a1);
    }
    else if ( (unsigned int)sub_404796(a1) )
    {
      v3 = ::s1;
      v4 = __errno_location();
      error(0, *v4, "%s", v3);
      status = 1;
    }
  }
  while ( 1 )
  {
    v7 = (char **)qword_607288;
    qword_607288 += 8LL;
    s1 = *v7;
    if ( !*v7 )
      break;
    if ( !strcmp(s1, "-") )
    {
      byte_607290 = 1;
      stream = (FILE *)stdin;
    }
    else
    {
      stream = fopen(s1, "r");
    }
    if ( stream )
    {
      ::s1 = s1;
      sub_40232F(stream, 2LL);
      return stream;
    }
    v6 = __errno_location();
    error(0, *v6, "%s", s1);
    status = 1;
  }
  return 0LL;
}
