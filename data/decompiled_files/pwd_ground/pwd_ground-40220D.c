#include "/share/binary_recovery/clang-parser/defs.hh"
char *sub_40220D()
{
  char *result; // rax
  char *i; // rax
  char *filename; // [rsp+8h] [rbp-128h]
  struct stat stat_buf; // [rsp+10h] [rbp-120h] BYREF
  struct stat v4; // [rsp+A0h] [rbp-90h] BYREF

  filename = getenv("PWD");
  if ( !filename || *filename != 47 )
    return 0LL;
  for ( i = strstr(filename, "/."); i; i = strstr(i + 1, "/.") )
  {
    if ( !i[2] || i[2] == 47 || i[2] == 46 && (!i[3] || i[3] == 47) )
      return 0LL;
  }
  if ( (unsigned int)sub_405640(filename, &stat_buf)
    || (unsigned int)sub_405640(".", &v4)
    || stat_buf.st_ino != v4.st_ino
    || stat_buf.st_dev != v4.st_dev )
  {
    result = 0LL;
  }
  else
  {
    result = filename;
  }
  return result;
}
