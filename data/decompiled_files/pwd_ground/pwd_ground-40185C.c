#include "/share/binary_recovery/clang-parser/defs.hh"
struct dirent *__fastcall sub_40185C(DIR *a1)
{
  struct dirent *v2; // [rsp+18h] [rbp-8h]

  do
    v2 = readdir(a1);
  while ( v2 && sub_4017FD(v2->d_name) );
  return v2;
}
