#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4030FE()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_405F87(stdout) && (byte_60F2A8 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_60F2A0 )
    {
      v0 = (const char *)sub_4049C4(qword_60F2A0);
      v1 = __errno_location();
      error(0, *v1, "%s: %s", v0, v4);
    }
    else
    {
      v2 = __errno_location();
      error(0, *v2, "%s", v4);
    }
    _exit(dword_60F218);
  }
  result = sub_405F87(stderr);
  if ( (_DWORD)result )
    _exit(dword_60F218);
  return result;
}
