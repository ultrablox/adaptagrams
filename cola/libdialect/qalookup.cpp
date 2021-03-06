/*
 * vim: ts=4 sw=4 et tw=0 wm=0
 *
 * libdialect - A library for computing DiAlEcT layouts:
 *                 D = Decompose/Distribute
 *                 A = Arrange
 *                 E = Expand/Emend
 *                 T = Transform
 *
 * Copyright (C) 2018  Monash University
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * See the file LICENSE.LGPL distributed with the library.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Author(s):   Steve Kieffer   <http://skieffer.info>
*/

/*
 * Generated by gen_qa_lookup.py
 *
*/

#include <string>
#include <sstream>
#include <iterator>
#include <vector>

#include "libdialect/quadaction.h"

using std::string;
using std::istringstream;
using std::istream_iterator;
using std::vector;

const string quadActionLookup[3][3][3][3][16] = {
  {
    {
      {
        {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC", "", "", "", "", "", "", "DDDA", "", "", "", "", "", "", ""},
        {"", "DDDC", "", "", "", "", "", "", "DDDA", "DDDB", "", "", "", "", "", ""}
      },
      {
        {"", "", "", "", "DDAD", "", "", "", "DDCD", "", "", "", "", "", "", ""},
        {"", "DDDC", "", "", "DDAD", "DDAC", "", "", "DDDA DDCD", "DDCC", "", "", "DDAA", "", "", ""},
        {"", "DDDC", "", "", "DDAD", "DDAC", "", "", "DDDA DDCD", "DDDB DDCC", "", "", "DDAA", "DDAB", "", ""}
      },
      {
        {"", "", "", "", "DDAD", "", "", "", "DDCD", "", "", "", "DDBD", "", "", ""},
        {"", "DDDC", "", "", "DDAD", "DDAC", "", "", "DDDA DDCD", "DDCC", "", "", "DDAA DDBD", "DDBC", "", ""},
        {"", "DDDC", "", "", "DDAD", "DDAC", "", "", "DDDA DDCD", "DDDB DDCC", "", "", "DDAA DDBD", "DDAB DDBC", "", ""}
      }
    },
    {
      {
        {"", "", "DADD", "", "DCDD", "", "", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC", "DADD", "DADC", "DCDD", "DCDC", "", "", "DDDA", "", "DADA", "", "DCDA", "", "", ""},
        {"", "DDDC", "DADD", "DADC", "DCDD", "DCDC", "", "", "DDDA", "DDDB", "DADA", "DADB", "DCDA", "DCDB", "", ""}
      },
      {
        {"", "", "DADD", "", "DDAD DCDD", "", "DAAD", "", "DDCD", "", "DACD", "", "DCCD", "", "", ""},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD", "DAAC", "DDDA DDCD", "DDCC", "DADA DACD", "DACC", "DDAA DCDA DCCD", "DCCC", "DAAA", ""},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD", "DAAC", "DDDA DDCD", "DDDB DDCC", "DADA DACD", "DADB DACC", "DDAA DCDA DCCD", "DDAB DCDB DCCC", "DAAA", "DAAB"}
      },
      {
        {"", "", "DADD", "", "DDAD DCDD", "", "DAAD", "", "DDCD", "", "DACD", "", "DDBD DCCD", "", "DABD", ""},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD", "DAAC", "DDDA DDCD", "DDCC", "DADA DACD", "DACC", "DDAA DDBD DCDA DCCD", "DDBC DCCC", "DAAA DABD", "DABC"},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD", "DAAC", "DDDA DDCD", "DDDB DDCC", "DADA DACD", "DADB DACC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC", "DAAA DABD", "DAAB DABC"}
      }
    },
    {
      {
        {"", "", "DADD", "", "DCDD", "", "DBDD", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC", "DADD", "DADC", "DCDD", "DCDC", "DBDD", "DBDC", "DDDA", "", "DADA", "", "DCDA", "", "DBDA", ""},
        {"", "DDDC", "DADD", "DADC", "DCDD", "DCDC", "DBDD", "DBDC", "DDDA", "DDDB", "DADA", "DADB", "DCDA", "DCDB", "DBDA", "DBDB"}
      },
      {
        {"", "", "DADD", "", "DDAD DCDD", "", "DAAD DBDD", "", "DDCD", "", "DACD", "", "DCCD", "", "DBCD", ""},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD DBDD", "DAAC DBDC", "DDDA DDCD", "DDCC", "DADA DACD", "DACC", "DDAA DCDA DCCD", "DCCC", "DAAA DBDA DBCD", "DBCC"},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD DBDD", "DAAC DBDC", "DDDA DDCD", "DDDB DDCC", "DADA DACD", "DADB DACC", "DDAA DCDA DCCD", "DDAB DCDB DCCC", "DAAA DBDA DBCD", "DAAB DBDB DBCC"}
      },
      {
        {"", "", "DADD", "", "DDAD DCDD", "", "DAAD DBDD", "", "DDCD", "", "DACD", "", "DDBD DCCD", "", "DABD DBCD", ""},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD DBDD", "DAAC DBDC", "DDDA DDCD", "DDCC", "DADA DACD", "DACC", "DDAA DDBD DCDA DCCD", "DDBC DCCC", "DAAA DABD DBDA DBCD", "DABC DBCC"},
        {"", "DDDC", "DADD", "DADC", "DDAD DCDD", "DDAC DCDC", "DAAD DBDD", "DAAC DBDC", "DDDA DDCD", "DDDB DDCC", "DADA DACD", "DADB DACC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC", "DAAA DABD DBDA DBCD", "DAAB DABC DBDB DBCC"}
      }
    }
  },
  {
    {
      {
        {"", "ADDD", "CDDD", "", "", "", "", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "CDDC", "", "", "", "", "DDDA", "ADDA", "CDDA", "", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "CDDC", "", "", "", "", "DDDA", "DDDB ADDA", "CDDA", "CDDB", "", "", "", ""}
      },
      {
        {"", "ADDD", "CDDD", "", "DDAD", "ADAD", "CDAD", "", "DDCD", "ADCD", "CDCD", "", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "CDDC", "DDAD", "DDAC ADAD", "CDAD", "CDAC", "DDDA DDCD", "DDCC ADDA ADCD", "CDDA CDCD", "CDCC", "DDAA", "ADAA", "CDAA", ""},
        {"", "DDDC ADDD", "CDDD", "CDDC", "DDAD", "DDAC ADAD", "CDAD", "CDAC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "CDDA CDCD", "CDDB CDCC", "DDAA", "DDAB ADAA", "CDAA", "CDAB"}
      },
      {
        {"", "ADDD", "CDDD", "", "DDAD", "ADAD", "CDAD", "", "DDCD", "ADCD", "CDCD", "", "DDBD", "ADBD", "CDBD", ""},
        {"", "DDDC ADDD", "CDDD", "CDDC", "DDAD", "DDAC ADAD", "CDAD", "CDAC", "DDDA DDCD", "DDCC ADDA ADCD", "CDDA CDCD", "CDCC", "DDAA DDBD", "DDBC ADAA ADBD", "CDAA CDBD", "CDBC"},
        {"", "DDDC ADDD", "CDDD", "CDDC", "DDAD", "DDAC ADAD", "CDAD", "CDAC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "CDDA CDCD", "CDDB CDCC", "DDAA DDBD", "DDAB DDBC ADAA ADBD", "CDAA CDBD", "CDAB CDBC"}
      }
    },
    {
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DCDD", "ACDD", "CCDD", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DCDD", "DCDC ACDD", "CCDD", "CCDC", "DDDA", "ADDA", "DADA CDDA", "AADA", "DCDA", "ACDA", "CCDA", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DCDD", "DCDC ACDD", "CCDD", "CCDC", "DDDA", "DDDB ADDA", "DADA CDDA", "DADB AADA CDDB", "DCDA", "DCDB ACDA", "CCDA", "CCDB"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DDAD DCDD", "ADAD ACDD", "DAAD CDAD CCDD", "AAAD", "DDCD", "ADCD", "DACD CDCD", "AACD", "DCCD", "ACCD", "CCCD", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD CDCC", "DDAA DCDA DCCD", "DCCC ADAA ACDA ACCD", "DAAA CDAA CCDA CCCD", "AAAA CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD CDDB CDCC", "DDAA DCDA DCCD", "DDAB DCDB DCCC ADAA ACDA ACCD", "DAAA CDAA CCDA CCCD", "DAAB AAAA CDAB CCDB CCCC"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DDAD DCDD", "ADAD ACDD", "DAAD CDAD CCDD", "AAAD", "DDCD", "ADCD", "DACD CDCD", "AACD", "DDBD DCCD", "ADBD ACCD", "DABD CDBD CCCD", "AABD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD CDCC", "DDAA DDBD DCDA DCCD", "DDBC DCCC ADAA ADBD ACDA ACCD", "DAAA DABD CDAA CDBD CCDA CCCD", "DABC AAAA AABD CDBC CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD CDDB CDCC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC ADAA ADBD ACDA ACCD", "DAAA DABD CDAA CDBD CCDA CCCD", "DAAB DABC AAAA AABD CDAB CDBC CCDB CCCC"}
      }
    },
    {
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DCDD", "ACDD", "DBDD CCDD", "ABDD", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DCDD", "DCDC ACDD", "DBDD CCDD", "DBDC ABDD CCDC", "DDDA", "ADDA", "DADA CDDA", "AADA", "DCDA", "ACDA", "DBDA CCDA", "ABDA"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DCDD", "DCDC ACDD", "DBDD CCDD", "DBDC ABDD CCDC", "DDDA", "DDDB ADDA", "DADA CDDA", "DADB AADA CDDB", "DCDA", "DCDB ACDA", "DBDA CCDA", "DBDB ABDA CCDB"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DDAD DCDD", "ADAD ACDD", "DAAD DBDD CDAD CCDD", "AAAD ABDD", "DDCD", "ADCD", "DACD CDCD", "AACD", "DCCD", "ACCD", "DBCD CCCD", "ABCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD CDCC", "DDAA DCDA DCCD", "DCCC ADAA ACDA ACCD", "DAAA DBDA DBCD CDAA CCDA CCCD", "DBCC AAAA ABDA ABCD CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD CDDB CDCC", "DDAA DCDA DCCD", "DDAB DCDB DCCC ADAA ACDA ACCD", "DAAA DBDA DBCD CDAA CCDA CCCD", "DAAB DBDB DBCC AAAA ABDA ABCD CDAB CCDB CCCC"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD", "DDAD DCDD", "ADAD ACDD", "DAAD DBDD CDAD CCDD", "AAAD ABDD", "DDCD", "ADCD", "DACD CDCD", "AACD", "DDBD DCCD", "ADBD ACCD", "DABD DBCD CDBD CCCD", "AABD ABCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD CDCC", "DDAA DDBD DCDA DCCD", "DDBC DCCC ADAA ADBD ACDA ACCD", "DAAA DABD DBDA DBCD CDAA CDBD CCDA CCCD", "DABC DBCC AAAA AABD ABDA ABCD CDBC CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD CDDB CDCC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC ADAA ADBD ACDA ACCD", "DAAA DABD DBDA DBCD CDAA CDBD CCDA CCCD", "DAAB DABC DBDB DBCC AAAA AABD ABDA ABCD CDAB CDBC CCDB CCCC"}
      }
    }
  },
  {
    {
      {
        {"", "ADDD", "CDDD", "BDDD", "", "", "", "", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "", "", "", "", "DDDA", "ADDA", "CDDA", "BDDA", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "", "", "", "", "DDDA", "DDDB ADDA", "CDDA", "BDDA CDDB", "", "", "", ""}
      },
      {
        {"", "ADDD", "CDDD", "BDDD", "DDAD", "ADAD", "CDAD", "BDAD", "DDCD", "ADCD", "CDCD", "BDCD", "", "", "", ""},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "DDAD", "DDAC ADAD", "CDAD", "BDAD CDAC", "DDDA DDCD", "DDCC ADDA ADCD", "CDDA CDCD", "BDDA BDCD CDCC", "DDAA", "ADAA", "CDAA", "BDAA"},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "DDAD", "DDAC ADAD", "CDAD", "BDAD CDAC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "CDDA CDCD", "BDDA BDCD CDDB CDCC", "DDAA", "DDAB ADAA", "CDAA", "BDAA CDAB"}
      },
      {
        {"", "ADDD", "CDDD", "BDDD", "DDAD", "ADAD", "CDAD", "BDAD", "DDCD", "ADCD", "CDCD", "BDCD", "DDBD", "ADBD", "CDBD", "BDBD"},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "DDAD", "DDAC ADAD", "CDAD", "BDAD CDAC", "DDDA DDCD", "DDCC ADDA ADCD", "CDDA CDCD", "BDDA BDCD CDCC", "DDAA DDBD", "DDBC ADAA ADBD", "CDAA CDBD", "BDAA BDBD CDBC"},
        {"", "DDDC ADDD", "CDDD", "BDDD CDDC", "DDAD", "DDAC ADAD", "CDAD", "BDAD CDAC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "CDDA CDCD", "BDDA BDCD CDDB CDCC", "DDAA DDBD", "DDAB DDBC ADAA ADBD", "CDAA CDBD", "BDAA BDBD CDAB CDBC"}
      }
    },
    {
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DCDD", "ACDD", "CCDD", "BCDD", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DCDD", "DCDC ACDD", "CCDD", "BCDD CCDC", "DDDA", "ADDA", "DADA CDDA", "AADA BDDA", "DCDA", "ACDA", "CCDA", "BCDA"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DCDD", "DCDC ACDD", "CCDD", "BCDD CCDC", "DDDA", "DDDB ADDA", "DADA CDDA", "DADB AADA BDDA CDDB", "DCDA", "DCDB ACDA", "CCDA", "BCDA CCDB"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DDAD DCDD", "ADAD ACDD", "DAAD CDAD CCDD", "AAAD BDAD BCDD", "DDCD", "ADCD", "DACD CDCD", "AACD BDCD", "DCCD", "ACCD", "CCCD", "BCCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD BDDA BDCD CDCC", "DDAA DCDA DCCD", "DCCC ADAA ACDA ACCD", "DAAA CDAA CCDA CCCD", "AAAA BDAA BCDA BCCD CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD BDDA BDCD CDDB CDCC", "DDAA DCDA DCCD", "DDAB DCDB DCCC ADAA ACDA ACCD", "DAAA CDAA CCDA CCCD", "DAAB AAAA BDAA BCDA BCCD CDAB CCDB CCCC"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DDAD DCDD", "ADAD ACDD", "DAAD CDAD CCDD", "AAAD BDAD BCDD", "DDCD", "ADCD", "DACD CDCD", "AACD BDCD", "DDBD DCCD", "ADBD ACCD", "DABD CDBD CCCD", "AABD BDBD BCCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD BDDA BDCD CDCC", "DDAA DDBD DCDA DCCD", "DDBC DCCC ADAA ADBD ACDA ACCD", "DAAA DABD CDAA CDBD CCDA CCCD", "DABC AAAA AABD BDAA BDBD BCDA BCCD CDBC CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD CDAD CCDD", "DAAC AAAD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD BDDA BDCD CDDB CDCC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC ADAA ADBD ACDA ACCD", "DAAA DABD CDAA CDBD CCDA CCCD", "DAAB DABC AAAA AABD BDAA BDBD BCDA BCCD CDAB CDBC CCDB CCCC"}
      }
    },
    {
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DCDD", "ACDD", "DBDD CCDD", "ABDD BCDD", "", "", "", "", "", "", "", ""},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DCDD", "DCDC ACDD", "DBDD CCDD", "DBDC ABDD BCDD CCDC", "DDDA", "ADDA", "DADA CDDA", "AADA BDDA", "DCDA", "ACDA", "DBDA CCDA", "ABDA BCDA"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DCDD", "DCDC ACDD", "DBDD CCDD", "DBDC ABDD BCDD CCDC", "DDDA", "DDDB ADDA", "DADA CDDA", "DADB AADA BDDA CDDB", "DCDA", "DCDB ACDA", "DBDA CCDA", "DBDB ABDA BCDA CCDB"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DDAD DCDD", "ADAD ACDD", "DAAD DBDD CDAD CCDD", "AAAD ABDD BDAD BCDD", "DDCD", "ADCD", "DACD CDCD", "AACD BDCD", "DCCD", "ACCD", "DBCD CCCD", "ABCD BCCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD BDDA BDCD CDCC", "DDAA DCDA DCCD", "DCCC ADAA ACDA ACCD", "DAAA DBDA DBCD CDAA CCDA CCCD", "DBCC AAAA ABDA ABCD BDAA BCDA BCCD CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD BDDA BDCD CDDB CDCC", "DDAA DCDA DCCD", "DDAB DCDB DCCC ADAA ACDA ACCD", "DAAA DBDA DBCD CDAA CCDA CCCD", "DAAB DBDB DBCC AAAA ABDA ABCD BDAA BCDA BCCD CDAB CCDB CCCC"}
      },
      {
        {"", "ADDD", "DADD CDDD", "AADD BDDD", "DDAD DCDD", "ADAD ACDD", "DAAD DBDD CDAD CCDD", "AAAD ABDD BDAD BCDD", "DDCD", "ADCD", "DACD CDCD", "AACD BDCD", "DDBD DCCD", "ADBD ACCD", "DABD DBCD CDBD CCCD", "AABD ABCD BDBD BCCD"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DACC AADA AACD BDDA BDCD CDCC", "DDAA DDBD DCDA DCCD", "DDBC DCCC ADAA ADBD ACDA ACCD", "DAAA DABD DBDA DBCD CDAA CDBD CCDA CCCD", "DABC DBCC AAAA AABD ABDA ABCD BDAA BDBD BCDA BCCD CDBC CCCC"},
        {"", "DDDC ADDD", "DADD CDDD", "DADC AADD BDDD CDDC", "DDAD DCDD", "DDAC DCDC ADAD ACDD", "DAAD DBDD CDAD CCDD", "DAAC DBDC AAAD ABDD BDAD BCDD CDAC CCDC", "DDDA DDCD", "DDDB DDCC ADDA ADCD", "DADA DACD CDDA CDCD", "DADB DACC AADA AACD BDDA BDCD CDDB CDCC", "DDAA DDBD DCDA DCCD", "DDAB DDBC DCDB DCCC ADAA ADBD ACDA ACCD", "DAAA DABD DBDA DBCD CDAA CDBD CCDA CCCD", "DAAB DABC DBDB DBCC AAAA AABD ABDA ABCD BDAA BDBD BCDA BCCD CDAB CDBC CCDB CCCC"}
      }
    }
  }
};

vector<string> dialect::lookupQuadActions(size_t p, size_t q, size_t r, size_t s, size_t c) {
    string words = quadActionLookup[p][q][r][s][c];
    // Thanks to https://stackoverflow.com/a/237280
    istringstream iss(words);
    vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{}};
    //
    return tokens;
}
