//Cloud1

    int j;
    GLfloat p2=0.5f; GLfloat q2= 0.65f; GLfloat r2 = 0.09f;
    int tringle3=40;
    GLfloat tp3 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    glFlush();  // Render now
    //cl2
    int k;
    GLfloat p3=-0.2f; GLfloat q3= 0.65f; GLfloat r3 = 0.09f;
    int tringle4=40;
    GLfloat tp4 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p3,q3);
    for(k= 0;k<=tringle4; k++)
    {
        glVertex2f (
                    p3+(r3*cos(k*tp4/tringle4)),
                    q3+(r3*sin(k*tp4/tringle4))
                    );

    }
    glEnd ();
    glFlush();  // Render now
     //cl3
    int m;
    GLfloat p4=-0.4f; GLfloat q4= 0.63f; GLfloat r4 = 0.09f;
    int tringle5=40;
    GLfloat tp5 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p4,q4);
    for(m= 0;m<=tringle5; m++)
    {
        glVertex2f (
                    p4+(r4*cos(m*tp5/tringle5)),
                    q4+(r4*sin(m*tp5/tringle5))
                    );

    }
    glEnd ();
    glFlush();  // Render now


    //cloud 2

    int a;
    GLfloat p5=0.0f; GLfloat q5= 0.25f; GLfloat r5 = 0.09f;
    int tringle6=40;
    GLfloat tp6 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p5,q5);
    for(a= 0;a<=tringle6; a++)
    {
        glVertex2f (
                    p5+(r5*cos(a*tp6/tringle6)),
                    q5+(r5*sin(a*tp6/tringle6))
                    );

    }
    glEnd ();
    glFlush();  // Render now
    //
    int b;
    GLfloat p7=-0.2f; GLfloat q7= 0.25f; GLfloat r7 = 0.09f;
    int tringle7=40;
    GLfloat tp7 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p7,q7);
    for(b= 0;b<=tringle7; b++)
    {
        glVertex2f (
                    p7+(r7*cos(b*tp7/tringle7)),
                    q7+(r7*sin(b*tp7/tringle7))
                    );

    }
    glEnd ();
    glFlush();  // Render now
     //cl3
    int c;
    GLfloat p8=-0.4f; GLfloat q8= 0.25f; GLfloat r8 = 0.09f;
    int tringle8=40;
    GLfloat tp8 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p8,q8);
    for(c= 0;c<=tringle8; c++)
    {
        glVertex2f (
                    p8+(r8*cos(c*tp8/tringle8)),
                    q8+(r8*sin(c*tp8/tringle8))
                    );

    }
    glEnd ();
    glFlush();  // Render now
