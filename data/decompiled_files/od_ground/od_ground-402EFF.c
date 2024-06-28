#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402EFF()
{
  const char *v1; // rbx
  int *v2; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-11h]

  v3 = 1;
  do
  {
    filename = *(char **)qword_612350;
    if ( !filename )
      return v3;
    qword_612350 += 8LL;
    if ( !strcmp(filename, "-") )
    {
      filename = gettext("standard input");
      stream = (FILE *)stdin;
      byte_612360 = 1;
    }
    else
    {
      stream = fopen(filename, "r");
      if ( !stream )
      {
        v1 = filename;
        v2 = __errno_location();
        error(0, *v2, "%s", v1);
        v3 = 0;
      }
    }
  }
  while ( !stream );
  if ( byte_612310 )
  {
    if ( byte_6122F0 != 1 )
      setvbuf(stream, 0LL, 2, 0LL);
  }
  return v3;
}
