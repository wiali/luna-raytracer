/*
   Copyright 2015 Ruben Moreno Montoliu <ruben3d at gmail dot com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

//
// PointLight.h - Created on 2008.12.06
//

#ifndef _POINTLIGHT_H_
#define _POINTLIGHT_H_

#include "Light.h"
#include "LightHasPosition.h"
#include "LightHasAttenuation.h"

class PointLight : public Light, public LightHasPosition,
					public LightHasAttenuation
{
public:
	PointLight(const Transform& tr, const double intensity, const Color& color,
				const Attenuation attenuation = ATT_NONE);

	~PointLight(){}

	void computeIntensity(const Vector& N, const Point& P,
							const std::list<Object*>& objects,
							std::list<Color>& I,
							std::list<Vector>& L) const;
};

#endif /* _POINTLIGHT_H_ */
