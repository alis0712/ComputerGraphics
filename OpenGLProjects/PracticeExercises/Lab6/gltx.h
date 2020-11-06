/*
gltx.h
 */


/* includes */
#include <glut.h>


/* typedefs */

/* GLTXimage: Structure containing a texture image */
typedef struct {
  GLuint   width;			/* width of image */
  GLuint   height;			/* height of image */
  GLuint   components;			/* number of components in image */
  GLubyte* data;			/* image data */
} GLTXimage;


/* gltxDelete: Deletes a texture image
 * 
 * image - properly initialized GLTXimage structure
 */
void
gltxDelete(GLTXimage* image);

/* gltxReadRGB: Reads and returns data from an IRIS RGB image file.
 *
 * name       - name of the IRIS RGB file to read data from
 */
GLTXimage*
gltxReadRGB(char *name);
