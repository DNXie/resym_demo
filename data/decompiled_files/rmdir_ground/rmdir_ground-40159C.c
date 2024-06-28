#include "/share/binary_recovery/clang-parser/defs.hh"
struct dirent *__fastcall sub_40159C(DIR *a1)
{
  struct dirent *v2; // [rsp+18h] [rbp-8h]

  do
    v2 = readdir(a1);
  while ( v2 && sub_40153D(v2->d_name) );
  return v2;
}
