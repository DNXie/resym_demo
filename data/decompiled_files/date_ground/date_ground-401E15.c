#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401E15(const char *a1, __int64 a2)
{
  const char *v2; // rbx
  int *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  const char *v6; // rbx
  int *v7; // rax
  char *s1; // [rsp+8h] [rbp-58h]
  bool v10; // [rsp+1Fh] [rbp-41h]
  char *lineptr; // [rsp+20h] [rbp-40h] BYREF
  size_t n; // [rsp+28h] [rbp-38h] BYREF
  FILE *stream; // [rsp+30h] [rbp-30h]
  __ssize_t v14; // [rsp+38h] [rbp-28h]
  __int64 v15[4]; // [rsp+40h] [rbp-20h] BYREF

  s1 = (char *)a1;
  if ( !strcmp(a1, "-") )
  {
    s1 = gettext("standard input");
    stream = (FILE *)stdin;
  }
  else
  {
    stream = fopen(a1, "r");
    if ( !stream )
    {
      v2 = (const char *)sub_40A2F7(a1);
      v3 = __errno_location();
      error(1, *v3, "%s", v2);
    }
  }
  lineptr = 0LL;
  n = 0LL;
  v10 = 1;
  while ( 1 )
  {
    v14 = getline(&lineptr, &n, stream);
    if ( v14 < 0 )
      break;
    if ( (unsigned __int8)sub_408BFC(v15, lineptr, 0LL) != 1 )
    {
      if ( lineptr[v14 - 1] == 10 )
        lineptr[v14 - 1] = 0;
      v4 = sub_40A2F7(lineptr);
      v5 = gettext("invalid date %s");
      error(0, 0, v5, v4);
      v10 = 0;
    }
    else
    {
      v10 = (v10 & (unsigned __int8)sub_4027CC(a2, v15[0], v15[1])) != 0;
    }
  }
  if ( (unsigned int)sub_40C662(stream) == -1 )
  {
    v6 = (const char *)sub_40A2F7(s1);
    v7 = __errno_location();
    error(1, *v7, "%s", v6);
  }
  free(lineptr);
  return v10;
}
