#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402186()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_4049F5(stdout) && (byte_607448 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_607440 )
    {
      v0 = (const char *)sub_403A09(qword_607440);
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
  result = sub_4049F5(stderr);
  if ( (_DWORD)result )
    _exit(status);
  return result;
}
