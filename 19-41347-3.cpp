[7:36 AM] SADIA HOSSAIN
void bird() { /// SADIA

    glPushMatrix();

    glTranslatef(position,0.0,0.0);   ///Translate kore (X,Y,Z)

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.2f, 0.8f);

    glVertex2f(0.18f, 0.77f);

    glVertex2f(0.18f, 0.77f);

    glVertex2f(0.15f, 0.79f);

    glEnd();

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.1f, 0.8f);

    glVertex2f(-0.13f, 0.77f);

    glVertex2f(-0.13f, 0.77f);

    glVertex2f(-0.15f, 0.8f);

    glEnd();

    glPopMatrix();

}
void field() { /// SADIA

    glBegin(GL_QUADS);

    glColor3ub(51, 204, 51);

    glVertex2f(-1.0f, -0.3f);

    glVertex2f(1.0f, -0.3f);

    glVertex2f(1.0f, -1.0f);

    glVertex2f(-1.0f, -1.0f);

    glEnd();

}

void borderPool() /// SADIA

{

    glBegin(GL_QUADS);

    glColor3ub(217, 217, 217);

    glVertex2f(-0.4f, -0.3f);

    glVertex2f(0.4f, -0.3f);

    glVertex2f(0.5f, -1.0f);

    glVertex2f(-0.5f, -1.0f);

    glEnd();

}

