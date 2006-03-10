/**********************************************************************
 * $Id$
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.refractions.net
 *
 * Copyright (C) 2006 Refractions Research Inc.
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation. 
 * See the COPYING file for more information.
 *
 **********************************************************************/

#ifndef GEOS_GEOM_COORDINATEARRAYSEQUENCEFACTORY_H
#define GEOS_GEOM_COORDINATEARRAYSEQUENCEFACTORY_H

#include <vector>

#include <geos/geom/CoordinateSequenceFactory.h> // for inheritance

#include <geos/inline.h>

// Forward declarations
namespace geos {
	namespace geom { 
		class Coordinate;
	}
}

namespace geos {
namespace geom { // geos::geom

/**
 * \class CoordinateArraySequenceFactory geom.h geos.h
 *
 * \brief
 * Creates CoordinateSequences internally represented as an array of
 * Coordinates.
 */
class CoordinateArraySequenceFactory: public CoordinateSequenceFactory {

public:

	/** \brief
	 * Returns a CoordinateArraySequence based on the given vector
	 * (the vector is not copied - callers give up ownership).
	 */
	CoordinateSequence *create(std::vector<Coordinate> *coords) const;

	CoordinateSequence *create(std::vector<Coordinate> *coords, int dims) const;

   	/** @see CoordinateSequenceFactory::create(unsigned int, int) */
	CoordinateSequence *create(unsigned int size, unsigned int dimension=3) const;

	/** \brief
	 * Returns the singleton instance of CoordinateArraySequenceFactory
	 */
	static const CoordinateSequenceFactory *instance();
};

/// This is for backward API compatibility
typedef CoordinateArraySequenceFactory DefaultCoordinateSequenceFactory;

} // namespace geos::geom
} // namespace geos

#ifdef USE_INLINE
# include "geos/geom/CoordinateArraySequenceFactory.inl"
#endif

#endif // ndef GEOS_GEOM_COORDINATEARRAYSEQUENCEFACTORY_H

/**********************************************************************
 * $Log$
 * Revision 1.1  2006/03/09 16:46:49  strk
 * geos::geom namespace definition, first pass at headers split
 *
 **********************************************************************/