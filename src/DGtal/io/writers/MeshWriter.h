/**
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

#pragma once

/**
 * @file  MeshWriter.h
 * @author Bertrand Kerautret (\c kerautre@loria.fr )
 * LORIA (CNRS, UMR 7503), University of Nancy, France
 *
 * @date 2012/07/08
 *
 * Header file for module  MeshWriter
 *
 * This file is part of the DGtal library.
 */

#if defined(MeshWriter_RECURSES)
#error Recursive header files inclusion detected in MeshWriter.h
#else // defined(MeshWriter_RECURSES)
/** Prevents recursive inclusion of headers. */
#define MeshWriter_RECURSES

#if !defined MeshWriter_h
/** Prevents repeated inclusion of headers. */
#define MeshWriter_h

//////////////////////////////////////////////////////////////////////////////
// Inclusions
#include <iostream>
#include <string>
#include <boost/static_assert.hpp>
#include <boost/type_traits.hpp>
#include "DGtal/base/Common.h"
#include "DGtal/io/colormaps/CColorMap.h"
//////////////////////////////////////////////////////////////////////////////

namespace DGtal
{

  /////////////////////////////////////////////////////////////////////////////
  // template class MeshWriter
  /**
   * Description of template struct 'MeshWriter' <p>
   * \brief Aim: Export a 3D Image using the Vol formats.
   *
   */
  template <typename TPoint>
  struct MeshWriter
  {
    // ----------------------- Standard services ------------------------------

   

    /** 
     * Export an Image with the Vol format.
     * 
     * @param filename name of the output file
     * @param aViewer containing exported information
     *
     * @return true if no errors occur.
     */
    static bool export2OFF(const std::string & filename, const  std::vector<TPoint> &vectVertex,
			   const std::vector <unsigned int>  &vectFaces,	unsigned int numFaces,				  
			   const std::vector<DGtal::Color> &vectColorFaces) throw(DGtal::IOException);
			   
  };
			   
}//namespace

///////////////////////////////////////////////////////////////////////////////
// Includes inline functions.
#include "DGtal/io/writers/MeshWriter.ih"

//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#endif // !defined MeshWriter_h

#undef MeshWriter_RECURSES
#endif // else defined(MeshWriter_RECURSES)
