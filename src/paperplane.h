//
//  paperplane.h
//  PaperPlane
//
//  Created by Shivanker Goel and Shubham Jindal on 25/10/13.
//  Copyright (c) 2013 Shivanker. All rights reserved.
//

#ifndef PaperPlane_paperplane_h
#define PaperPlane_paperplane_h


/* Standard C/C++ includes */
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdarg>
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <limits>
using namespace std;


/* OpenGL libraries */
#ifdef __APPLE__
#include <GLUT/glut.h>
#include <OpenGL/glext.h>
#include <AL/alut.h>
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#else
#ifdef _WIN32
#include <windows.h>
#include <GL/freeglut.h>
#include <gl/glext.h>

#else
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glext.h>

#endif
#endif

#define PATH "resources/"

/* GLM */
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

/* Project Libraries */
#include "al.h"
#include "image.h"
#include "terrain.h"
#include "object.h"
#include "shading.h"
#include "explosion.h"

#endif
