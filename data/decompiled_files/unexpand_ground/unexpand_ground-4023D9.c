#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4023D9()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char *v4; // [rsp+8h] [rbp-18h]

  if ( (unsigned int)sub_404BFD(stdout) && (byte_6072D0 != 1 || *__errno_location() != 32) )
  {
    v4 = gettext("write error");
    if ( qword_6072C8 )
    {
      v0 = (const char *)sub_403D09(qword_6072C8);
      v1 = __errno_location();
      error(0, *v1, "%s: %s", v0, v4);
    }
    else
    {
      v2 = __errno_location();
      error(0, *v2, "%s", v4);
    }
    _exit(dword_6071D8);
  }
  result = sub_404BFD(stderr);
  if ( (_DWORD)result )
    _exit(dword_6071D8);
  return result;
}
