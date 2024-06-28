#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402F72()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6061F0;
  for ( i = 1; i < dword_6061D0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6062A0 )
  {
    free(ptr[1]);
    qword_6061E0 = 256LL;
    off_6061E8 = &unk_6062A0;
  }
  if ( ptr != (void **)&qword_6061E0 )
  {
    free(ptr);
    off_6061F0 = &qword_6061E0;
  }
  dword_6061D0 = 1;
}
