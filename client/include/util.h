/*
Looking Glass - KVM FrameRelay (KVMFR) Client
Copyright (C) 2017-2019 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef _H_LG_UTIL_
#define _H_LG_UTIL_

#include <stdlib.h>
#include <stdbool.h>
#include "common/types.h"

// reads the specified file into a new buffer
// the callee must free the buffer
bool util_fileGetContents(const char * filename, char ** buffer, size_t * length);

void util_cursorToInt(double ex, double ey, int *x, int *y);
bool util_guestCurToLocal(struct DoublePoint *local);
void util_localCurToGuest(struct DoublePoint *guest);
void util_rotatePoint(struct DoublePoint *point);

static inline double util_clamp(double x, double min, double max)
{
  if (x < min) return min;
  if (x > max) return max;
  return x;
}

#endif
