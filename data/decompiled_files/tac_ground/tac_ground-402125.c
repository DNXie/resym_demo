#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402125(FILE **a1, char **a2, unsigned int a3, __int64 a4)
{
  size_t v4; // rbx
  size_t v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  __int64 v16; // r12
  char *v17; // rbx
  int *v18; // rax
  int fd; // [rsp+2Ch] [rbp-34h]
  char *name; // [rsp+38h] [rbp-28h]
  FILE *stream; // [rsp+40h] [rbp-20h]
  __int64 n; // [rsp+48h] [rbp-18h]

  if ( !qword_60A440 )
  {
    s = getenv("TMPDIR");
    if ( !s )
      s = "/tmp";
    v4 = strlen(s);
    v5 = strlen("%s/tacXXXXXX");
    qword_60A440 = (char *)sub_404EFF(v4 + v5 - 1);
    sprintf(qword_60A440, "%s/tacXXXXXX", s);
  }
  name = qword_60A440;
  fd = sub_4044F7(qword_60A440);
  if ( fd >= 0 )
  {
    stream = fdopen(fd, "w+");
    if ( stream )
    {
      sub_402107(name);
      while ( 1 )
      {
        n = sub_404486(a3, dest, qword_6082C8);
        if ( !n )
          break;
        if ( n == -1 )
        {
          v13 = sub_404307(a4);
          v14 = gettext("%s: read error");
          v15 = __errno_location();
          error(0, *v15, v14, v13);
          goto LABEL_19;
        }
        if ( fwrite_unlocked(dest, 1uLL, n, stream) != n )
          goto LABEL_16;
      }
      if ( !fflush_unlocked(stream) )
      {
        *a1 = stream;
        *a2 = name;
        return 1LL;
      }
LABEL_16:
      v16 = sub_404307(name);
      v17 = gettext("%s: write error");
      v18 = __errno_location();
      error(0, *v18, v17, v16);
LABEL_19:
      sub_4050B6(stream);
      result = 0LL;
    }
    else
    {
      v10 = sub_402CEE(name);
      v11 = gettext("cannot open %s for writing");
      v12 = __errno_location();
      error(0, *v12, v11, v10);
      close(fd);
      unlink(name);
      result = 0LL;
    }
  }
  else
  {
    v6 = sub_402CEE(s);
    v7 = gettext("cannot create temporary file in %s");
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    result = 0LL;
  }
  return result;
}
