#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40404E()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_608200;
  for ( i = 1; i < dword_6081E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6082E0 )
  {
    free(ptr[1]);
    qword_6081F0 = 256LL;
    off_6081F8 = &unk_6082E0;
  }
  if ( ptr != (void **)&qword_6081F0 )
  {
    free(ptr);
    off_608200 = &qword_6081F0;
  }
  dword_6081E0 = 1;
}
