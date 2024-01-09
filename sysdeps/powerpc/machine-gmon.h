/* PowerPC-specific implementation of profiling support.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
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

/* We need a special version of the `mcount' function because it has
   to preserve more registers than your usual function.  */

void __mcount_internal (unsigned long frompc, unsigned long selfpc);

#define _MCOUNT_DECL(frompc, selfpc) \
void __mcount_internal (unsigned long frompc, unsigned long selfpc)


/* Define MCOUNT as empty since we have the implementation in another
   file.  */
#define MCOUNT
