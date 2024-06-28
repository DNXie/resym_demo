#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40AB08(const char *a1)
{
  char *v1; // rax
  char *result; // rax
  char *s; // [rsp+8h] [rbp-18h]
  char *v4; // [rsp+10h] [rbp-10h]
  char *s1; // [rsp+18h] [rbp-8h]

  s = (char *)a1;
  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v4 = strrchr(a1, 47);
  if ( v4 )
    v1 = v4 + 1;
  else
    v1 = (char *)a1;
  s1 = v1;
  if ( v1 - a1 > 6 && !strncmp(v1 - 7, "/.libs/", 7uLL) )
  {
    s = s1;
    if ( !strncmp(s1, "lt-", 3uLL) )
    {
      s = s1 + 3;
      program_invocation_short_name = (__int64)(s1 + 3);
    }
  }
  qword_6102B0 = (__int64)s;
  result = s;
  program_invocation_name = (__int64)s;
  return result;
}
