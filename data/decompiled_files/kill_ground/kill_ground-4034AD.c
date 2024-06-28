#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4034AD()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_607200;
  for ( i = 1; i < dword_6071E0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6074A0 )
  {
    free(ptr[1]);
    qword_6071F0 = 256LL;
    off_6071F8 = &unk_6074A0;
  }
  if ( ptr != (void **)&qword_6071F0 )
  {
    free(ptr);
    off_607200 = &qword_6071F0;
  }
  dword_6071E0 = 1;
}
