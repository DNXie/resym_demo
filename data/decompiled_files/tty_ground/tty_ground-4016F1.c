#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4016F1()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_403C87(stdout) && (byte_606228 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_606220 )
    {
      v0 = (const char *)sub_402FB7(qword_606220);
      v1 = __errno_location();
      error(0, *v1, "%s: %s", v0, v4);
    }
    else
    {
      v2 = __errno_location();
      error(0, *v2, "%s", v4);
    }
    _exit(status);
  }
  result = sub_403C87(stderr);
  if ( (_DWORD)result )
    _exit(status);
  return result;
}
