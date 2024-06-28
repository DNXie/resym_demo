#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40A05E()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6102B0;
  for ( i = 1; i < dword_610290; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6103A0 )
  {
    free(ptr[1]);
    qword_6102A0 = 256LL;
    off_6102A8 = &unk_6103A0;
  }
  if ( ptr != (void **)&qword_6102A0 )
  {
    free(ptr);
    off_6102B0 = &qword_6102A0;
  }
  dword_610290 = 1;
}
