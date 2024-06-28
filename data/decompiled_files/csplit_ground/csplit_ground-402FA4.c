#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 sub_402FA4()
{
  _BOOL8 result; // rax
  bool v1; // [rsp+Bh] [rbp-85h]
  int errnum; // [rsp+Ch] [rbp-84h]
  sigset_t oset; // [rsp+10h] [rbp-80h] BYREF

  name = sub_402EF3(dword_60B368);
  if ( dword_60B368 == -1 )
  {
    v1 = 0;
    errnum = 75;
  }
  else
  {
    sigprocmask(0, &set, &oset);
    stream = (FILE *)sub_4045FD(name, "w");
    v1 = stream != 0LL;
    errnum = *__errno_location();
    dword_60B368 += v1;
    sigprocmask(2, &oset, 0LL);
  }
  result = !v1;
  if ( !v1 )
  {
    error(0, errnum, "%s", name);
    sub_401C9C();
  }
  qword_60B370 = 0LL;
  return result;
}
