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
// PinholeCamera.h - Created on 2008.12.18
//

#ifndef _PINHOLECAMERA_H_
#define _PINHOLECAMERA_H_

#include "Camera.h"

class PinholeCamera : public Camera
{
public:
	PinholeCamera(const float aspectRatio);
	~PinholeCamera();
	std::vector<Ray> makeSampleRays(const double x, const double y);
};

#endif /* _PINHOLECAMERA_H_ */
