#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4037F6()
{
  const char *v0; // rbx
  int *v1; // rax
  int *v2; // rax
  __int64 result; // rax
  char v4; // [rsp+7h] [rbp-19h]
  char *v5; // [rsp+8h] [rbp-18h]

  v4 = 0;
  if ( sub_403C41(stdin) && !(unsigned int)sub_4061E0(stdin, 0LL, 1LL) && (unsigned int)sub_406195(stdin) )
    v4 = 1;
  if ( (unsigned int)sub_409035(stdin) )
    v4 = 1;
  if ( v4 )
  {
    v5 = gettext("error closing file");
    if ( qword_60F310 )
    {
      v0 = (const char *)sub_4053D6(qword_60F310);
      v1 = __errno_location();
      error(0, *v1, "%s: %s", v0, v5);
    }
    else
    {
      v2 = __errno_location();
      error(0, *v2, "%s", v5);
    }
  }
  result = sub_40392A();
  if ( v4 )
    _exit(status);
  return result;
}
