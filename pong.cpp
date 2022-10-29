/*Juego Pong*/
#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif



void draw(){
  glFlush();
}

int main(int argc, char **argv){
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
  glutInitWindowSize(800,600);
  glutInitWindowPosition(100,100);
  glutCreateWindow("Pong");
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}

