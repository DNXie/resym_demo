#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4032E5()
{
  __int64 v0; // rbx
  char *v1; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-11h]

  if ( sub_40190E(*(const char **)(8 * (dword_609230 + 1LL) + qword_609238)) )
    return sub_401E45(0);
  if ( !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "!") )
  {
    sub_4016DE(1);
    v3 = !sub_4031A6();
  }
  else if ( !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "(")
         && !strcmp(*(const char **)(8 * (dword_609230 + 2LL) + qword_609238), ")") )
  {
    sub_4016DE(0);
    v3 = sub_403176();
    sub_4016DE(0);
  }
  else
  {
    if ( strcmp(*(const char **)(8 * (dword_609230 + 1LL) + qword_609238), "-a")
      && strcmp(*(const char **)(8 * (dword_609230 + 1LL) + qword_609238), "-o") )
    {
      v0 = *(_QWORD *)(8 * (dword_609230 + 1LL) + qword_609238);
      v1 = gettext("%s: binary operator expected");
      sub_40165F(v1, v0);
    }
    v3 = sub_4030C9();
  }
  return v3;
}
