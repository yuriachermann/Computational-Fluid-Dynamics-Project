/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    Template for use with codeStream.

\*---------------------------------------------------------------------------*/

#include "dictionary.H"
#include "fieldTypes.H"
#include "Ostream.H"
#include "Pstream.H"
#include "read.H"
#include "unitConversion.H"

//{{{ begin codeInclude
#line 21 "/home/yuriachermann/OpenFOAM/yuriachermann-11/run/trabalho2/system/blockMeshDict/#codeStream"
#include "pointField.H"
//}}} end codeInclude

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    void codeStream_af3a3e3ad5dd514f6e2d788b464f074b2f3e2df0
    (
        Ostream& os,
        const dictionary& dict
    )
    {
//{{{ begin code
        #line 26 "/home/yuriachermann/OpenFOAM/yuriachermann-11/run/trabalho2/system/blockMeshDict/#codeStream"
pointField points(13);

        points[0]   = point(-1000,          0,    0.5);
        points[1]   = point(-232.8409,      0,    0.5);
        points[2]   = point(0,              0,    0.5);
        points[3]   = point(144,            0,    0.5);
        points[4]   = point(1000,           0,    0.5);
        points[5]   = point(0,            120,    0.5);
        points[6]   = point(144,          120,    0.5);
        points[7]   = point(1000,         120,    0.5);
        points[8]   = point(-1000,        240,    0.5);
        points[9]   = point(-232.8409,    240,    0.5);
        points[10]  = point(0,            240,    0.5);
        points[11]  = point(144,          240,    0.5);
        points[12]  = point(1000,         240,    0.5);

        // Duplicate x points
        label sz = points.size();
        points.setSize(2*sz);
        for (label i = 0; i < sz; i++)
        {
            const point& pt = points[i];
            points[i+1*sz] = point( pt.x(), pt.y(), -pt.z());
        }

        os  << points;
//}}} end code
    }
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

