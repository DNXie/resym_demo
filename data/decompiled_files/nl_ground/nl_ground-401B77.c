#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_401B77()
{
  char *v0; // rax
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-8h]

  printf(off_609240, (unsigned int)dword_609238, qword_609740, off_609208);
  v2 = qword_609740 + qword_609220;
  if ( qword_609740 + qword_609220 < qword_609740 )
  {
    v0 = gettext("line number overflow");
    error(1, 0, v0);
  }
  result = v2;
  qword_609740 = v2;
  return result;
}
