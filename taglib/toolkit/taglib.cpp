/***************************************************************************
    copyright            : (C) 2020 by Kevin Andre
    email                : hyperquantum@gmail.com
 ***************************************************************************/

/***************************************************************************
 *   This library is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License version   *
 *   2.1 as published by the Free Software Foundation.                     *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful, but   *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA         *
 *   02110-1301  USA                                                       *
 *                                                                         *
 *   Alternatively, this file is available under the Mozilla Public        *
 *   License Version 1.1.  You may obtain a copy of the License at         *
 *   http://www.mozilla.org/MPL/                                           *
 ***************************************************************************/

#include "taglib.h"

#include "tutils.h"

bool TagLib::isTagLibVersionAtLeast(int major, int minor)
{
  return isTagLibVersionAtLeast(major, minor, 0);
}

bool TagLib::isTagLibVersionAtLeast(int major, int minor, int patch)
{
  int actualMajor = TAGLIB_MAJOR_VERSION;
  int actualMinor = TAGLIB_MINOR_VERSION;
  int actualPatch = TAGLIB_PATCH_VERSION;

  return TagLib::Utils::compareVersions(major, minor, patch,
                                        actualMajor, actualMinor, actualPatch) <= 0;
}
