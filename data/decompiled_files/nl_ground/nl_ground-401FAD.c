#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401FAD(const char *a1)
{
  int *v1; // rax
  FILE *stream; // [rsp+18h] [rbp-8h]

  if ( !strcmp(a1, "-") )
  {
    byte_609748 = 1;
    stream = (FILE *)stdin;
    sub_402AFF(stdin, 2LL);
  }
  else
  {
    stream = fopen(a1, "r");
    if ( !stream )
      goto LABEL_10;
    sub_402AFF(stream, 2LL);
  }
  sub_401F51((__int64)stream);
  if ( ferror_unlocked(stream) )
    goto LABEL_10;
  if ( strcmp(a1, "-") )
  {
    if ( (unsigned int)sub_405ACC(stream) != -1 )
      return 1LL;
LABEL_10:
    v1 = __errno_location();
    error(0, *v1, "%s", a1);
    return 0LL;
  }
  clearerr_unlocked(stream);
  return 1LL;
}
