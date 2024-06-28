#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402A43()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6061B0;
  for ( i = 1; i < dword_606190; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_606260 )
  {
    free(ptr[1]);
    qword_6061A0 = 256LL;
    off_6061A8 = &unk_606260;
  }
  if ( ptr != (void **)&qword_6061A0 )
  {
    free(ptr);
    off_6061B0 = &qword_6061A0;
  }
  dword_606190 = 1;
}
