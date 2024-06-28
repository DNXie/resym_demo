#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 sub_4110A2()
{
  bool v1; // [rsp+7h] [rbp-19h]
  char *lineptr; // [rsp+8h] [rbp-18h] BYREF
  size_t n; // [rsp+10h] [rbp-10h] BYREF
  __ssize_t v4; // [rsp+18h] [rbp-8h]

  lineptr = 0LL;
  n = 0LL;
  v4 = getline(&lineptr, &n, stdin);
  if ( v4 > 0 )
  {
    lineptr[v4 - 1] = 0;
    v1 = rpmatch(lineptr) > 0;
  }
  else
  {
    v1 = 0;
  }
  free(lineptr);
  return v1;
}
