#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_404708(const char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  _BOOL8 result; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  struct statfs v10; // [rsp+30h] [rbp-90h] BYREF

  if ( !strcmp(a1, "-") )
  {
    v3 = sub_405DD3(a1);
    v4 = gettext("using %s to denote standard input does not work in file system mode");
    error(0, 0, v4, v3);
    result = 0LL;
  }
  else if ( statfs(a1, &v10) )
  {
    v6 = sub_405DD3(a1);
    v7 = gettext("cannot read file system information for %s");
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    result = 0LL;
  }
  else
  {
    result = !sub_404277(
                a3,
                (__int64)a1,
                (unsigned __int8 (__fastcall *)(void *, signed __int64, _QWORD, __int64, __int64))sub_4033DE,
                (__int64)&v10);
  }
  return result;
}
