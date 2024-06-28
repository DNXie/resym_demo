#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40215D()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_404981(stdout) && (byte_6072A8 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_6072A0 )
    {
      v0 = (const char *)sub_403A8D(qword_6072A0);
      v1 = __errno_location();
      error(0, *v1, "%s: %s", v0, v4);
    }
    else
    {
      v2 = __errno_location();
      error(0, *v2, "%s", v4);
    }
    _exit(dword_6071C8);
  }
  result = sub_404981(stderr);
  if ( (_DWORD)result )
    _exit(dword_6071C8);
  return result;
}