void flag() { ///SADIA

    glPushMatrix();               ///same as glBegin kaj kore

    glTranslatef(0.09,0.0,0.0);  ///produces the translation specified by (x, y, z)

    glBegin(GL_QUADS);

    glColor3ub(150, 40, 27);

    glVertex2f(-0.1f, -1.0f);

    glVertex2f(0.1f, -1.0f);

    glVertex2f(0.05f, -0.9f);

    glVertex2f(-0.05f, -0.9f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(242, 242, 242);

    glVertex2f(-0.01f, -1.0f);

    glVertex2f(0.01f, -1.0f);

    glVertex2f(0.01f, 0.05f);

    glVertex2f(-0.01f, 0.05f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(0, 153, 51);

    glVertex2f(0.01f, 0.05f);

    glVertex2f(0.37f, 0.05f);

    glVertex2f(0.37f, -0.2f);

    glVertex2f(0.01f, -0.2f);

    glEnd();

    float x = 0.19f, y = -0.07f, r = 0.07;

    float twicePie = 2.0 * 3.1416;

    int trainglePoints = 20;

    glBegin(GL_TRIANGLE_FAN);   ///Gl_TRIANGLE_FAN can be used for drawing filled-in polygons

    glColor3ub(255, 0, 0);

    for(int i = 0; i<=trainglePoints; i++) {

        glVertex2f(x + r * cos(i * twicePie / trainglePoints),

                   y + r * sin(i * twicePie / trainglePoints));

    }

    glEnd();

    glPopMatrix();

}

void road() { ///SADIA

    glLoadIdentity();   ///parameters are not combined with the previous one

	glMatrixMode(GL_MODELVIEW);   ///sets the current matrix mode jno gari thik thake

	glPushMatrix();

    glTranslatef(0,-.7,0);    ///position

      glBegin(GL_POLYGON);

      glColor3f(0.698, 0.745, 0.7098);

      glVertex3f(-1.0f, -0.33f, 0.0f);

      glVertex3f(1.0f, -0.33f, 0.0f);

      glVertex3f(1.0f, 0.0f, 0.0f);

      glVertex3f(-1.0f, 0.0f, 0.0f);

/// Roadline

      glBegin(GL_QUADS);

      glColor3f(1.0, 1.0, 1.0);

      glVertex3f(-0.33f, -0.166f, 0.0f);

      glVertex3f(-0.166f, -0.166f, 0.0f);

      glVertex3f(-0.166f, -0.13f, 0.0f);

      glVertex3f(-0.33f, -0.13f, 0.0f);

      glEnd();

      glBegin(GL_QUADS);

      glColor3f(1.0, 1.0, 1.0);

      glVertex3f(0.33f, -0.166f, 0.0f);

      glVertex3f(0.833f, -0.166f, 0.0f);

      glVertex3f(0.833f, -0.13f, 0.0f);

      glVertex3f(0.33f, -0.13f, 0.0f);

      glEnd();

      glBegin(GL_QUADS);

      glColor3f(1.0, 1.0, 1.0);

      glVertex3f(0.833f, -0.166f, 0.0f);

      glVertex3f(1.0f, -0.166f, 0.0f);

      glVertex3f(1.0f, -0.13f, 0.0f);

      glVertex3f(0.833f, -0.13f, 0.0f);

      glEnd();

      glPopMatrix();

}
void grassFlower() /// SADIA

{

    glLoadIdentity();   ///replace kore matrix take

	glMatrixMode(GL_MODELVIEW);  ///aksathe show kore duita

	glPushMatrix();

    glScalef(.10,.10,0);

    glTranslatef(4.0f, -4.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,1,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void grassFlower2() ///SADIA

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.10,.10,0);

    glTranslatef(5.0f, -5.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,1,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void grassFlower3() ///SADIA

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.10,.10,0);

    glTranslatef(6.0f, -6.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,1,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void grassFlower4()  ///SADIA

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.10,.10,0);

    glTranslatef(7.0f, -7.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,1,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void rgrassFlower()

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.15,.10,0);

    glTranslatef(-4.0f, -4.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,0,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void rgrassFlower2()

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.15,.10,0);

    glTranslatef(-5.0f, -5.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,0,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void rgrassFlower3()

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.15,.10,0);

    glTranslatef(-6.0f, -6.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,0,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void rgrassFlower4()

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glScalef(.15,.10,0);

    glTranslatef(-7.0f, -7.0f, 0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1,0,0);

    glVertex3f(0.60f, 0.30f, 0.0f);

    glVertex3f(0.30f, .30f, 0.0f);

    glVertex3f(0.30f, 0.60f, 0.0f);

    glVertex3f(0.60f, 0.60f, 0.0f);

    glEnd();

    glPopMatrix();

}

void lamp() /// SADIA

{

    glLoadIdentity(); ///so that the new viewing parameters are not combined with the previous one.

	glMatrixMode(GL_MODELVIEW); ///can consider one value among the values

	glPushMatrix();

    glTranslatef(.9, -0.5f, 0.0f);

    glScalef(.5,.5,0);  ///produces a general scaling along the x, y, and z axes.

 glBegin(GL_QUADS);

	glColor3f(1.0f, 0.5f, 0.0f);  ///Orange

    glVertex2f(-0.01f, 0.4f);

    glVertex2f(-0.01f, -0.3f);

    glVertex2f(0.01f, -0.3f);

    glVertex2f(0.01f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 1.0f); ///Blue

    glVertex2f(-0.04f, -0.3f);

    glVertex2f(-0.04f, -0.35f);

    glVertex2f(0.04f, -0.35f);

    glVertex2f(0.04f, -0.3f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.1f, 0.1f); ///Dark blue

	glVertex2f(-0.06f, -0.35f);

    glVertex2f(-0.07f, -0.38f);

    glVertex2f(0.07f, -0.38f);

    glVertex2f(0.06f, -0.35f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.75f, 0.75f, 0.75f);

	glVertex2f(-0.04f, 0.4f);

    glVertex2f(0.0f, 0.38f);

    glVertex2f(0.04f, 0.4f);

    glVertex2f(0.05f, 0.5f);

    glVertex2f(0.0f, 0.55f);

    glVertex2f(-0.05f,0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 0.0f); ///yellow

    glVertex2f(0.0f, 0.55f);

	glVertex2f(0.05f, 0.5f);

	glVertex2f(0.025f, 0.6f);

	glEnd();

	glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 0.0f);///yellow

    glVertex2f(0.0f, 0.55f);

	glVertex2f(-0.05f,0.5f);

	glVertex2f(-0.025f, 0.6f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);///red

	glVertex2f(0.025f, 0.6f);

    glVertex2f(0.0f, 0.55f);

    glVertex2f(-0.025f, 0.6f);

    glVertex2f(0.0f, 0.65f);

	glEnd();

	glPopMatrix();

}

void lamp2() ///SADIA

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

    glTranslatef(-.9, -0.5f, 0.0f);

    glScalef(.5,.5,0);

 glBegin(GL_QUADS);

	glColor3f(1.0f, 0.5f, 0.0f);///Orange

    glVertex2f(-0.01f, 0.4f);

    glVertex2f(-0.01f, -0.3f);

    glVertex2f(0.01f, -0.3f);

    glVertex2f(0.01f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 1.0f); ///Blue

    glVertex2f(-0.04f, -0.3f);

    glVertex2f(-0.04f, -0.35f);

    glVertex2f(0.04f, -0.35f);

    glVertex2f(0.04f, -0.3f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.1f, 0.1f); ///Dark blue

	glVertex2f(-0.06f, -0.35f);

    glVertex2f(-0.07f, -0.38f);

    glVertex2f(0.07f, -0.38f);

    glVertex2f(0.06f, -0.35f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.75f, 0.75f, 0.75f);

	glVertex2f(-0.04f, 0.4f);

    glVertex2f(0.0f, 0.38f);

    glVertex2f(0.04f, 0.4f);

    glVertex2f(0.05f, 0.5f);

    glVertex2f(0.0f, 0.55f);

    glVertex2f(-0.05f,0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 0.0f); ///yellow

    glVertex2f(0.0f, 0.55f);

	glVertex2f(0.05f, 0.5f);

	glVertex2f(0.025f, 0.6f);

	glEnd();

	glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 0.0f); ///yellow

    glVertex2f(0.0f, 0.55f);

	glVertex2f(-0.05f,0.5f);

	glVertex2f(-0.025f, 0.6f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f); ///red

	glVertex2f(0.025f, 0.6f);

    glVertex2f(0.0f, 0.55f);

    glVertex2f(-0.025f, 0.6f);

    glVertex2f(0.0f, 0.65f);

	glEnd();

	glPopMatrix();

}

void day()  ///SADIA

{

    glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();

