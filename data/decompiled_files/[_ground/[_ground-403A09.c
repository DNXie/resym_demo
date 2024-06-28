#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403A09()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_406620(stdout) && (byte_609248 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_609240 )
    {
      v0 = (const char *)sub_405354(qword_609240);
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
  result = sub_406620(stderr);
  if ( (_DWORD)result )
    _exit(status);
  return result;
}
