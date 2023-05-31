/* Test case for i386 preserved registers in dynamic linker.
   Copyright (C) 2015-2023 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <stdlib.h>
#include "tst-audit3.h"

static int
do_test (void)
{
  long long ll = audit1_test (1, 2, 3);
  if (ll != 30)
    abort ();

  float f = audit2_test (1, 2, 3);
  if (f != 30)
    abort ();

  return 0;
}

#define TEST_FUNCTION do_test ()
#include "../../test-skeleton.c"
