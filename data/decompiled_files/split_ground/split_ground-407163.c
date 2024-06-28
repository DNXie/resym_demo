#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_407163()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_610310;
  for ( i = 1; i < dword_6102F0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_610720 )
  {
    free(ptr[1]);
    qword_610300 = 256LL;
    off_610308 = &unk_610720;
  }
  if ( ptr != (void **)&qword_610300 )
  {
    free(ptr);
    off_610310 = &qword_610300;
  }
  dword_6102F0 = 1;
}
