#ifndef RENDER_H
#define RENDER_H

#ifdef RENDER_C
#define GL3W_IMPLEMENTATION
#define GLAD_IMPLEMENTATION
#endif

#include "opengl.c"

#ifndef GL_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#endif

// #include "framework.c" // logger, image, network, timer, window, filesys, 

// local
void render_init();
void render_update(int width, int height);
void render_post(int width, int height);
void render_capture( int w, int h, int comps, void *pixels );
void render_quit();

// remote
// void vrinit( const char *host, int port );
// void vrswap( const void *pixels, int w, int h, int comp );
// void vrsize( int w, int h, int comp );

#ifndef SHIPPING
    #define GL(func) do { \
        func; \
        for(GLenum err; GL_NO_ERROR != (err = glGetError()); ) { \
            LOGERROR(OPENGL, "!OpenGL ERROR %08x ; after executing: %s", err, #func); \
        } \
    } while (0)
#else
    #define GL(func) func
#endif

#endif

// -----------------------------------------------------------------------------

#ifdef RENDER_C
#pragma once

void render_init() {
    #if 1 //def OPENGL3
    GLuint vao = 0;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    #endif
    glEnableVertexAttribArray(0);

    glClearColor(0.4,0.4,0.4,1);
}
void render_update(int width, int height) {
    glViewport(0, 0, width, height);
    //glClearColor(1,0,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
void render_post(int width, int height) {
//  text_draw(width, height);
}
void render_quit() {
//  text_quit();
}
void render_capture( int w, int h, int comps, void *pixels ) {
    // @todo, bench against http://roxlu.com/2014/048/fast-pixel-transfers-with-pixel-buffer-objects
    // should we switch tech?
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(0, 0, w, h, comps == 3 ? GL_RGB : GL_BGRA, GL_UNSIGNED_BYTE, pixels);
}

#endif
