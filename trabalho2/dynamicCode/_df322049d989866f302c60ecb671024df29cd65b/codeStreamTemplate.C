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
#line 21 "/home/aluno/OpenFOAM/aluno-11/run/flange_mod/system/blockMeshDict/#codeStream"
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
    void codeStream_df322049d989866f302c60ecb671024df29cd65b
    (
        Ostream& os,
        const dictionary& dict
    )
    {
//{{{ begin code
        #line 26 "/home/aluno/OpenFOAM/aluno-11/run/flange_mod/system/blockMeshDict/#codeStream"
pointField points(13);

        points[0]   = point(0,         0,    0.5);
        points[1]   = point(5,         0,    0.5);
        points[2]   = point(15,        0,    0.5);
        points[3]   = point(20,        0,    0.5);
        points[4]   = point(6.46,   3.53,    0.5);
        points[5]   = point(13.53,  3.53,    0.5);
        points[6]   = point(0,        10,    0.5);
        points[7]   = point(20,       10,    0.5);
        points[8]   = point(0,        60,    0.5);
        points[9]   = point(20,       60,    0.5);
        points[10]  = point(65,       60,    0.5);
        points[11]  = point(65,       10,    0.5);
        points[12]  = point(65,        0,    0.5);

        // Duplicate x points
        label sz = points.size();
        points.setSize(2*sz);
        for (label i = 0; i < sz; i++)
        {
            const point& pt = points[i];
            points[i+1*sz] = point( pt.x(), pt.y(), -pt.z());
        }

        label sz2 = points.size();
        points.setSize(2*sz2);
        for (label i = 0; i < sz2; i++)
        {
            const point& pt = points[i];
            points[i+1*sz2] = point(-pt.x(), pt.y(),  pt.z());
        }

        os  << points;
//}}} end code
    }
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

