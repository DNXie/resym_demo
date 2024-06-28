#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 sub_4031A6()
{
  __int64 v0; // rbx
  char *v1; // rax
  bool v3; // [rsp+Fh] [rbp-11h]

  if ( !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "!") )
  {
    sub_4016DE(0);
    v3 = !sub_403176();
  }
  else
  {
    if ( **(_BYTE **)(8LL * dword_609230 + qword_609238) != 45
      || !*(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 1LL)
      || *(_BYTE *)(*(_QWORD *)(8LL * dword_609230 + qword_609238) + 2LL) )
    {
      sub_401736();
    }
    if ( !sub_4030E9(*(_BYTE **)(8LL * dword_609230 + qword_609238)) )
    {
      v0 = *(_QWORD *)(8LL * dword_609230 + qword_609238);
      v1 = gettext("%s: unary operator expected");
      sub_40165F(v1, v0);
    }
    v3 = sub_402825();
  }
  return v3;
}
