/******************************************************************************
*               SOFA, Simulation Open-Framework Architecture                  *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                           Plugin Cosserat v1.0                              *
*                                                                             *
* This plugin is also distributed under the GNU LGPL (Lesser General          *
* Public License) license with the same conditions than SOFA.                 *
*                                                                             *
* Contributors: Defrost team  (INRIA, University of Lille, CNRS,              *
*               Ecole Centrale de Lille)                                      *
*                                                                             *
* Contact information: https://project.inria.fr/softrobot/contact/            *
*                                                                             *
******************************************************************************/

#include <Cosserat/constraint/CosseratActuatorConstraint.inl>
#include <Cosserat/config.h>
#include <sofa/core/ObjectFactory.h>

template class SOFA_COSSERAT_API sofa::component::constraintset::CosseratActuatorConstraint<sofa::defaulttype::Vec3Types>;

namespace Cosserat
{

using namespace sofa::defaulttype;

void registerCosseratActuatorConstraint(sofa::core::ObjectFactory* factory)
{
      factory->registerObjects(sofa::core::ObjectRegistrationData("Simulate cable actuation.")
            .add< sofa::component::constraintset::CosseratActuatorConstraint<Vec3Types> >(true));
}

} // namespace sofa

