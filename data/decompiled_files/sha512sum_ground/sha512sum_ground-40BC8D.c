#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40BC8D()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_610220;
  for ( i = 1; i < dword_610200; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_610300 )
  {
    free(ptr[1]);
    qword_610210 = 256LL;
    off_610218 = &unk_610300;
  }
  if ( ptr != (void **)&qword_610210 )
  {
    free(ptr);
    off_610220 = &qword_610210;
  }
  dword_610200 = 1;
}
