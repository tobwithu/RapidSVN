/*
 * ====================================================================
 * Copyright (c) 2002-2018 The RapidSVN Group.  All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (in the file GPL.txt).
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#ifndef _EXCEPTIONS_H_INCLUDED_
#define _EXCEPTIONS_H_INCLUDED_

// wxWidgets
#include "wx/string.h"

class RapidSvnEx
{
public:
  wxString estr;
  long code;

public:
  RapidSvnEx(const wxString & __estr = wxEmptyString, const long __code = -1);

  virtual ~ RapidSvnEx();

  RapidSvnEx(const RapidSvnEx & rhs)
  {
    *this = rhs;
  }

  RapidSvnEx & operator = (const RapidSvnEx & rhs);

  void what(const wxString & __estr);

  virtual const wxChar *what() const
  {
    return estr.c_str();
  }

  const wxString & str(void) const
  {
    return estr;
  }
};
#endif
/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../rapidsvn-dev.el")
 * end:
 */
