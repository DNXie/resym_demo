#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_403131()
{
  __int64 v0; // rbx
  char *v1; // rax
  const char *v2; // rbx
  int *v3; // rax
  const char *v4; // rax
  bool v6; // [rsp+Bh] [rbp-B5h]
  int errnum; // [rsp+Ch] [rbp-B4h]
  sigset_t oset; // [rsp+10h] [rbp-B0h] BYREF
  char v9[24]; // [rsp+90h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+A8h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  if ( stream )
  {
    if ( ferror_unlocked(stream) )
    {
      v0 = sub_404873(name);
      v1 = gettext("write error for %s");
      error(0, 0, v1, v0);
      stream = 0LL;
      sub_401C9C();
    }
    if ( (unsigned int)sub_407ACF(stream) )
    {
      v2 = name;
      v3 = __errno_location();
      error(0, *v3, "%s", v2);
      stream = 0LL;
      sub_401C9C();
    }
    if ( qword_60B370 || !byte_60B392 )
    {
      if ( byte_60B390 != 1 )
      {
        v4 = (const char *)sub_4046E3(qword_60B370, v9);
        fprintf(stdout, "%s\n", v4);
      }
    }
    else
    {
      sigprocmask(0, &set, &oset);
      v6 = unlink(name) == 0;
      errnum = *__errno_location();
      dword_60B368 -= v6;
      sigprocmask(2, &oset, 0LL);
      if ( !v6 )
        error(0, errnum, "%s", name);
    }
    stream = 0LL;
  }
  return __readfsqword(0x28u) ^ v10;
}
