#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4036C1(char *a1)
{
  char *v1; // rbx
  int *v2; // rax
  __int64 v4; // [rsp+10h] [rbp-140h]
  char **i; // [rsp+18h] [rbp-138h]
  struct stat stat_buf; // [rsp+20h] [rbp-130h] BYREF
  struct stat v7; // [rsp+B0h] [rbp-A0h] BYREF

  v4 = 0LL;
  if ( byte_61642C != 1 )
  {
    qword_616430 = sub_40B8E8(0LL);
    if ( !qword_616430 )
    {
      v1 = gettext("cannot read table of mounted file systems");
      v2 = __errno_location();
      error(0, *v2, "%s", v1);
    }
    byte_61642C = 1;
  }
  for ( i = (char **)qword_616430; i; i = (char **)i[5] )
  {
    if ( ((_BYTE)i[4] & 1) != 0
      && **i == 47
      && !strcmp(i[1], a1)
      && !(unsigned int)sub_411E90(a1, &stat_buf)
      && !(unsigned int)sub_411E90(*i, &v7)
      && stat_buf.st_ino == v7.st_ino
      && stat_buf.st_dev == v7.st_dev )
    {
      return *i;
    }
  }
  return (char *)v4;
}
