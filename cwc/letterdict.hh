/**
 * cwc - a crossword compiler.
 *
 * Copyright (C) 1999, 2000, 2001, 2002 Lars Christensen, 2008 Mark Longair
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 **/

#ifndef CWC_LETTERDICT_HH
#define CWC_LETTERDICT_HH

#include <set>
#include <vector>
#include "symbol.hh"
#include "dict.hh"
#include "wordlist.hh"

class LetterDict : public Dict {
    typedef std::vector<int> intvec;
    intvec ****p;
    SymbolSet **all;
    static intvec emptyvec;
public:
    WordList *wl = nullptr;
    LetterDict();
    ~LetterDict();
    void addword(Symbol *i, int wordi);
    intvec *getintvec(int len, int pos, Symbol s);
    SymbolSet findpossible(Symbol *, int len, int pos);
    void load(const std::string &fn);
};

#endif // CWC_LETTERDICT_HH
