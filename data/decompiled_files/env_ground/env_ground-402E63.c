#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402E63()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6061D0;
  for ( i = 1; i < dword_6061B0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6062C0 )
  {
    free(ptr[1]);
    qword_6061C0 = 256LL;
    off_6061C8 = &unk_6062C0;
  }
  if ( ptr != (void **)&qword_6061C0 )
  {
    free(ptr);
    off_6061D0 = &qword_6061C0;
  }
  dword_6061B0 = 1;
}
