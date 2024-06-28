#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404154()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6081F0;
  for ( i = 1; i < dword_6081D0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_613300 )
  {
    free(ptr[1]);
    qword_6081E0 = 256LL;
    off_6081E8 = &unk_613300;
  }
  if ( ptr != (void **)&qword_6081E0 )
  {
    free(ptr);
    off_6081F0 = &qword_6081E0;
  }
  dword_6081D0 = 1;
}
